#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main()
{

    string str;
    cin >> str;
    int len = str.length();
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '1')
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        cout << str << 0 << endl;
    }
    else
        cout << str << 1 << endl;
}
