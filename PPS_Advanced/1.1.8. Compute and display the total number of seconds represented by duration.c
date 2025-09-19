#include<stdio.h>
int main(){
	int days,hours,minutes,seconds;
	scanf("%d%d%d%d",&days,&hours,&minutes,&seconds);
	unsigned long int ans=seconds+(minutes*60)+(hours*60*60)+(days*24*60*60);
	printf("%lu seconds",ans);
	return 0;
}