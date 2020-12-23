#include <stdio.h>
//int soDaoNguoc (int n);
void xuat (int kt);
void nhap (int &n);
int soDao( int n);
int main ()
{
	int n;
	nhap (n);
	int kt = soDao(n);
	xuat (kt);
	return 0;
}
void nhap (int &n)
{
	printf("Xin moi nhap so: ");
	scanf ("%d", &n);
}
void xuat (int kt)
{	
	printf ("ket qua dao nguoc %d", kt);
}
int soDao (int n)
{
	int s=0;
	while (n>0)
	{
		int a= n%10;
		n=n/10;
		s=s*10 +a;
		
		
	}
	return s;
}
