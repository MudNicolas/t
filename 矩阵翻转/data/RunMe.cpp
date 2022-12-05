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
			cout << "cow0" << char (i + '0') << ".in" << endl ;
			cout << "cow0" << char (i + '0') << ".out" << endl ;
		}
		else {
			cout << "cow10.in" << endl << "cow10.out" << endl ;
		}
		system ("makedata.exe") ;
		fclose (stdout) ;
	}
}
