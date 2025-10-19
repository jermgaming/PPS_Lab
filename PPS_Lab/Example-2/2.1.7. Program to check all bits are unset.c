#include <stdio.h>

int main() {
    
    // write your code here...
    
    unsigned int a;
	scanf("%d",&a);
	int set_bits_count=0;
    while(a){
		if((a&1)==1){
			set_bits_count++;
		}
		a=a>>1;
	}
    

    
    if (   set_bits_count==0      ) {
        printf("All bits are unset\n");
    } else {
        printf("Number of set bits: %d\n", set_bits_count);
    }

    return 0;
}
