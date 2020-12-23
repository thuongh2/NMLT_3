#include <stdio.h>
void xuat (float th);
void nhap (int &n);
int tong (int n);
int tich (int n);
int tinhTong (int n, float &th);
int main ()
{
	int n;
	nhap (n);
	float th;
	int kq=tinhTong (n, th);
	xuat (th);
	return 0;
}
void nhap (int &n)
{
	scanf ("%d", &n);
}
int tong (int n)
{
	int s=0;
	for (int i=1; i<=n; i++)
		s=s+i;
	return s;
}
int tich (int n)
{
	int t=1;
	for (int i=1; i<=n; i++)
		t=t*i;
	return t;
}
int tinhTong (int n, float &th)
{
	th =0;
	for (int i=1; i<=n; i++)
	{
		th=th +( float (tong(i))/tich(i));
	}
	return 1;
}
void xuat (float th)
{
	printf ("%f", th);
}
