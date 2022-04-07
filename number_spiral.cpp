#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    vector<long long> ans;
    while(T){
        long long x,y;
        cin>>x>>y;
        if(x>y){
            if(x%2==0) ans.push_back(x*x-y+1);
            else ans.push_back((x-1)*(x-1) + y);
        }
        else {
            if(y%2==0) ans.push_back((y-1)*(y-1) + x);
            else ans.push_back(y*y-x+1);
        }
        T--;
    }
    for(auto it=ans.begin(); it!=ans.end(); it++) cout<<*it<<endl;
}