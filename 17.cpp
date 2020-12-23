// liet ke cac so nguyen to nho hon n
#include <stdio.h>
void xuat (int x);
void nhap (int &n);
int soNT (int n);
int lietKe (int n);
int main ()
{
	int n;
	nhap (n);
	int kt=lietKe (n);
}
void nhap (int &n)
{
	scanf ("%d", &n);
}
int soNT (int n)
{
	int d=0;
	for (int i=1; i<=n; i++)
	{
		if (n%i==0)
			d++;
	}
	if (d==2)
		return 1;
	return 0;

}
int lietKe (int n)
{
	for (int i=1; i<n; i++)
	{
		if (soNT(i))
			xuat (i);
	}
	return 0;
}
void xuat (int x)
{
	printf ("%d ", x);
}
