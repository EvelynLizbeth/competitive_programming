#include <bits/stdc++.h>
using namespace std;

typedef struct DATO{
    int elem;
    int p_i;
    int p_j;
} dato_;

dato_ D[2000];


int comp(dato_ w, dato_ z){
    if(w.p_j !=z.p_j)
        return w.p_j<z.p_j;
    return w.p_i <z.p_i;
}
int main(){
    int m,n;
    int r,e,Pos[2000];
    while(cin>>m>>n){
        int c=0;
        for(int i=1;i<=m;i++){
            cin>>r;
            for(int j=1;j<=r;j++){
                cin>>e;
                Pos[j] = e;
            }
            for(int j=1;j<=r;j++){
                cin>>e;
                D[c].elem=e;
                D[c].p_i=i;
                D[c].p_j=Pos[j];
                c++;
            }

        }

        cout<<n<<" "<<m<<endl;
        sort(D,D+c,comp);
        int cambio=0;
        for(int i=1;i<=n;i++){
            int tam=0;
            while (D[cambio].p_j ==i){
                cambio++;
                tam++;
            }
            cout<<tam;
            for(int j=cambio-tam;j<cambio;j++){
                cout<<" "<<D[j].p_i;
            }
            cout<<endl;
            for(int j=cambio-tam; j<cambio;j++){
                if(cambio-tam<j) cout<<" ";
                
                cout<<D[j].elem;
            }
            cout<<endl;
        }
    }
    
    return 0;
}