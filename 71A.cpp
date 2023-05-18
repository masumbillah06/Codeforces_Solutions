#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tcase; cin >> tcase; cin.ignore();
    while (tcase--)
    {
        string str;
        cin >> str;
        int len = str.length();
        if(len > 10) cout << (char)str[0] << len-2 << (char)str[len-1] << endl;
        else cout << str << endl;
    }
    
    return 0;
}