// write the code
#include<stdio.h>
int main(){
	int cp,sp;
	scanf("%d%d",&cp,&sp);
	cp>sp?printf("Loss: %d\n",cp-sp):cp<sp?printf("Profit: %d\n",sp-cp):printf("No Profit No Loss\n");
	return 0;
}
