#include <iostream>
#include <vector>
#include <algorithm>


std::vector<int> alternatingSums(std::vector<int> a);

int main()
{
    int myints[] = {16,2,77,29};
    std::vector<int> a (myints, myints + sizeof(myints) / sizeof(int) );
    std::vector<int>  b = alternatingSums(a);
    for (auto i : b) {
        std::cout << i << '\n';
    }
}

std::vector<int> alternatingSums(std::vector<int> a) {
    std::vector<int> weightResult (2, 0);
    for (auto i = 0; i < a.size(); ++i) {
        if (i%2 == 0) weightResult[0] += a[i];
        else weightResult[1] += a[i];
    }
    return weightResult;
}
