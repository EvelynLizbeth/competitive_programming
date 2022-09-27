#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;   
    for(int i=0;i<t;i++){
        char pag_web[10][105];
        int importancia[10];    
        int max=-1;
        for(int j=0;j<10;j++){
            cin>>pag_web[j]>>importancia[j];
            if(importancia[j]>max)
                max=importancia[j];
        }
        cout<<"Case #"<<i+1<<":"<<endl;
        for(int k=0;k<10;k++){
            if(max==importancia[k])
                cout<<pag_web[k]<<endl;             
        }
    }
    return 0;
}