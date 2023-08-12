#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int len = str.length();
    if (len <= 80)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
