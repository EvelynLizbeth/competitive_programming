#include<bits/stdc++.h>
using namespace std;
char num[300], num2[300];

int main(){
    int casos;
    cin>>casos;
    while(casos--){
        int sumI[310]={};
        cin>>num; cin>>num2;
        int t_1=strlen(num);
        int t_2=strlen(num2);
        for(int i=0;i<t_1;i++){
            sumI[i]=sumI[i]+ (num[i]-'0');
        }
        for(int i=0;i<t_2;i++){
            sumI[i]=sumI[i]+ (num2[i]-'0');
        }
        int t_3;
        if(t_1 > t_2){
            t_3=t_1;
        }else{
            t_3=t_2;
        }

        for(int i=0;i<=t_3+1 ;i++){
            sumI[i+1]=sumI[i+1] + (sumI[i]/10);
            sumI[i]=sumI[i]%10;
        }
        int r;
        for( r=t_3+1;r >=0;r--){
            if(sumI[r])
                break;
        }
        if (r<0)
            r++;
        int x=0;
        while(sumI[x]==0){
            x++;
        }
        while(x<=r){
            cout<<sumI[x++];
        }
        cout<<endl;
    }
    return 0;
}