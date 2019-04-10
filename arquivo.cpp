#include <stdio.h>
#include <stdlib.h>

int main(){
    //criando um arquivo
    FILE *arquivo; //ponteiro que aponta pra dados do tipo file
    arquivo = fopen("teste.txt", "wt");  //primeiro parametro é o nme do arquivo, o segugndo é o modo de abertura do arquivo
                                         //wb: gravação em binario, wt: gravação em texto (pro seggundo parametro do fopen
                                         //rt = leitura em texto
                                         //caso esse arquivo não existe é criado um novo, mas se der alggum erro o arquivo recebe NULL
    if(arquivo == NULL){
        printf("Não foi possível abrir o arquivo.");
        exit(0);
    }

    fprintf(arquivo, "Ola Mundo 666"); // primeiro coloca o nome do arquivo que será gravado

    fclose(arquivo); //fecha o arquivo

    arquivo = fopen("arquivo", "rt");
    if(arquivo == NULL){
        printf("Não foi possivel abrir o arquivo");
        exit(0);
    }

    char vetor[10];
    int valor;
    fscanf(arquivo, "%s %d", &vetor, &valor); // primeiro o nome do arquivo que fará a leitura
                                              // a fprma de separar no fscanf deve ser a mesma que foi gravado o conteudp
    printf("\n\n%s %d", vetor, valor);



    system("pause");
    return 0;
}
