#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r; cin >> r;
    bool ara[r][3];
    int cnt = 0, cnt2;
    for(int i=0; i<r; i++){
        cnt2 = 0;
        for(int j=0; j<3; j++){
            bool b; cin >> b;
            if(b) cnt2++;
        }
        if(cnt2 >= 2) cnt++;
    }
    cout << cnt << endl;
    return 0;
}