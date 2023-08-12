#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;
        float j = 0;
        int len = str.length();
        for (int i = 0; i < len; i++)
        {
            j += 0.01;
        }
        cout << fixed << setprecision(2) << j << endl;
    }
}
