#include<bits/stdc++.h>
using namespace std;
int main(){
    char equiv[] = { '0','1','2','3','0','1','2','0','0',
                    '2','2','4','5','5','0','1','2','6',
                    '2','3','0','1','0','2','0','2' };
    string soundex;
    while(cin>>soundex){
        string LETRA,res;
        for(int i=0;i<soundex.length();i++){
            char e=equiv[soundex[i]-'A'];
            LETRA=LETRA+e;
        }
        
        for(int i=0;i<LETRA.length();i++){
            if(LETRA[i]!=LETRA[i+1] && LETRA[i]!='0')
                res+=LETRA[i];
        }
        cout<<res<<endl;
    }
    return 0;
}

