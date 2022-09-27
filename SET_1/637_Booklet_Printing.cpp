#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while (cin>>n){
        if (n==0) break;
        cout<<"Printing order for "<<n<<" pages:\n";
        
        if (n== 1){
            cout<<"Sheet 1, front: Blank, 1\n";
        }
        else{
            int numP = n/4;
            if (numP*4<n) numP=numP+1;
            
            int salto = (numP*4)-n;
            
            for (int i = 0; i < numP; i++){
                int primerFront = n-(i*2)+salto;
                int segundoFront = i*2+1;
                
                if (primerFront <= n){
                    cout<<"Sheet "<<i+1<<", front: " <<primerFront<<", "<<segundoFront<<endl;
                    cout<<"Sheet "<<i+1<<", back : "<<segundoFront+1<<", "<<primerFront-1<<endl;
                }
                else if (primerFront-1 <= n){
                    cout<<"Sheet "<<i+1<<", front: Blank, "<<segundoFront<<endl;
                    cout<<"Sheet "<<i+1<<", back : "<<segundoFront+1<<", "<< primerFront-1<<endl;
                }  
                else{
                    cout<<"Sheet "<<i+1<<", front: Blank, "<<segundoFront<<endl;
                    cout<<"Sheet "<<i+1<<", back : "<<segundoFront+1<<", Blank\n";
                }
                   
            }
        }
    }

}