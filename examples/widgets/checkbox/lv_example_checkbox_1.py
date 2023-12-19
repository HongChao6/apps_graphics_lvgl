def event_handler(e):
    code = e.get_code()
    obj = e.get_target_obj()
    if code == lv.EVENT.VALUE_CHANGED:
        txt = obj.get_text()
        if obj.get_state() & lv.STATE.CHECKED:
            state = "Checked"
        else:
            state = "Unchecked"
        print(txt + ":" + state)


lv.screen_active().set_flex_flow(lv.FLEX_FLOW.COLUMN)
lv.screen_active().set_flex_align(lv.FLEX_ALIGN.CENTER, lv.FLEX_ALIGN.START, lv.FLEX_ALIGN.CENTER)

cb = lv.checkbox(lv.screen_active())
cb.set_text("Apple")
cb.add_event_cb(event_handler, lv.EVENT.ALL, None)

cb = lv.checkbox(lv.screen_active())
cb.set_text("Banana")
cb.add_state(lv.STATE.CHECKED)
cb.add_event_cb(event_handler, lv.EVENT.ALL, None)

cb = lv.checkbox(lv.screen_active())
cb.set_text("Lemon")
cb.add_state(lv.STATE.DISABLED)
cb.add_event_cb(event_handler, lv.EVENT.ALL, None)

cb = lv.checkbox(lv.screen_active())
cb.add_state(lv.STATE.CHECKED | lv.STATE.DISABLED)
cb.set_text("Melon")
cb.add_event_cb(event_handler, lv.EVENT.ALL, None)

cb.update_layout()

