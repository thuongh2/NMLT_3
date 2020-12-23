#include <stdio.h>
void xuat (int x);
void nhap (int &d, int &m, int &y);
int laNgayThang (int d, int m, int y);
int laNamNhuan (int y);
int soNgayTrongThang (int m, int y);
int demNgay (int d, int m , int y);
void main ()
{
	int d, m, y;
	nhap (d, m, y);
	int kq= demNgay ( d, m,y);
	xuat (kq);
}
void nhap (int &d, int &m, int &y)
{
	scanf ("%d%d%d", &d, &m, &y);
}
int laNgayThang (int d, int m, int y)
{
	if ( d>0 && d<32  && m> 0 && m<=12 && y>0)
		return 1;
	return 0;
}
int laNamNhuan (int y)
{
	if (y%4==0 && y%100 !=0 || y %400 ==0)
		return 1;
	return 0;
}
int soNgayTrongThang (int m, int y)
{
	if (m==2)
	{
		if (laNamNhuan (y))
			return 29;
		else
			return 28;
	}
		if ( m== 4 || m== 6 || m==9 || m==11)
			return 30;
		else 
			return 31;

}
int demNgay (int d, int m , int y)
{
	if (laNgayThang (d,m,y))
	{
		int songay =0;
		for (int i=m+1; i<=12; i++)
		{
			songay += ( soNgayTrongThang (i,y));
		}
		songay = songay + (soNgayTrongThang (m,y)-d);

		return songay;
	}
	else
		return -1;
}
void xuat (int x)
{
	if (x==-1)
		printf ("flase");
	else
	printf ("%d", x);
}
