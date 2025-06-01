add_executable(test_memento test_memento.cpp)
target_link_libraries(test_memento PRIVATE GTest::GTest GTest::Main MementoLib)
add_test(NAME TestMemento COMMAND test_memento)
