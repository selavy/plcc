# third_party/CMakeLists.txt

# Catch 2
option(CATCH_USE_VALGRIND "Perform SelfTests with Valgrind" OFF)
option(CATCH_BUILD_TESTING "Build SelfTest project" OFF)
option(CATCH_BUILD_EXAMPLES "Build documentation examples" OFF)
option(CATCH_BUILD_EXTRA_TESTS "Build extra tests" OFF)
option(CATCH_ENABLE_COVERAGE "Generate coverage for codecov.io" OFF)
option(CATCH_ENABLE_WERROR "Enable all warnings as errors" ON)
option(CATCH_INSTALL_DOCS "Install documentation alongside library" OFF)
option(CATCH_INSTALL_HELPERS "Install contrib alongside library" OFF)
add_subdirectory(Catch2)

# cxxopts
option(CXXOPTS_BUILD_EXAMPLES "Set to OFF to build examples" OFF)
option(CXXOPTS_BUILD_TESTS "Set to OFF to build tests" OFF)
option(CXXOPTS_ENABLE_INSTALL "Generate the install target" OFF)
add_subdirectory(cxxopts)
