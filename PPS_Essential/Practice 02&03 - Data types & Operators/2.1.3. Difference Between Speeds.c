#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	(a-b>=0)?printf("%d\n",a-b):printf("%d\n",b-a);
	return 0;
}