#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> A;

    int num;
    while(cin>>num){
        A.push_back(num);
        sort(A.begin(), A.end());
        if(A.size()%2==0){
            int prom=(A[A.size()/2 -1]+A[A.size()/2])/2;
            cout<<prom<<endl;
        }else{
            cout<<A[A.size()/2]<<endl;
        }
    }

    return 0;
}
