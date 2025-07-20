#include <bits/stdc++.h>
using namespace std;
int cnt=0;
void solve(int a,int b,int c){
    if(a+b+c>=2) cnt++;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        solve(a,b,c);
    }
    cout<<cnt;
    return 0;
}