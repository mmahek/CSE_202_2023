#include <iostream>
#include <string>
#include <map>

std::string convertToMorseCode(const std::string &sentence)
{
    // Morse code mapping
    std::map<char, std::string> morseCode = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."}, {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"}, {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"}, {'Z', "--.."}, {' ', "/"}};

    std::string result;

    for (char ch : sentence)
    {
        // Convert lowercase letters to uppercase
        char upperCh = std::toupper(ch);

        // Check if character is in the mapping
        if (morseCode.find(upperCh) != morseCode.end())
        {
            result += morseCode[upperCh] + " ";
        }
    }

    return result;
}

int main()
{
    std::string sentence;

    // Input sentence
    std::getline(std::cin, sentence);

    // Convert to Morse code
    std::string morseCode = convertToMorseCode(sentence);

    // Display Morse code
    std::cout << morseCode << std::endl;

    return 0;
}
