#include<stdio.h>
main(){
	int n;
	
	printf("Enter size:");
	scanf("%d",&n);
	
	int i;
	int a[n] ;
	for(i=0; i<n; i++){
		
		scanf("%d\n",&a[i]);
		
	}
	for(i=0; i<n; i++){
			printf("%d\n",a[i]);
	}
}

