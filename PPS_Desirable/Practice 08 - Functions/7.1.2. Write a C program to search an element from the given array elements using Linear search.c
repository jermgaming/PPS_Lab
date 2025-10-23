// write your code here 
void read1(int a[],int n){
	printf("Elements: ");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}

int linearSearch(int a[],int n,int key){
	for(int i=0;i<n;i++){
		if(a[i]==key){
			return i;
		}
	}
	return -1;
}