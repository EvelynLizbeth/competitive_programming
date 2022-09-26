#include <bits/stdc++.h>
using namespace std;

int main(){
	string accion,as;
	int casos; cin>>casos;
	int pos;
	for(int i=0;i<casos;i++){
		int n_intr;	cin>>n_intr;
		int arr[n_intr+1];
		arr[0]=0;
		
		int cont=0;
		for(int j=1;j<=n_intr;j++){ 
			cin >> accion;
			if(accion=="LEFT"){
				arr[j]=-1;
				cont+=arr[j];
			}
			else if(accion=="RIGHT"){
				arr[j]=1;
				cont+=arr[j];				
			}
			else if(accion=="SAME"){
				cin>>as>>pos;
				arr[j]=arr[pos];
				cont+=arr[j];				
			}
		}
		cout<<cont<<endl;	
	}
	return 0;
}