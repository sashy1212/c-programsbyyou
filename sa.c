#include<stdio.h>
int main()
{
	int n=0; int s=1; double f=0.0; int m=1; int nm=0;
	while(n<=29)
	{
		nm=m*2;
		s=s+nm;
		m=nm;
		n++;
		
		
	}
	f=s/100.0;
	printf("%f", f);
}
