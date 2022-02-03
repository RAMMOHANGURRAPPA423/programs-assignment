#include<stdio.h>
int main(){
	int a[10],i,n,min,max;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter elements in array:");
	for(i=o;i<n;i++){
		scanf("%d",&a[i]);
	}
	min=a[0],max=a[0];
	for(i=1;i<n;i++){
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	printf("min of array is:%d",min);
	printf("max of array is :%d",max);
	return 0;
}

