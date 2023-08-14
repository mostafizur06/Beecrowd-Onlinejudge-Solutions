#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    getchar();   // Clear the newline character from the input buffer
    while (T--)
    {
        string str;
        getline(cin, str);
        cout << "I am Toorg!" << endl;
    }
}
