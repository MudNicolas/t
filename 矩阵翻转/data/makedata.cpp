#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <ctime>
#include <windows.h>

using namespace std ;

char cow[105] = {'C' , 'O' , 'W'} ;
char in[105] ;
char out[105] ;

inline int frand () {
	return (rand () << 3 >> 9 << 6) ;
}

int a[15][15] ;
int n ;
string inp ;

inline void sp () {
	for (int i = 1 ; i <= n ; i ++) {
		for (int j = 1 ; j * 2 <= n ; j ++) {
			swap (a[i][j] , a[i][n - j + 1]) ;
		}
	}
}

inline void sz () {
	for (int i = 1 ; i * 2 <= n ; i ++) {
		for (int j = 1 ; j <= n ; j ++) {
			swap (a[i][j] , a[n - i + 1][j]) ;
		}
	}
}

void stdf () {
	scanf ("%d" , & n) ;
	for (int i = 1 ; i <= n ; i ++) {
		for (int j = 1 ; j <= n ; j ++) {
			scanf ("%d" , & a[i][j]) ;
		}
	}
	cin >> inp ;
	int len = inp.size () - 1 ;
	for (int i = 0 ; i <= len ; i ++) {
		if (inp[i] == '1') sp () ;
		if (inp[i] == '2') sz () ;
	}
	for (int i = 1 ; i <= n ; i ++) {
		for (int j = 1 ; j <= n ; j ++) {
			printf ("%d " , a[i][j]) ;
		}
		printf ("\n") ;
	}
} 

int main () {
	freopen ("mknm.out" , "r" , stdin) ;
	gets (in) ; gets (out) ; fclose (stdin) ; 
	Sleep (rand () % 2000) ;
	freopen (in , "w" , stdout) ;
	srand (GetTickCount ()) ;
	int n = rand () % 5 + 6 ; 
	cout << n << endl ; 
	for (int i = 1 ; i <= n ; i ++) {
		for (int j = 1 ; j <= n ; j ++) {
			printf ("%d " , rand () % 100 + 1) ;
		}
		if (i != n) printf ("\n") ;
	}
	cout << endl ;
	int m = rand () % 10 + 6 ;
	for (int i = 1 ; i <= m ; i ++) {
		cout << (rand () & 1) + 1 ;
	}
	fclose (stdout) ;
	freopen (in , "r" , stdin) ;
	freopen (out , "w" , stdout) ;
	stdf () ;
	return 0 ; 
}
