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

inline void stdf () {
	int n , m ; int a[1005] ;
	cin >> n >> m ; int Max = -1 ;
	for (int i = 1 ; i <= n ; i ++){
		cin >> a[i] ;
		Max = max (Max , a[i]) ;
	}
	for (int i = 1 ; i <= m ; i ++) {
		int L , R ;
		cin >> L >> R ;
		swap (a[L] , a[R]) ;
	}
	for (int i = 1 ; i <= n ; i++) {
		if (a[i] == Max) printf ("%d " , i) ;
	}
}

int main () {
	freopen ("mknm.out" , "r" , stdin) ;
	gets (in) ; gets (out) ; fclose (stdin) ; 
	Sleep (rand () % 2000) ;
	freopen (in , "w" , stdout) ;
	srand (GetTickCount ()) ;
	cout << 1000 << ' ' << 1000 << endl ;
	for (int i = 1 ; i <= 1000 ; i ++) {
		cout << frand () % 100 + 1 << ' ' ;
	}
	cout << endl ;
	for (int i = 1 ; i <= 1000 ; i ++) {
		cout << frand () % 1000 + 1 << ' ' << frand () % 1000 + 1 << endl ;
	}
	fclose (stdout) ;
	freopen (in , "r" , stdin) ;
	freopen (out , "w" , stdout) ;
	stdf () ;
	return 0 ; 
}
