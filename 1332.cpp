#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;
        int len = str.length();
        if (len == 5)
            cout << 3 << endl;
        else if ((str[0] == 'o' and str[1] == 'n') or (str[1] == 'n' and str[2] == 'e') or str[0] == 'o' and str[2] == 'e')
            cout << 1 << endl;

        else
            cout << 2 << endl;
    }
}
