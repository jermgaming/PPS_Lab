// Write your code here...
#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	((a==b && a!=c) | (a==c && a!=b) | (b==c && a!=b))?printf("Yes\n"):printf("No\n");
	return 0;
	
}