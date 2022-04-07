#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1) cout<<n<<endl;
    else if(n<=3) cout<<"NO SOLUTION"<<endl;
    else if(n==4) cout<<"2 4 1 3"<<endl;
    else {
        if(n%2==0){
            for(int i=n-2; i>0; i-=2){
            cout<<i<<" ";
            }
        }
        else {
            for(int i=n-1; i>0; i-=2){
            cout<<i<<" ";
            }
        }
        cout<<n<<" ";
        for(int i=1; i<n; i+=2){
            cout<<i<<" ";
        }
    }
    return 0;
}