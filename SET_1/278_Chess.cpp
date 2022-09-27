#include <bits/stdc++.h>
using namespace std;

int main() {
    int cant;
    cin>>cant;
    for(int i=0;i<cant;i++){
        char clave;
        int m,n;
        cin>>clave>>m>>n;
        int r=0;

        if (clave=='r')
            r=min(m,n);

        if (clave=='k')
            r=ceil(m*n/2.0);
            
        if (clave=='Q')
            r=min(m,n);
            
        if (clave=='K')
            r=ceil(m/2.0)*ceil(n/2.0);
    
        cout<<r<<endl;
    }
    
    return 0;
}