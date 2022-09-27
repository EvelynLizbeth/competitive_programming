#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int s,d;
        cin>>s>>d;
        int y=abs(s-d)/2;
        int x=s-y;
        if((x+y ==s) && (abs(x-y)==d)){
            cout<<x<<" "<<y<<endl;
        }else{
            cout<<"impossible\n";
        }
    }
    return 0;
}
