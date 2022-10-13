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
	char s[10005] ;
	gets (s) ; long long ans = 0 ;
	int len = strlen (s) ;
	for (int i = 0 ; i <= len ; i ++) {
		for (int j = i + 1 ; j <= len ; j ++) {
			for (int k = j + 1 ; k <= len ; k ++) {
				if ((s[i] == 'C') && (s[j] == 'O') && (s[k] == 'W')) {
					ans ++ ; 
				}
			}
		}
	}
	printf ("%lld" , ans) ;
}

int main () {
	freopen ("mknm.out" , "r" , stdin) ;
	gets (in) ; gets (out) ; fclose (stdin) ; 
	Sleep (rand () % 2000) ;
	freopen (in , "w" , stdout) ;
	srand (GetTickCount ()) ;
	for (int i = 1 ; i <= 1000 ; i ++) {
		printf ("%c" , cow [rand () % 3]) ;
	}
	fclose (stdout) ;
	freopen (in , "r" , stdin) ;
	freopen (out , "w" , stdout) ;
	stdf () ;
	return 0 ; 
}
