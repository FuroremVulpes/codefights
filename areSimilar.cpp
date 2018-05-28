#include <iostream>
#include <vector>
#include <algorithm>

bool areSimilar(std::vector<int> a, std::vector<int> b);

int main()
{
    int aInt[3] = {4, 6, 3};
    int bInt[3] = {3, 4, 6};
    std::vector<int> a, b;
    a.assign(aInt, aInt+4);
    b.assign(bInt, bInt+4);

    std::cout << areSimilar(a, b) << std::endl;
}

bool areSimilar(std::vector<int> a, std::vector<int> b) {
    int misfits = 0;
    for (int i = 0; i < a.size(); ++i) {
        if (misfits > 2) return false;
        if (a[i] != b[i]) misfits++;
    }
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    if (misfits > 2) return false;
    else return a == b;
}
