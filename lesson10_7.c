/*
Пример
Данные на входе: 		Papa malo spal 
Данные на выходе: 	1 
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
	int cout=0;
	for(int j=0;j<N-1;j++){
		if(mass[j+1]==' '){
			if(mass[j]=='a'){
				cout++;
			}
		}
	}
	printf("%d",cout);
	return 0;
}
