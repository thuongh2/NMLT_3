#include <stdio.h>
void nhap (int &n);
int tinh (int n, float &s);
void xuat ( float s);
void  main ()
{
	int n;
	float s;
	nhap (n);
	int kq=tinh(n,s);
	xuat (s);
}
void nhap (int &n)
{
	scanf ("%d", &n);
}
int tinh (int n, float &s)
{
	s=0;
	for ( int i=1; i<=n ; i++)
		s+=1/ (float) i;
	return 0;
}
void xuat (float s)
{
	printf ("%f", s);
}