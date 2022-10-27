#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> parse_args(int argc, char** argv) {
    std::vector<std::string> out = std::vector<std::string>();
    
    for (int i = 0; i < argc; i++) {
        out.push_back(std::string(argv[i]));
    }

    return out;
}


int main(int argc, char** argv) {
    auto args = parse_args(argc, argv);

    std::cout << "Hello, world!" << std::endl;

    return 0;
}