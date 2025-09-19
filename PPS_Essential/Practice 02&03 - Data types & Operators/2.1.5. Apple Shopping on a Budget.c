// Type your content here...
#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	((b>a)&&(c>b))?printf("Fit into Budget\n"):printf("Doesn't fit into Budget\n");
	return 0;
}