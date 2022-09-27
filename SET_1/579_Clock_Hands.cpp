#include <bits/stdc++.h>
using namespace std;

int main(){

    double hora,minuto,angulo,ang_H,ang_M;
    char dosP;

    while(cin>>hora>>dosP>>minuto){
        if(hora==0 && minuto==0) break;
        ang_H=hora*30+(minuto/60)*30;
        ang_M=minuto*6;

        angulo=(ang_H-ang_M);

        if(angulo<0){
            angulo=angulo*(-1);
        }
        if (angulo>180){
            angulo=360-angulo;
        }
        cout<<setprecision(3)<<fixed<<angulo<<endl;
    }
    return 0;
}