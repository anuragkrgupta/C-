#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str = "hello world";
    cout << "Original string : " << str << endl;

    // Sort the string in ascending order    sort(str.begin(), str.end());
    cout << "String in ascending order : " << str << endl;

    // Sort the string in descending order
    sort(str.begin(), str.end(), greater<char>());
    cout << "String in descending order : " << str << endl;

    return 0;
}

