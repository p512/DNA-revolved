#include "utils.hpp"


void printHelp()
{
    std::cout << "Format help: dna, line, byte" << std::endl;
    std::cout << "load <file> <format>" << std::endl;
    std::cout << "conv <format> <format>" << std::endl;
    std::cout << "print <format>" << std::endl;
    std::cout << "save <format> <file>" << std::endl;
    std::cout << std::endl;
}

void errCmd(const std::string& msg)
{
    std::cerr << msg << std::endl << "Use help to view command syntax." << std::endl << std::endl;
}
