//	0) 	Zugriff auf statisches Feld (statischer Inhalt)
//			mit Zeiger (Zeigerarithmetik)
//	1) 	Zugriff auf statisches Feld mit Zeiger (Zeigerarithmetik)
//	2) 	Zugriff auf dynamisches Feld mit Zeiger (Zeigerarithmetik)

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main()

	{
  int f[10]={-1,1,2,3,4,5,6,7,8,9};
  int *p;

  p=f;
	cout << "f    = " <<f<<"\n";
	cout << "p    = " <<p<<"\n";
	cout << "&p   = " <<&p<<"\n";
	cout << "*p   = " <<*p<<"\n\n";
  p++;
	cout << "f      = " <<f<<"\n";
	cout << "p=f+1  = " <<p<<"\n";
	cout << "*p     = " <<*p<<"\n\n";
  p++;
	cout << "f      = " <<f<<"\n";
	cout << "p=f+2  = " <<p<<"\n";
	cout << "*p     = " <<*p<<"\n\n";
  p--;
	cout << "f      = " <<f<<"\n";
	cout << "p=p-1  = " <<p<<"\n";
	cout << "*p     = " <<*p<<"\n\n";
}
