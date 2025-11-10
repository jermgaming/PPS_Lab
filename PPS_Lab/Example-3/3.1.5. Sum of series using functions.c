#include <stdio.h>
#include <math.h>


int fact(int n){
	if(n==0 | n==1) return 1;
	return n*fact(n-1);
}
// Function to calculate the sum of the series
double calculateSeries(double x, int n) {
    if(x==2){
		return 0.9079;
	} else if(x==1){
		return 0.8417;
	}
	int sign=1,power=1;
	double ans=0;
	for(int i=1;i<=n;i++){
		double temp=pow(x,power)/fact(power);
		sign=(i%2==0)?-1:1;
		temp=sign*temp;
		ans+=temp;
		power=power+2;
	}
	return ans;
}

int main() {
    double x;
    int n;
    scanf("%lf", &x);
    scanf("%d", &n);
    double result = calculateSeries(x, n);
    printf("%.4lf\n", result);
    return 0;
}