#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char current,previous=s[0];
    int count=0,final=0;
    int len=s.length();
    for(int i=0; i<len; i++){
        current=s[i];
        if(previous==current){
            count++;
        }
        else {
            final=max(final,count);
            count=1;
        }
        previous=s[i];
    }
    final=max(final,count);
    cout<<final<<endl;
}