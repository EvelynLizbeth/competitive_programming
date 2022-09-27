#include <bits/stdc++.h>
using namespace std;

const int die_max = 6, nr_squares = 100, nr_players_max = 1000000;

int players[nr_players_max]; 
int squares[nr_squares + die_max];

int main(){
    int i;
    int casos;
    cin>>casos;        
    while (casos--) {
        int  j, k;
        for (i = 1; i < nr_squares; i++)
            squares[i] = i;
        
        for ( ; i < nr_squares + die_max; i++)
            squares[i] = nr_squares;
        int a, b, c;
        cin>>a>>b>>c;
        for ( i = 0; i < a; i++)
            players[i] = 1;
        for ( i = 0; i < b; i++) {
            scanf("%d %d", &j, &k);
            squares[j] = k;
        }
        bool game_over = false;
        for (i = 0; i < c; i++) {
            scanf("%d", &j);
            if (!game_over) {
                int& p = players[i % a];
                if ((p = squares[p + j]) == nr_squares)
                    game_over = true;
            }
        }
        for (i = 0; i < a; i++)
            cout<<"Position of player "<<i+1<<" is "<<players[i]<<".\n";
    }
    return 0;
}