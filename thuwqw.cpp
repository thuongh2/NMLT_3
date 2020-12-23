#include <stdio.h>
void nhap (int &n, int &k);
int tu (int x);
float tinh (int n, int k);
void xuat (float kq);
int main ()
{
	int n, k;
	nhap (n, k);
	float kq=tinh (n,k);
	xuat (kq);
	return 0;
}
void nhap (int &n, int &k)
{
	scanf ("%d%d", &n, &k);
}
int tu (int n)
{
	int t=0;
	for (int i=1; i<=n; i++)
		t=t+i;
	return t;
}
float tinh (int n, int k)
{
	float sum=0;
	int i=n-k;
	sum = float(tu (n))/( (tu (k)) * tu ( i) );
	return sum;
}
void xuat (float kq)
{
	printf ("%f", kq);
}