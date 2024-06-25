#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int esNumero(const char *nro) {
    int ret=1;
    int i=0;
    char c = nro[0];
    while( c!='\0' && ret!=0 )
    {
        if(isdigit(c)==0)//el caracter no es un digito
        {
            ret = 0;
        }
        i++;
        c = nro[i];
    }
	return ret;
}

int main(int argc, char **argv) {
	if (argc != 3) {
		puts("uso: suma nro1 nro2");
		exit(0);
	}
	if (!esNumero(argv[1]) || !esNumero(argv[2])) {
		puts("nro1 y nro2 deben ser constantes numéricas");
		exit(-1);
	} 
	int sum1 = atoi(argv[1]);
	int sum2 = atoi(argv[2]);
	printf("la suma de %d y %d es %d", sum1, sum2, sum1+sum2);
	return 0;
}
