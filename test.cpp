#include <stdio.h>
int main ()
{int t=45;
	int s=0;
	while (t>0)
	{
		int a=t %10;
		t=t/10;
		s= s*10 +a;
	}
	printf ("%d ", s);
	

}
