#include <bits/stdc++.h>
using namespace std;

int main(){
    int partici, presu, hoteles, semanas;
    
    while(cin>>partici>>presu>>hoteles>>semanas){
        int min = presu;
        for (int i = 0;i < hoteles; i++){
            int precio; cin>>precio;
            for (int j = 0; j < semanas; j++) {
                int camas; cin>>camas;
                if ((precio*partici) <= min && camas >= partici )
                    min= precio*partici;
            }
        }
        if (min < presu) cout<<min<<endl;
        else cout<<"stay home\n";
    }

    return 0;
}