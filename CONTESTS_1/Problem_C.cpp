#include<bits/stdc++.h>
using namespace std;
int arr[10000]={0};
int main(){
    int c1,c2;
    while(cin>>c1>>c2){
        int acum=0;
        int aux,aux2;
        if(c1==0 && c2==0){
            break;
        }
        
        for(int i=0; i<c1; i++){
            cin>>aux;
            arr[aux]=1;
        }
        for(int i=0; i<c2; i++){
            cin>>aux2;
            if(arr[aux2]){
                acum++;
            }
            
        
        }
        cout<<acum<<endl;
    }
    return 0;
}