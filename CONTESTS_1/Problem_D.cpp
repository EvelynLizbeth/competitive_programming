#include<bits/stdc++.h>
using namespace std;
const long mx=200000;
int main(){
    int n;
    while( cin>>n) {
        if(n==0) break;
        string ms[mx];
        int curso[5];

        for( int i=0; i!=n; ++i){
            ms[i]="";

            cin>> curso[0]>> curso[1]>> curso[2]>> curso[3]>> curso[4];
            sort(curso,curso+5);
            for( int j=0; j!=5; ++j){
                ms[i]=ms[i]+char(curso[j]/100+'0');
                ms[i]=ms[i]+char((curso[j]/10)%10+'0');
                ms[i]=ms[i]+char(curso[j]%10+'0');
            }

        }
        map<string, int> M;
        for( int i=0; i!=n; ++i)
            ++M[ms[i]];

        int max=0;
        map<string, int>::iterator it=M.begin();
        while( it!=M.end()){
            if( it->second>max) 
                max=it->second;
            it++;
        }

        int num=0;
        it=M.begin();
        while( it!=M.end()){
            if( it->second == max) 
                num+=it->second; 
            it++;
        }
        cout<<num;
    }    
    return 0;
}