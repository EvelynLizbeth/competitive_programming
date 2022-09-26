#include <bits/stdc++.h>
using namespace std;

int main(){

    int casos;
    int participantes;
    int vel;
    cin>>casos;
    for(int i=1;i<=casos;i++){
        int max=0;
        cin>>participantes;
        for(int j=0;j<participantes;j++){
            cin>>vel;
            if(vel>max) max= vel;
        }
        cout<<"Case "<<i<<": "<<max<<"\n";
    }
    return 0;
}
