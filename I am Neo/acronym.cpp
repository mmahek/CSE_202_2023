#include <iostream>
#include <string>
#include <sstream>

std::string generateAcronym(const std::string &phrase)
{
    std::string acronym = "";
    std::istringstream iss(phrase);
    std::string word;

    while (iss >> word)
    {
        if (!word.empty())
        {
            acronym += std::toupper(word[0]);
        }
    }

    return acronym;
}

int main()
{
    std::string phrase;
    std::getline(std::cin, phrase);

    std::string acronym = generateAcronym(phrase);

    std::cout << acronym << std::endl;

    return 0;
}
