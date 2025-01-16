#include <boost/algorithm/string.hpp>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string text = "Boost Library in C++";
    std::vector<std::string> words;

    boost::split(words, text, boost::is_space());
    std::cout << "Words in the text:\n";
    for (const auto &word : words)
    {
        std::cout << word << '\n';
    }

    return 0;
}
