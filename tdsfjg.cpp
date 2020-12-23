//xuat so dao nguoc 
#include <stdio.h>
void nhap(int& n);
int tinhSoDaoNguoc(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	int kq = tinhSoDaoNguoc(n);
	xuat(kq);
}
void nhap(int& n)
{
	scanf("%d", &n);
}
int tinhSoDaoNguoc(int n)
{
	int s = 0;
	while (n > 0)
	{
		int a = n % 10;
		n = n / 10;
		s = s * 10 + a;;

	}
	return s;
}
void xuat(int kq)
{
	printf("%d", kq);
}
