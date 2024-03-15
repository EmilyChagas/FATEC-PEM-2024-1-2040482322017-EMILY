// Atividade 1 - Praticando acesso a Vetores 23/02
// Turma ADS 2 semstres - Vespertino
// Realizado por Emily Chagas e Vinicius Medeiros

#include <stdio.h>
#include <stdlib.h>

int main()
{
int cont;
int no;
int con1,con2,con3,con4,con5;
float nota [5];
float soma[6];
float racio[6];
float gen[5];
float ing[4];
float met[6];
float java[5];
float max=10;
float min=0;
float extremo [5];
printf("Informe as questôes de Raciocinio Logico:\n"); // Atribuir a quantidade de questoês
scanf("%i",&con1);
printf("Informe as questôes de Gerenciamento de Projetos:\n"); // Atribuir a quantidade de questoês
scanf("%i",&con2);
printf("Informe as questôes da Lingua Inglesa:\n"); // Atribuir a quantidade de questoês
scanf("%i",&con3);
printf("Informe as questôes de Metodologia Agil:\n"); // Atribuir a quantidade de questoês
scanf("%i",&con4);
printf("Informe as questôes de Linguagem Javascript:\n"); // Atribuir a quantidade de questoês
scanf("%i",&con5);
    no = con1;
    for(cont=0;cont<con1;cont++)    // Atribuir notas de acordo com a quantidade de questoes informadas no Raciocinio
    {
        printf("Notas a serem registradas:%i\n",no);
        printf("Digite a nota de Raciocinio Logico:\n");
        scanf("%f",&racio[cont]);
        soma[0] = soma[0] + racio[cont];
        if (racio[cont] > min)
        {
            min = racio[cont];
        }
        if (racio[cont] < max)
        {
            max = racio[cont];
        }
        no = no - 1;
    }
    extremo[0] = max + min;
    
    no = con2;    // Atribuir notas de acordo com a quantidade de questoes informadas no Gerenciamento
    max = 10;
    min = 0;
    for(cont=0;cont<con2;cont++)
    {
        printf("Notas a serem registradas:%i\n",no);
        printf("Digite a nota de Gerenciamento de Projetos :\n");
        scanf(" %f",&gen[cont]);
        soma[1] = soma[1] + gen[cont];
        if (gen[cont] > min)
        {
            min = gen[cont];
        }
        if (gen[cont] < max)
        {
            max = gen[cont];
        }
        no = no - 1;
    }
    extremo[1] = max + min;
    
    no = con3; // Atribuir notas de acordo com a quantidade de questoes informadas na Lingua Inglesa
    max = 10;
    min = 0;
    for(cont=0;cont<con3;cont++)
    {
        printf("Notas a serem registradas:%i\n",no);
        printf("Digite a nota da Lingua Inglesa:\n");
        scanf(" %f",&ing[cont]);
        soma[2] = soma[2] + ing[cont];
        if (ing[cont] > min)
        {
            min = ing[cont];
        }
        if (ing[cont] < max)
        {
            max = ing[cont];
        }
        no = no - 1;
    }
    extremo[2] = max + min;
     
    no = con4;  // Atribuir notas de acordo com a quantidade de questoes informadas na Metodologia 
    max = 10;
    min = 0;
    for(cont=0;cont<con4;cont++)
    {
        printf("Notas a serem registradas:%i\n",no);
        printf("Digite a nota de Metodologia Agil:\n");
        scanf("%f",&met[cont]);
        soma[3] = soma[3] + met[cont];
        if (met[cont] > min)
        {
            min = met[cont];
        }
        if (met[cont] < max)
        {
            max = met[cont];
        }
        no = no - 1;
    }
    extremo[3] = max + min;
    
    no = con5; // Atribuir notas de acordo com a quantidade de questoes informadas no Javascript
    max = 10;
    min = 0;
    for(cont=0;cont<con5;cont++)
    {
        printf("Notas a serem registradas:%i\n",no);
        printf("Digite a nota de Linguagem Javascript:\n");
        scanf("%f",&java[cont]);
        soma[4] = soma[4] + java[cont];
        if (java[cont] > min)
        {
            min = java[cont];
        }
        if (java[cont] < max)
        {
            max = java[cont];
        }
        no = no - 1;
    }
    extremo[4] = max + min;
    printf("Entrada de Dados:\n");
    printf("Raciocinio Logico:%i\n", con1); // Recolher dados obtidos 
    for(cont=0;cont<con1;cont++)
    {
        printf("%.1f ",racio[cont]);
    }
    
    printf("\nGerenciamento de Projeto:%i\n", con2); // Recolher dados obtidos
    
    for(cont=0;cont<con2;cont++)
    {
        printf("%.1f ",gen[cont]);
    }
    
    printf("\nLingua Inglesa:%i\n", con3); // Recolher dados obtidos
    
    for(cont=0;cont<con3;cont++)
    {
        printf("%.1f ",ing[cont]);
    }
    
    printf("\nMetodologia Agil:%i\n", con4); // Recolher dados obtidos
    for(cont=0;cont<con4;cont++)
    {
        printf("%.1f ",met[cont]);
    }
    
    printf("\nLinguagem Javascrpt:%i\n", con5); // Recolher dados obtidos
    for(cont=0;cont<con5;cont++)
    {
        printf("%.1f ",java[cont]);
    }
    
    nota[0]= soma[0]-extremo[0]; // somar as notas do teste menos os numeros extremos
    nota[1]= soma[1]-extremo[1];
    nota[2]= soma[2]-extremo[2];
    nota[3]= soma[3]-extremo[3];
    nota[4]= soma[4]-extremo[4];
    soma[5]= nota[0]+nota[1]+nota[2]+nota[3]+nota[4];
    
    printf("\nSaída de Dados:\n");
    printf("Nota de Raciocinio Logico:%2.f\n", nota[0]);
    printf("Nota de Gerenciamento de Projeto:%2.f\n", nota[1]);
    printf("Nota de Lingua Inglesa:%2.f\n", nota[2]);
    printf("Nota de Metodologia Agil:%2.f\n", nota[3]);
    printf("Nota de Linguagem Javascript:%2.f\n", nota[4]);
    printf("Nota do Participante:%2.f\n",soma[5]);
return 0;
}