#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char x[16];
    cin.getline(x, 16);
    if (strlen(x) >= 13 && strlen(x) <= 16)
        cout << "Numarul de pe card este introdus corect";
    else
    {
        cout << "Numarul de pe card este introdus gresit";
        return 0;
    }
    cout << " " << endl;

    /* char s[32],*p;
     strcpy(s,x);
     p=strtok(x," ");
     if(strlen(p)==4)
         cout<<"Cardul este visa";
     else
         if(strlen(p)==5)
     */

    if (x[0] == '4')
        cout << "cardul este visa";
    else
        if (x[0] == '5')
            cout << "cardul este mastercard";
        else
            if (x[0] == '6')
                cout << "cardul este discover cards";
            else
                if (x[0] == '3')
                    cout << "cardul este american express";

    cout << " " << endl;
    int s1 = 0, s2 = 0;
    int a;
    for (int i = strlen(x) - 2; i >= 0; i = i - 2)
    {
        a = x[i] - '0';
        a = a * 2;
        if (a >= 10)
            s1 = s1 + a % 10 + a / 10;
        else
            s1 = s1 + a;

    }
    for (int i = strlen(x) - 1; i >= 0; i = i - 2)
    {
        a = x[i] - '0';
        s2 = s2 + a;
    }

    int s;
    s = s1 + s2;
    if (s % 10 == 0)
        cout << "cardul este valid";
    else
        cout << "cardul este invalid";
    return 0;
}