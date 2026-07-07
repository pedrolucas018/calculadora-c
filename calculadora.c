#include <stdio.h>

void exibirMenu(){
    printf("===============================\n");
    printf("      Calculadora Simples\n");
    printf("===============================\n");
    printf("Selecione uma operacao:\n");
    printf("1. Adicao\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("5. Sair\n");
    printf("Opcao: ");
}

int selecionarOpcao (){
    int opcaoSelecionada;
    
    while(1){

        printf("Digite um numero de 1 a 5: ");
        scanf("%d", &opcaoSelecionada);
        while(getchar() != '\n');

        if (opcaoSelecionada < 1 || opcaoSelecionada > 5){
            printf("Entrada invalida. Digite um numero de 1 a 5: \n");
        }

        else {
            return opcaoSelecionada;
        }
       
    }
    
}

void escanearNumeros (double *numero1, double *numero2){

    while(1){
        printf("Digite o primeiro numero: ");
        if (scanf("%lf", numero1) == 1) {
            while(getchar() != '\n');
            break;
        } else {
            printf("Entrada invalida. Digite um numero: \n");
            while(getchar() != '\n');
        }
    }

    while(1){
        printf("Digite o segundo numero: ");
        if (scanf("%lf", numero2) == 1) {
            while(getchar() != '\n');
            break;
        } else {
            printf("Entrada invalida. Digite um numero: \n");
            while(getchar() != '\n');
        }
    }
}


void somar (double numero1, double numero2){
    double resultado = numero1 + numero2;
    printf("Resultado: %.2lf + %.2lf = %.2lf\n", numero1, numero2, resultado);

}

void subtrair (double numero1, double numero2){
    double resultado = numero1 - numero2;
    printf("Resultado: %.2lf - %.2lf = %.2lf\n", numero1, numero2, resultado);

}

void multiplicar (double numero1, double numero2){
    double resultado = numero1 * numero2;
    printf("Resultado: %.2lf * %.2lf = %.2lf\n", numero1, numero2, resultado);

}

void dividir (double numero1, double numero2){
    double resultado = numero1 / numero2;
    printf("Resultado: %.2lf / %.2lf = %.2lf\n", numero1, numero2, resultado);
    
}

int repetirCalculadora (){
    char respostaUsuario;
    int temp = 1;

    printf("Deseja realizar outra operacao? Digite 'S' para SIM ou 'N' para NAO\n");
    while(temp){

        scanf(" %c", &respostaUsuario);
        while(getchar() != '\n');

        if (respostaUsuario == 'S' || respostaUsuario  == 's'){
            temp = 0;
            return 1;
        
        } 
        
        else if (respostaUsuario  == 'N' || respostaUsuario  == 'n'){
            printf("Obrigado por usar a calculadora! Ate a proxima.");
            temp = 0;
            return 0; 
            
        }

        else {
            printf("Resposta invalida. Digite 'S' para SIM ou 'N' para NAO: \n");
            continue;
        }
    }

}

void executarOperacoes (int opcaoSelecionada, double numero1, double numero2){

     switch (opcaoSelecionada){

                case 1:
                    somar(numero1, numero2);
                    break;

                case 2:
                    subtrair(numero1, numero2);
                    break;
                    
                case 3:
                    multiplicar(numero1, numero2);
                    break;
                    
                case 4:
                    while (numero2 == 0){
                        printf("Erro. Divisoes por zero sao indefinidas. Por favor, escolha outro denominador.\n");
                        escanearNumeros(&numero1, &numero2);
                    }

                    dividir(numero1, numero2);
                    break;
            }
}

void iniciarFluxo (){

    int respostaUsuario = 1;

        while (respostaUsuario){
            exibirMenu();
            int opcaoSelecionada = selecionarOpcao();

            if (opcaoSelecionada == 5){
                printf("Obrigado por usar a calculadora! Ate a proxima.");
                break;
            }

            double numero1 = 0.0, numero2 = 0.0;
            escanearNumeros(&numero1, &numero2);

            executarOperacoes(opcaoSelecionada, numero1, numero2);

            respostaUsuario = repetirCalculadora();       
        }
}

int main (){

    iniciarFluxo ();

    return 0;
    
}