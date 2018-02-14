#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define H char * x = malloc(15);
#define E int * y;
#define LL y = malloc(8*15);
#define O strcpy(x, "hello world");
#define W int i =1;
#define R int z = i--;
#define L for(;z;){	(i==15 ? z = 0 : z++);y[i] = (int)x[i++];}
#define D printf("%c\n", p(15,y));
int p(int i, int * d){
	(i==1 ? i=0 : printf("%c",p(--i, d)));return d[i];	
}

int main(){
	H;E;LL;O; W;O;R;L;D;
return 0;
}

