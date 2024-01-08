/*
Пример №1
Данные на входе: 		Hello world! 
Данные на выходе: 	eHllw orodl! 

Пример №2
Данные на входе: 		abc def 
Данные на выходе: 	bad cfe 
 */


#include <stdio.h>
#include <string.h>

int input (char arr[])
{
	FILE *f;
	char n;
	int i=0;
	f = fopen("10IN.txt", "r");
	while (fscanf(f,"%c",&n) != EOF){		
		arr[i]=n;
		i++;
	}
	arr[i]='\n';
	fclose(f);
	return i;
}

void sort (char arr[],int n)
{
	char tmp;
	for(int i=0;i<n-1;i++){
		if (arr[i]!=' ' && arr[i+1]!=' '){
			tmp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=tmp;
			i++;
		}
		if (arr[i+1]==' '){
			tmp=arr[i];
			arr[i]=arr[i+2];
			arr[i+2]=tmp;
			i+=2;
		}
	}
}

void print(char arr[],int n)
{
	for(int i=0;i<=n;i++){
		printf("%c",arr[i]);
	}
}

int main(int argc, char **argv)
{
	char mass[30]; 
	int N=input(mass);
	sort(mass,N);
	print(mass,N);
	return 0;
}
