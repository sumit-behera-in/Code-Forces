#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k ;
    cin>>k;
    int ans =0;
    while(k--){
        int tem =0;    
        for(int i=0;i<3;i++){
            int temp ;
            cin>>temp;
            tem+=temp;
        }
        ans += (tem>1)?1:0;
    }
    cout<<ans;
}