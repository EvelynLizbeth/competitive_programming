#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    while(cin>>m>>n){
        if(m==0 && n==0) break;
        int menor = min(m, n);
        int mayor = max(m, n), r;

        if (menor == 1)
            r = mayor;
        else if (menor == 2) {
            int c = mayor % 4;
            if (c)  r = (mayor / 4) * 4 + (c > 1 ? 4 : 2);
            else  r = (mayor / 4) * 4;
        }
        else r = (menor * mayor + 1) / 2;
        cout<<r<<" knights may be placed on a "<<m<<" row "<<n<<" column board.\n";
    }
    return 0;
}