qt_add_library(ExampleLib STATIC)

#set_target_properties(ExampleLib PROPERTIES AUTOMOC OK)
target_link_libraries(ExampleLib PRIVATE Qt6::Quick)

list(APPEND MODULE_QML_FILES
    MyItem.qml)

list(APPEND MODULE_ASSETS
    images/beer.svg
)

qt_add_qml_module(ExampleLib
    URI "Example"
    VERSION 1.0
    RESOURCE_PREFIX /
    QML_FILES
        ${MODULE_QML_FILES}
    RESOURCES
        ${MODULE_ASSETS}
)
