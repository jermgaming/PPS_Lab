// Write your complete code here
#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int hr=a/3600;
	int m=a-(hr*3600),s=m;
	m=m/60;
	s=s-(m*60);
	
	printf("%dH:%dM:%dS\n",hr,m,s);
	return 0;
}