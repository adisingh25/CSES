#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long t_s=0;
    for(int i=0; i<n-1; i++){
        long long temp;
        cin>>temp;
        t_s+=temp;
    }
    long long sum=n*(n+1)*0.5;
    cout<<sum-t_s<<endl;
}