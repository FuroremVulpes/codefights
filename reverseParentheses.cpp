#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string reverseParentheses(string s);

int main()
{
    cout << reverseParentheses("a(bc)de") << endl;
    cout << reverseParentheses("abc(cba)ab(bac)c") << endl;
}

string reverseParentheses(string s)
{
    int pos1 = s.find_last_of('(');
    int pos2 = pos1 + 1 + s.substr(pos1+1, s.length()-pos1-1).find_first_of(')');

    while(pos1 != -1 && pos2 != -1) {
        string reversedPart = s.substr(pos1+1, pos2-pos1-1);
        reverse(reversedPart.begin(), reversedPart.end());
        s = s.substr(0, pos1) + reversedPart + s.substr(pos2+1, s.length()-pos2-1);
        pos1 = s.find_last_of('(');
        pos2 = pos2 = pos1 + 1 + s.substr(pos1+1, s.length()-pos1-1).find_first_of(')');
    }
    return s;
}
