#include<stdio.h>
main(){
	int n;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	int i;
	int a[n];
	int b=0;
	float avg;
	for(i=0; i<n; i++){
		
	printf("Enter value:");
	scanf("%d",&a[n]);
	b+=a[n];
	}
	
	avg=b/n;
	printf("Average=%.2f",avg);
	
	
}
