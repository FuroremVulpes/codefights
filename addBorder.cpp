#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


std::vector<std::string> addBorder(std::vector<std::string> picture);

int main()
{
    std::string sArray[2] = {"abc", "ded"};
    std::vector<std::string> sVector;
    sVector.assign(sArray, sArray+3);

    std::vector<std::string>  picture = addBorder(sVector);
    for (const auto i : picture) {
        std::cout << i << '\n';
    }
}

std::vector<std::string> addBorder(std::vector<std::string> picture) {
    std::vector<std::string> result;
    const int size = picture[0].length() + 2;
    std::string first(size, '*');
    result.push_back(first);
    for (const auto it : picture) {
        result.push_back('*' + it + '*');
    }
    std::string last(size, '*');
    result.push_back(last);
    return result;
}
