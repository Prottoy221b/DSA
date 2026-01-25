#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    int left = 0;
    int right = str.length() - 1;
    while (left < right)
    {
        swap(str[left], str[right]);
        left++;
        right--;
    }
    cout << str << endl;
    return 0;
}
