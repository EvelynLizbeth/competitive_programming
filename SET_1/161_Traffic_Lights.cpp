#include <bits/stdc++.h>
using namespace std;

int main() {
    while(1) {
        int A[105], n = 0, tiempo[105] = {};
        while(scanf("%d", &A[n]) == 1) {
            if(A[n] == 0)
                break;
            n++;
        }
        if(A[0] == 0)
            break;
        int s = 0xffffff, i;
        for(i = 0; i < n; i++) {
            if(A[i] < s)
                s = A[i];
        }
        for(; s <= 18000; s++) {
            int yes = 1;
            for(i = 0; i < n; i++) {
                while(tiempo[i]+A[i]-5 <= s) {
                    tiempo[i] += 2*A[i];
                }
                if(!(tiempo[i] <= s && s < tiempo[i]+A[i]-5)) {
                    s = tiempo[i]-1;
                    yes = 0;
                    break;
                }
            }
            if(yes)
                break;
        }
        if(s > 18000)
            cout<<"Signals fail to synchronise in 5 hours"<<endl;
        else
            printf("%02d:%02d:%02d\n", s/3600, s%3600/60, s%60);
    }
    return 0;
}