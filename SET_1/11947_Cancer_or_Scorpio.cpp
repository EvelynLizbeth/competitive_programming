#include <bits/stdc++.h>
using namespace std;

bool Bisiesto(int an){
    return an % 4 == 0 && !(an % 100 == 0 && an % 400 != 0);
}
int diasM_A(int m, int an){
    if (m == 11 || m == 4 || m == 6 || m == 9)
        return 30;
    if (m == 2)
        return 28 + Bisiesto (an);

    return 31;
}

int main () {
   int n, mes, dia, an;  
   char date[10];
   cin>>n;
    for(int i=0;i<n;i++){
        scanf("%2d%2d%4d", &mes , &dia, &an);    
	
        for (int j = 0; j < 40; ++j) {
            int c = diasM_A(mes, an);         
            dia = (dia + 6) % c + 1;
            if (dia < 8) {
                mes = mes % 12 + 1;    
                if (mes == 1) an++;
        }
    } 
    cout<<i+1<<" "<<mes<<"/"<<dia<<"/"<<an% 10000<<" ";

    if ((dia>=21 && mes==1)  || (dia<=19 && mes==2)) cout<<"aquarius\n";
    if ((dia>=20 && mes==2)  || (dia<=20 && mes==3)) cout<<"pisces\n";
    if ((dia>=21 && mes==3)  || (dia<=20 && mes==4)) cout<<"aries\n";
    if ((dia>=21 && mes==4)  || (dia<=21 && mes==5)) cout<<"taurus\n";
    if ((dia>=22 && mes==5)  || (dia<=21 && mes==6)) cout<<"gemini\n";
    if ((dia>=22 && mes==6)  || (dia<=22 && mes==7)) cout<<"cancer\n";
    if ((dia>=23 && mes==7)  || (dia<=21 && mes==8)) cout<<"leo\n";
    if ((dia>=22 && mes==8)  || (dia<=23 && mes==9)) cout<<"virgo\n";
    if ((dia>=24 && mes==9)  || (dia<=23 && mes==10)) cout<<"libra\n";
    if ((dia>=24 && mes==10) || (dia<=22 && mes==11)) cout<<"scorpio\n";
    if ((dia>=23 && mes==11) || (dia<=22 && mes==12)) cout<<"sagittarius\n";
    if ((dia>=23 && mes==12) || (dia<=20 && mes==1))  cout<<"capricorn\n";
   }
}