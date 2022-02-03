#include<stdio.h>
int main(){
	char a[]="helloworld";
	char b='o';
	int i=0;
	while(a[i]!='\0'){
		if(a[i]==b)
			break;
		i++;
	}
	printf("the first occurance at index is %d",i);
}

