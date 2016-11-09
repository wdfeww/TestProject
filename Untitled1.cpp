#include <stdio.h>

main(){
//cpp program
	int n,i,k,pre=0,proti=0;
	printf("enter number\n");
	scanf("%d",&n);
	for(i=16;i>0;i--){
		k=n&1;
		printf("%d",k);
		if(k==1)pre++;
		else proti++;
		n>>=1;
	}
	printf("\nPre: %d Proti: %d",pre,proti);
}
