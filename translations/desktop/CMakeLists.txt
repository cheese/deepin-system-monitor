find_program(DESKTOP_TS_CONV deepin-desktop-ts-convert REQUIRED)
add_custom_target(APP_DESKTOP_FILE
    ALL
    COMMAND ${DESKTOP_TS_CONV} ts2desktop ${CMAKE_CURRENT_SOURCE_DIR}/${DESKTOP_FILE} ${CMAKE_CURRENT_SOURCE_DIR}/ ${DESKTOP_FILE}.tmp
    COMMAND mv ${DESKTOP_FILE}.tmp ${DESKTOP_FILE}
)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/${DESKTOP_FILE} DESTINATION share/applications)
