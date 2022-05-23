add_test( HelloTest.BasicAssertions [==[I:/Prod/C++/app/build/test/Debug/test.exe]==] [==[--gtest_filter=HelloTest.BasicAssertions]==] --gtest_also_run_disabled_tests)
set_tests_properties( HelloTest.BasicAssertions PROPERTIES WORKING_DIRECTORY [==[I:/Prod/C++/app/build/test]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( test_TESTS HelloTest.BasicAssertions)
