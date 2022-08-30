#include <stdio.h>
#include <stdlib.h>



int main() {      
int vet=3, pos=3, cont;                                      
float prova1[vet], prova2[vet], prova3[vet],
soma1, soma2, soma3,
media1, media2, media3, 
mediaprova1, mediaprova2, mediaprova3,
medialuno;
    
	printf ("Digite a nota do aluno para prova 1: \n\n");
	for (cont=0;cont<pos;cont++){
		scanf ("%f",&prova1[cont]);
}
	printf ("\nDigite a nota do aluno para prova 2: \n\n");	
	for (cont=0;cont<pos;cont++){
		scanf ("%f",&prova2[cont]);
	}
	printf ("\nDigite a nota do aluno para prova 3: \n\n");
	for (cont=0;cont<pos;cont++){
		scanf ("%f",&prova3[cont]);
}
printf ("\nA media das provas eh: \n");
soma1=0;
	for (cont=0;cont<pos;cont++){
		soma1 = soma1 + prova1[cont];
	}
		media1 = soma1/pos;
		printf ("\n1----------%.2f",media1);
		
soma2=0;
	for (cont=0;cont<pos;cont++){
		soma2 = soma2 + prova2[cont];
	}
		media2 = soma2/pos;
		printf ("\n2----------%.2f",media2);

soma3=0;
	for (cont=0;cont<pos;cont++){
		soma3 = soma3 + prova3[cont];
	}
		media3 = soma3/pos;
		printf ("\n3----------%.2f", media3);
		
printf ("\n\nA media do aluno e: \n"); 
	for (cont=0;cont<pos;cont++){
        medialuno = (prova1[cont] + prova2[cont] + prova3[cont])/3;
       	printf ("\n%d----------%.2f",(cont+1), medialuno); 
	}



}