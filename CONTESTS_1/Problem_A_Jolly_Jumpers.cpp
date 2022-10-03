#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,elem;
    while(cin>>n ){
        if(n==0) break;
        int arr[n];
        
        for(int i=0;i<n;i++){
            cin>>elem;
            arr[i]=elem;
            
        }
        int b[n]={0};
        int es_jolly=0;

        for(int i=1;i<n;i++){
            int resta=abs(arr[i]-arr[i-1]);
            if(resta<n) 
                b[resta]=b[resta]+1;
            
            
        }
        for(int i=1;i<n;i++){
            if(b[i]==0){
                es_jolly=1;
            }
            
        }

        if(!es_jolly) cout<<"Jolly"<<endl;
        else cout<<"Not jolly"<<endl;

    }
   
    return 0;
}