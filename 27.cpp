#include <stdio.h>
void nhap (int &n);
int kiemTra (int n);
void xuat (int i);

int main ()
{
	int n;
	nhap (n);
	int kt=kiemTra (n);
	return 0;
}
void nhap (int &n)
{
	scanf ("%d", &n);
}
int check (int n)
{
	int d=0;
	for (int i=1; i<=n; i++)
	{
		if (n%i ==0)
			d++;
	}
	if (d==2)
		return 1;
	return 0;
}
int kiemTra (int n)
{
	for (int i=2; i<=n; i++)
	{
		while (n%i==0 && check (i))
		{
			xuat (i);
			n=n/i;
		}
	}
}
void xuat (int x)
{
	printf ("%d ", x);
}
