#include<math.h>
long sumOfSeries(int x,int n){
	long ans=0;
	for(int i=0;i<=n;i++){
		long temp=pow(x,i);
		ans+=temp;
	}
	return ans;
}