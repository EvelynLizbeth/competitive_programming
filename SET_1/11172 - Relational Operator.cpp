#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a,b;
    for (int i=0;i<t;i++){
        cin>>a;
        cin>>b;
        if(a>b) cout<<">\n";
        if(a<b) cout<<"<\n";
        if(a==b) cout<<"=\n";
    }

}