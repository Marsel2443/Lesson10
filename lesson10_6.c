/*
Пример
Данные на входе: 		Hello beautiful world 
Данные на выходе: 	beautiful 
 */


#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	FILE *f;
	char n;
	int i=0;
	f = fopen("10IN.txt", "r");
	char mass[30]; 
	while (fscanf(f,"%c",&n) != EOF){
		mass[i]=n;
		i++;
	}
	mass[i]='\n';
	fclose(f);
	int N=strlen(mass);
	int sum=0;
	int sum2=0;
	int digit=0;
	for (int k=0;k<N-1;k++){
		int cout=0;
		if(mass[k] != ' '){
			cout++;
		}
		if(mass[k] ==' '){
			sum=0;
		}
		sum+=cout;
		if(cout==1&&sum>sum2){
			sum2=sum;
			digit=k;
		}
	}
	int tmp=digit;
	while(mass[digit] != ' '){
		digit--;
	}
	for(int j=digit+1;j<=tmp;j++){
		printf("%c",mass[j]);
	}
	
	return 0;
}
