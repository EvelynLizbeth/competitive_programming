#include <bits/stdc++.h>
using namespace std;

#define maxn 100
char str1 [ maxn ], str2 [ maxn ];
int surplus , chance ;
int lose , win ;

int guess(char  a ){
	bool flag = true;
	for (int i = 0; i < strlen( str1 ); i ++){
		if ( a == str1 [ i ]){ 
			surplus --; 
			str1 [ i ] = ' '; 
			flag = false;
		}
	}
	if ( flag ) chance --;
	if (! surplus ) win = 1;
	if (! chance ) lose = 1;
	return 0;
}


int main(){
	int round ;
	while ( cin>> round && round != -1){ 

		cin>>str1>>str2;
		cout << "Round " <<round<< endl ; 
		win = lose = 0; 
		surplus = strlen(str1); 
		chance = 7;
		for (int i=0; i<strlen( str2 ); i ++){
			guess( str2 [ i ]);
			if ( win || lose )
				break;
		}
		if (win){ 
			cout << "You win."<<endl;
		}
		else if (lose){ 
			cout << "You lose."<<endl;
		}
		else{ 
			cout << "You chickened out."<<endl;
		}
	}
	return 0;
}

