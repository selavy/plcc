#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cxxopts.hpp>

int main(int argc, char **argv) {
    cxxopts::Options options("plcc", "simple c compiler");
    options.add_options()
        ("sources", "input source files", cxxopts::value<std::vector<std::string>>())
        ("h,help", "print usage")
        ;
    options.parse_positional({ "sources" });
    auto args = options.parse(argc, argv);

    if (!args.count("sources")) {
        std::cerr << "fatal error: no input files\n\n"
            << options.help()
            << std::endl;
        return 1;
    }

    auto sources = args["sources"].as<std::vector<std::string>>();
    for (const auto& source : sources) {
        std::cout << "Compiling '" << source << "'...\n";
    }

    std::cout << "Bye." << std::endl;
    return 0;
}
