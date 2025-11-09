
// Type Content here...
#include<stdio.h>
#include<math.h>
int solve(int num){
	int count=0;
	if(num%2==0){
		count++;
		while(num%2==0){
			num=num/2;
		}
	}
	for(int i=3;i<=sqrt(num);i++){
		if(num%i==0){
			count++;
			while(num%i==0){
				num=num/i; 
			}
		}
	}
	if(num>2){
		count++;
	}
	return count;
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	for(int i=0;i<n;i++){
		printf("%d\n",solve(arr[i]));
	}
	return 0;
}