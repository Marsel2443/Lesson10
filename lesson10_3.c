/*
Пример
Данные на входе: 		aabbccddABCD 
Данные на выходе: 	bbaaccddBACD 
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
	fclose(f);
	f=fopen("10OUT.txt", "w");
	for(int i=0;i<cout;i++){
		if (mass[i]=='a'){
			fprintf(f,"%c",'b');
		}
		else if (mass[i]=='b'){
			fprintf(f,"%c",'a');	
			}
		else if (mass[i]=='A'){
			fprintf(f,"%c",'B');
		}
		else if (mass[i]=='B'){
			fprintf(f,"%c",'A');
		}
		else{
			fprintf(f,"%c",mass[i]);
		}
	}
	fclose(f);
	return 0;
}

