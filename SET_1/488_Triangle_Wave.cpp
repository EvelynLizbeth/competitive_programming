#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ampli, fre, n_caso=0;
    cin>>n;
    while(n--) {
        cin>>ampli>>fre;
        if(++n_caso > 1) cout<<endl;

        for(int i = 0; i < fre; i++) {
            for(int j = -ampli+1; j < ampli; j++) {
                for(int k = ampli-abs(j); k > 0; k--)
                cout<<ampli-abs(j);
                cout<<endl;
            }
            if(i != fre-1) cout<<endl;
        }
    }
    return 0;
}