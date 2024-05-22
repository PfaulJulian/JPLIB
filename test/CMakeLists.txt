add_executable(jptypetest jptypetest.cpp)
target_link_libraries(jptypetest PUBLIC jptype)

add_executable(jpfiletest jpfiletest.cpp)
target_link_libraries(jpfiletest PUBLIC jpfile)