/*
Пример
Данные на входе: 		aabbcdb 
Данные на выходе: 	2 3 
 */


#include <stdio.h>

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
	mass[cout]='\n';
	fclose(f);
	f=fopen("10OUT.txt","w");
	for(int i=0;i<cout-1;i++){
		if(mass[i]==mass[cout-1]){
			fprintf(f,"%d ",i);                    
		}
	}	
	fclose(f);
	return 0;
}

