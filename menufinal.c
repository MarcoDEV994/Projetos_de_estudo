#include<stdio.h>
#include<stdlib.h>


typedef struct Funcionario {
    char nome[100];
    int idade;
    long cpf;
    long matricula;
} Funcionario;

void cadastrar(Funcionario *funcionarios) {
    int entrada;
    for(int i = 0; i < 500; i++) {
        if (funcionarios[i].idade == 0){

    printf("Digite o Nome: \n");
    fflush(stdin);
    fgets(funcionarios[i].nome, 100, stdin);

    printf("Digite a Idade: \n");
    scanf("%d", &funcionarios[i].idade);

    printf("Digite o CPF: \n");
    scanf("%ld", &funcionarios[i].cpf);
    funcionarios[i].matricula = i;
    printf("O funcionário %s foi cadastrado, e sua matricula é %ld\n", funcionarios[i].nome, funcionarios[i].matricula);
    printf("Deseja cadastrar outro funcionário? \n");
    printf("Sim = 1/ Não = 2 \n");
    scanf("%d", &entrada);

    switch (entrada)
    {
    case 1:
        cadastrar(funcionarios);
        break;
    case 2:
    break;
    default:
    break;
    }
    system("clear");

break;
        }
    }
}
void editar(Funcionario *funcionarios) {

};
void listar(Funcionario *funcionarios) {
    char entrada;
    system("clear");
    for(int i = 0; i < 500 ; i++){
    if(funcionarios[i].idade != 0){
        printf("\n______________________________________\n");
        printf("Matricula: %ld\n", funcionarios[i].matricula);
        printf("Nome: %s", funcionarios[i].nome);
        printf("Idade: %d\n", funcionarios[i].idade);
        printf("CPF: %ld\n", funcionarios[i].cpf);

}
}
printf("Pressione qualquer tecla para voltar...\n");
fflush(stdin);
scanf("%c", &entrada);

    switch (entrada)
    {
    case 1:
        cadastrar(funcionarios);
        break;
    case 2:
    break;
    default:
    break;
    }
}
void excluir(Funcionario *funcionarios) {
    int entrada;
    int escolha;
    char sair;
    int escolha2;
printf("Digite a matricula do funcionário que deseja excluir: \n");
scanf("%d", &entrada);

if(funcionarios[entrada].idade != 0) {

printf("\nO funcionário que deseja excluir é?\n");
printf("Matricula: %ld\n", funcionarios[entrada].matricula);
printf("Nome: %s", funcionarios[entrada].nome);
printf("Idade: %d\n", funcionarios[entrada].idade);
printf("CPF: %ld\n", funcionarios[entrada].cpf);
printf("Se sim = 1, se não = 2, sair = 3\n");
    scanf("%d", &escolha);
    if (escolha == 1){
        funcionarios[entrada].idade = 0;
        printf("Funcionario deletado!!!\n");
        printf("Pressione qualquer tecla para voltar...\n");
fflush(stdin);
scanf("%c", &sair);

    } else if (escolha == 2){
        excluir(funcionarios);
    }
}else{
    printf("A matricula não existe!!\n");
    printf("1 - Tentar novamente, 2 - Voltar\n");
    scanf("%d", &escolha2);
    if( escolha2 == 1){
        excluir(funcionarios);
}
}
}
void zerar_idades(Funcionario *funcionarios) {
    for(int i = 0; i < 500; i ++){
        funcionarios[i].idade = 0;
    }
}

void menu(Funcionario *funcionarios) {
    int entrada;
    system("clear");
    printf("--- Gerenciamento de Funcionários---\n");
    printf("1. Cadastrar funcionário\n");
    printf("2. Editar funcionário\n");
    printf("3. Listar funcionários\n");
    printf("4. Excluir funcionário\n");
    printf("5. Sair\n");
    //
    scanf("%d", &entrada);

switch (entrada){
    case 1:
        cadastrar(funcionarios);
            menu(funcionarios);

        break;
    case 2:
        editar(funcionarios);
            menu(funcionarios);

        break;
    case 3:
        listar(funcionarios);
            menu(funcionarios);

        break;
    case 4:
        excluir(funcionarios);
            menu(funcionarios);

        break;
    case 5:
    break;
    default:
        menu (funcionarios);
    break;
};
};

int main(){
Funcionario funcionarios[500];
zerar_idades(funcionarios);
menu(funcionarios);
    
return 0;
}