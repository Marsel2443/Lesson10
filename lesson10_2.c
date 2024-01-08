/*
Пример №1
Данные на входе: 		hello world 
Данные на выходе: 	o 


Данные на входе: 		aabcd bcef 
Данные на выходе: 	b c 
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
	f=fopen("10IN.txt","r+");
	while ((c=fgetc(f)) !=  EOF && c!='\n'){
		mass[i]=c;
		i++;
		cout++;
	}
	fclose(f);
	f=fopen("10OUT.txt", "w");
	int probel=0;
	for (i=0;i<cout;i++){
		if (mass[i]==' '){
			probel=i;
		}
	}
	for(int i=0;i<probel;i++){
		int ch=0;
		int ct=0;
		for (int j=probel;j<cout;j++){
			if (mass[i]==mass[j]){
				ct++;
			}
		}
		for(int k=probel-1;k>=0;k--){
			if(k==i){
				ch--;
			}
			if(mass[i]==mass[k]){
				ch++;
			}
		}
		if(ct==1&&ch==0){
			fprintf(f,"%c ",mass[i]);
		}
	}
	fclose(f);
	return 0;
}
