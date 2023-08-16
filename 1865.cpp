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
        int n;
        cin >> str >> n;
        if (str == "Thor")
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }
}
