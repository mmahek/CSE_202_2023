// // /*

// // 12222030 - Gaurav Raj Singh
// // 8:20 PM
// // create a fnc with length of string and string
// // then base case will will be if length == 1
// // and return str[len-1] + fnc(str, len-1)

// // 12
// // 12222030 - Gaurav Raj Singh
// // 8:22 PM
// // string fnc(string str, int length){

// // 12
// // 12222030 - Gaurav Raj Singh
// // 8:23 PM
// // string fnc(String str, int len){
// // if(len == 1) return str[len-1]
// // return str[len-1] + fnc(str, len-1)
// // }

// // something like this

// // 12
// // 12216999 - Tushar Bhardwaj
// // 8:23 PM
// // base condition will be when index reaches to '\0'
// // else recursive call with index-1
// // */
// // #include <iostream>
// // #include <string>
// // #include<stdlib.h>

// // std::string reverseString(const std::string &str, int start, int end)
// // {
// //     // Base case: if the start index is greater than or equal to the end index, return the string
// //     if (start >= end)
// //     {
// //         return str;
// //     }

// //     // Swap the characters at start and end indices
// //     std::swap(str[start], str[end]);

// //     // Recursive step: call the function with updated start and end indices
// //     return reverseString(str, start + 1, end - 1);
// // }

// // int main()
// // {
// //     std::string inputString = "Hello, World!";
// //     std::string reversedString = reverseString(inputString, 0, inputString.length() - 1);
// //     std::cout << "Reversed String: " << reversedString << std::endl;
// //     return 0;
// // }
// #include <iostream>
// #include <string>

// void replacePi(std::string &str)
// {
//     size_t found = str.find("pi"); // Find the first occurrence of "pi"
//     while (found != std::string::npos)
//     {
//         // Replace "pi" with "3.14"
//         str.replace(found, 2, "3.14");
//         found = str.find("pi", found + 1); // Find the next occurrence of "pi"
//     }
// }

// int main()
// {
//     std::string inputString = "pippiezypi";

//     // Replace "pi" with "3.14" in the input string
//     replacePi(inputString);

//     // Output the modified string
//     std::cout << "Modified String: " << inputString << std::endl;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
string fun(string x, int y)
{
    if (x[y] == '\0')
    {
        return "\0";
    }
    if (x[y] == 'p' && x[y + 1] == 'i')
    {
        return "3.14" + fun(x, y + 2);
    }
    else
    {
        return x[y] + fun(x, y + 1);
    }
}
int main()
{
    string n;
    cin >> n;
    cout << fun(n, 0);
    return 0;
}