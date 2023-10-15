qt_add_executable(helloworld
    main.cpp
)

add_subdirectory(Example)

list(APPEND MODULE_QML_FILES
    qml/Main.qml)

#list(APPEND MODULE_ASSETS images/beer.svg)

qt_add_qml_module(helloworld
    URI "app"
    VERSION 1.0
    RESOURCE_PREFIX /
    QML_FILES
        ${MODULE_QML_FILES}
#    RESOURCES
#        ${MODULE_ASSETS}
)

target_link_libraries(helloworld PRIVATE
    Qt6::Quick Qt6::QuickControls2
    examplelib
    ExampleLibplugin
)

set_target_properties(helloworld PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)
