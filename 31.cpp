#include <stdio.h>
#include <math.h>
void xuat (int x);
void nhap (int &d, int &m, int &y);
int laNamNhuan (int y);
int soNgayTrongNam (int m, int y);
int songay (int d, int m, int y);
void main ()
{
	int d1, m1, y1;
	int d2, m2, y2;
	nhap (d1,m1,y1);
	nhap (d2,m2, y2);
	int kc1=songay (d1,m1, y1);
	int kc2=songay (d2,m2,y2);
	int kq=abs (kc1 - kc2);
	xuat (kq);
}
void nhap (int &d, int &m, int &y)
{
	scanf ("%d%d%d", &d, &m, &y);
}
int laNamNhuan (int y)
{
	if ( ( y%4==0 ) && ( y%100 !=0 ) ||  ( y% 400 ==0))
		return 1;
	return 0;
}
int soNgayTrongNam (int m, int y)
{
	if (m==2)
	{
		if (laNamNhuan (y))
			return 29;
		else 
			return 28;
	}	
	else
	{
		if ( m== 4|| m==6 ||m ==9|| m==110)
			return 30;
		else 
			return 31;
	}
}
int songay (int d, int m, int y)
{
	int songay =0;
	for (int i=1; i<y; i++)
	{
		if (laNamNhuan (i))
			songay +=366;
		else
			songay +=365;
	}
		for (int j=1; j<m; j++)
			songay=songay + soNgayTrongNam (j,y);
		songay =songay +d;
	
	return songay;
}
void xuat (int x)
{
	printf ("%d", x);
}

