add_library(testLib STATIC ${CMAKE_CURRENT_SOURCE_DIR}/testClass.cpp)
target_include_directories(testLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)