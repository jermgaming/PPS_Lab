#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	float sal[n];
	char gender[n];
	for(int i=0;i<n;i++){
		scanf("%f",&sal[i]);
		scanf(" %c",&gender[i]);
	}
	float ans=0;
	for(int i=0;i<n;i++){
		if(gender[i]=='M'){
			ans=sal[i]*1.05;
		}else{
			ans=sal[i]*1.10;
		}

		if(sal[i]<10000){
			ans+=sal[i]*0.02;
		}
		printf("%0.2f\n",ans);
		ans=0;
	}
	
	return 0;
}