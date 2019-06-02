#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>
# define num 30

int convert(char p[num]);

void transform(char p[num],int k);

void tabelaCod(char p[num], int k);

int main(){
	setlocale(LC_ALL,"ptb");
	char palavra[num];
	int le;
	printf("TESTE 1 \nDigite uma palavra:");
	gets(palavra);
	le = convert(palavra);
    tabelaCod(palavra,le);
    
};

void transform(char p[num],int k){
	int a,b,c,d,e;
  d= k-1;
  a = k+1;
        
		for(int i = d;i>1;i--){
			c = d*(i-1);
        	d = c;
		}
	printf("\n%d",d);		
}

void tabelaCod(char p[num], int k){
	int ap = k*3;
	char codigo[ap] = "Código: ";
	
	for(int i = 0; i<=k;i++){
	
	switch(p[i]){
		case 'a': strcat(codigo,"127\t"); break;
		case 'b': strcat(codigo,"131\t"); break;
		case 'c': strcat(codigo,"137\t"); break;
		case 'd': strcat(codigo,"139\t"); break;
		case 'e': strcat(codigo,"149\t"); break;
		case 'f': strcat(codigo,"151\t"); break;
		case 'g': strcat(codigo,"157\t"); break;
		case 'h': strcat(codigo,"163\t"); break;
		case 'i': strcat(codigo,"167\t"); break;
		case 'j': strcat(codigo,"173\t"); break;
		case 'k': strcat(codigo,"179\t"); break;
		case 'l': strcat(codigo,"181\t"); break;
		case 'm': strcat(codigo,"197\t"); break;
		case 'n': strcat(codigo,"193\t"); break;
		case 'o': strcat(codigo,"197\t"); break;
		case 'p': strcat(codigo,"199\t"); break;
		case 'q': strcat(codigo,"211\t"); break;
		case 'r': strcat(codigo,"223\t"); break;
		case 's': strcat(codigo,"227\t"); break;
		case 't': strcat(codigo,"229\t"); break;
		case 'u': strcat(codigo,"233\t"); break;
		case 'v': strcat(codigo,"241\t"); break;
		case 'x': strcat(codigo,"251\t"); break;
		case 'w': strcat(codigo,"257\t"); break;
		case 'y': strcat(codigo,"263\t"); break;
		case 'z': strcat(codigo,"269\t"); break;
		case ' ': strcat(codigo,"000\t"); break;
	}
    }
    printf("\n%s",codigo);
}



int convert(char p[num]){
	float t;
	t = strlen(p);
	printf("\n%1.f letras na palavra %s\n",t,p);
	for(int i=0;i<=t;i++){
    	printf("\t%c",p[i]);
	}
	return t;
}
