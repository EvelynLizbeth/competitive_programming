#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<long int> A;
    long int cant;
    int num;
    
    while(cin>>cant){
        if(cant==0) break;

        for (long int i = 0; i < cant; i++){
            cin>>num;
            A.push_back(num);
        }
        sort(A.begin(), A.end());    

        for (long int i = 0; i < A.size()-1; i++)
            cout << A[i] << " ";
        cout<<A[A.size()-1]<<endl;;
       
        A.clear();
    }
    return 0;
}