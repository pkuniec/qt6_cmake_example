qt_add_library(examplelib STATIC
    examplelib.h examplelib.cpp
)

target_link_libraries(examplelib PRIVATE Qt6::Core)
target_include_directories(examplelib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
