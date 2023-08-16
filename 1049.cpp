#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
    string a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a[0] == 'v' and b[0] == 'a' and c[0] == 'c')
        cout << "aguia" << endl;
    else if (a[0] == 'v' and b[0] == 'a' and c[0] == 'o')
        cout << "pomba" << endl;
    else if (a[0] == 'v' and b[0] == 'm' and c[0] == 'o')
        cout << "homem" << endl;
    else if (a[0] == 'v' and b[0] == 'm' and c[0] == 'h')
        cout << "vaca" << endl;
    else if (a[0] == 'i' and b[0] == 'i' and c[2] == 'm')
        cout << "pulga" << endl;
    else if (a[0] == 'i' and b[0] == 'i' and c[2] == 'r')
        cout << "lagarta" << endl;
    else if (a[0] == 'i' and b[0] == 'a' and c[0] == 'h')
        cout << "sanguessuga" << endl;
    else if (a[0] == 'i' and b[0] == 'a' and c[0] == 'o')
        cout << "minhoca" << endl;
}
