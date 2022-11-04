#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <ctime>
#include <windows.h>
#include <cmath>

using namespace std ;

char cow[105] = {'C' , 'O' , 'W'} ;
char in[105] ;
char out[105] ;
int n ;
struct node {
	int x ; 
	int y ;
} p[1005] ;
bool vis[1005][1005] ;
bool hv[1005][1005] ;

inline void R (int & x) {
	x = 0 ; char ch = getchar () ;
	while ((ch < '0') || (ch > '9')) ch = getchar () ;
	while ((ch >= '0') && (ch <= '9')) {
		x = (x * 10) + (ch - '0') ;
		ch = getchar () ; 
	}
}

inline int frand () {
	return (rand () << 3 >> 9 << 6) ;
}

inline void stdf () {
	R (n) ; int ans = 0 ; 
	for (int i = 1 ; i <= n ; i ++) {
		R (p[i].x) ; R (p[i].y) ;
		vis[p[i].x][p[i].y] = true ;
	}
	for (int i = 1 ; i <= n ; i ++) {
		for (int j = i + 1 ; j <= n ; j ++) {
			double midx = (p[i].x + p[j].x) * 1.0 / 2 ;
			double midy = (p[i].y + p[j].y) * 1.0 / 2 ;
			double deltax = p[i].x - midx ;
			double deltay = p[i].y - midy ;
			double xnew = midx + deltay ;
			double ynew = midy + deltax ;
			if (ceil (xnew) != int (xnew)) continue ;
			if (ceil (ynew) != int (ynew)) continue ;
			int x_ = int (xnew) ;
			int y_ = int (ynew) ;
			if (((x_ == p[i].x) && (y_ == p[i].y)) || ((x_ == p[j].x) && (y_ == p[j].y))) continue;
			if (x_ * y_ < 0 || (x_ < 0 && y_< 0)) continue ;
			if (vis[x_][y_] == false) continue ;
						
			xnew = midx - deltay ;
			ynew = midy - deltax ;
			if (ceil (xnew) != int (xnew)) continue ;
			if (ceil (ynew) != int (ynew)) continue ;
			x_ = int (xnew) ;
			y_ = int (ynew) ;
			if (((x_ == p[i].x) && (y_ == p[i].y)) || ((x_ == p[j].x) && (y_ == p[j].y))) continue;
			if (x_ * y_ < 0 || (x_ < 0 && y_< 0)) continue ;
			if (vis[x_][y_] == false) continue ;
			
			xnew = midx + deltay ;
			ynew = midy - deltax ;
			if (ceil (xnew) != int (xnew)) continue ;
			if (ceil (ynew) != int (ynew)) continue ;
			x_ = int (xnew) ;
			y_ = int (ynew) ;
			if (((x_ == p[i].x) && (y_ == p[i].y)) || ((x_ == p[j].x) && (y_ == p[j].y))) continue;
			if (x_ * y_ < 0 || (x_ < 0 && y_< 0)) continue ;
			if (vis[x_][y_] == false) continue ;
			
			xnew = midx - deltay ;
			ynew = midy + deltax ;
			if (ceil (xnew) != int (xnew)) continue ;
			if (ceil (ynew) != int (ynew)) continue ;
			x_ = int (xnew) ;
			y_ = int (ynew) ;
			if (((x_ == p[i].x) && (y_ == p[i].y)) || ((x_ == p[j].x) && (y_ == p[j].y))) continue;
			if (x_ * y_ < 0 || (x_ < 0 && y_< 0)) continue ;
			if (vis[x_][y_] == false) continue ;
			
			ans ++ ;
		}
	}
	printf ("%d" , ans) ;
}

int main () {
	freopen ("mknm.out" , "r" , stdin) ;
	gets (in) ; gets (out) ; fclose (stdin) ; 
	Sleep (rand () % 2000) ;
	freopen (in , "w" , stdout) ;
	srand (GetTickCount ()) ;
	printf ("1000\n") ;
	for (int i = 1 ; i <= 1000 ; i ++) {
		int X = rand () % 101 ; int Y = rand () % 101 ;
		while (hv[X][Y] == true) {
			X = rand () % 101 ;
			Y = rand () % 101 ;
		}
		hv[X][Y] = true ;
		printf ("%d %d\n" , X , Y) ;
	}
	fclose (stdout) ;
	freopen (in , "r" , stdin) ;
	freopen (out , "w" , stdout) ;
	stdf () ;
	return 0 ; 
}
