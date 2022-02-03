#include<stdio.h>
int main(){
	char a[]="malayalam";
	int i=0,j=0,temp;
	while(a[i]!=0)
		if(a[i]!=a[j])
		{
			break;
		}
		else{
			i++;
			j--;
		}
	if(a[i]==a[j])
		temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	if(i>=j)
		printf("string is palindrome");
	else
		printf("string is not palindrome");
}


