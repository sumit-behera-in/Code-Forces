#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k = 0;
    cin>>k;
    while(k--){
        string s ;
        cin >> s;
        int temp = s.size();
        string ans = "";
        if(temp<11) ans = s;
        else{
            ans+=s[0];
            ans+=to_string(temp-2);
            ans+=s[temp-1];
        }
        cout<<ans<<endl;
    }
    return 0;
}

