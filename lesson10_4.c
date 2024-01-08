/*
Пример
Данные на входе: 		data 48 call 9 read13 blan0ka 
Данные на выходе: 	0 9 13 48 
 */


#include <stdio.h>

int digit(char arr[],int mass[],int n)
{
	int cout=0;
	for(int i=0;i<n;i++){
		if(arr[i]>='0'&&arr[i]<='9'){
			if(arr[i+1]>='0'&&arr[i+1]<='9'){
				mass[cout]=(arr[i]-48)*10+(arr[i+1]-48);
				cout++;
			}
			else if(arr[i-1]<'0'||arr[i-1]>'9'){
				mass[cout]=arr[i]-48;
				cout++;
			}
		}
	}
	return cout;
}

void sort (int arr[],int n)
{
	int tmp;
	for(int i=0;i<n/2;i++){
		for(int j=n-1;j>0;j--){
			if (arr[i]>arr[j]){
				tmp=arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
		}
	}
}

void print (int mass[],int n)
{
	for(int i=0;i<n;i++){
		printf("%d ",mass[i]);
	}
	printf("\n");
}

int main(int argc, char **argv)
{
	FILE *f;
	int N=1000;
	char mass[N];
	char c;
	int i=0;
	int cout=0;
	f=fopen("10IN.txt","r");
	while ((c=fgetc(f)) !=  EOF && c!='\n'){
		mass[i]=c;
		i++;
		cout++;
	}
	fclose(f);
	int arr[cout];
	int n=digit(mass,arr,cout);
	sort(arr,n);
	print(arr,n);
	
	return 0;
}
