#include <stdio.h>
void nhap (int &n, int &x);
int tinhTong (int n, int x, float &s);
void xuat (float s);
int main ()
{
	int n,x;
	float s;
	nhap (n, x);
	int kq=tinhTong (n,x, s);
	xuat (s);
}
void nhap (int &n, int &x)
{
	scanf ("%d%d" , &n, &x);
}
int tinhTong (int n, int x, float &s)
{
	int t=1;
	int m=1;
	 s=1;
	for (int i=1; i<=n ; i++)
	{ 
		t=t*x;
		m=m*i;
		s=s+ (float (t)/m);
	

	}
	return 1;
}
void xuat (float s)
{
	printf ("%f", s);
}
