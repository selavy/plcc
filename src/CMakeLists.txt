# src/CMakeLists.txt

add_executable(plcc
    plcc.cpp
    )
target_compile_features(plcc PUBLIC cxx_std_17)
target_link_libraries(plcc
    PUBLIC
        cxxopts::cxxopts
    PRIVATE
        cxx_project_options
        project_warnings
)
