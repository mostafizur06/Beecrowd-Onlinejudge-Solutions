#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    while (cin >> str)
    {
        int len = str.length();
        int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        for (int i = 0; i < len; i++)
        {
            if (str[i] == '0')
            {
                count[0]++;
            }
            else if (str[i] == '1')
            {
                count[1]++;
            }
            else if (str[i] == '2')
            {
                count[2]++;
            }
            else if (str[i] == '3')
            {
                count[3]++;
            }
            else if (str[i] == '4')
            {
                count[4]++;
            }
            else if (str[i] == '5')
            {
                count[5]++;
            }
            else if (str[i] == '6')
            {
                count[6]++;
            }
            else if (str[i] == '7')
            {
                count[7]++;
            }
            else if (str[i] == '8')
            {
                count[8]++;
            }
            else if (str[i] == '9')
            {
                count[9]++;
            }
        }
        int index = 0, max = count[0];
        for (int i = 1; i < 10; i++)
        {
            if (max <= count[i])
            {
                max = count[i];
                index = i;
            }
        }
        cout << index << endl;
    }
}
