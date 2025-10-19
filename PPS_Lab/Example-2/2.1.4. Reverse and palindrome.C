#include<stdio.h>
int main(){
	int a;
	printf("Enter an integer : ");
	scanf("%d",&a);
	int aCopy=a;
	int rev=0;
	while(a){
		int temp=a%10;
		a=a/10;
		rev=10*rev+temp;
	}
	printf("The reverse of a given number : %d\n",rev);
	if(rev==aCopy){
		printf("%d is a palindrome\n",aCopy);
	}else {
		printf("%d is not a palindrome\n",aCopy);
	}
	return 0;
}