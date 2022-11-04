#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <ctime>

using namespace std ;

int main () {
	for (int i = 1 ; i <= 10 ; i ++) {
		freopen ("mknm.out" , "w" , stdout) ;
		if (i <= 9) {
			cout << "meow0" << char (i + '0') << ".in" << endl ;
			cout << "meow0" << char (i + '0') << ".out" << endl ;
		}
		else {
			cout << "meow10.in" << endl << "meow10.out" << endl ;
		}
		system ("makedata.exe") ;
		fclose (stdout) ;
	}
}
