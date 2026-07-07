# 🧮 Calculadora Simples em C

Projeto desenvolvido com o objetivo de treinar **lógica de programação** e aplicar boas **práticas de código limpo** (clean code) e **refatoração** em C, evoluindo continuamente a organização e a robustez do código além das quatro operações básicas.

## 🎯 Objetivo do Projeto

Mais do que apenas realizar cálculos, este projeto foi criado para praticar:

- Separação de responsabilidades em funções pequenas e coesas (Single Responsibility Principle)
- Refatoração incremental, extraindo lógica da `main()` para funções especializadas
- Nomenclatura clara e autoexplicativa de variáveis e funções
- Validação de entradas do usuário, incluindo casos de erro matemático
- Estruturação de um fluxo de programa legível e fácil de manter
- Desenvolver lógica com uso restrito de Inteligência Artificial, a qual foi utilizada apenas para aprender práticas de Clean Code

## 🛠️ Conceitos praticados

Neste projeto foram utilizados os seguintes conceitos:

- Funções e Modularização
- Tabela ASCII
- Estruturas de repetição e de decisão
- Passagem de parâmetros por cópia e por referência
- Validação de entradas do usuário
- Refatoração e Single Responsibility Principle

## 🧩 Estrutura do Código

O código passou por uma nova etapa de refatoração: a `main()` foi reduzida a uma
única chamada, e a orquestração do fluxo foi extraída para a função `iniciarFluxo()`,
deixando cada função responsável por uma única tarefa.

| Função | Responsabilidade |
|---|---|
| `main()` | Ponto de entrada; delega toda a execução para `iniciarFluxo()` |
| `iniciarFluxo()` | Orquestra o fluxo geral: exibe menu, captura opção e números, aciona o cálculo e controla a repetição |
| `exibirMenu()` | Exibe as opções disponíveis ao usuário |
| `selecionarOpcao()` | Captura e valida a opção escolhida no menu |
| `escanearNumeros()` | Captura os dois números via ponteiros (`double*`) |
| `executarOperacoes()` | Direciona a operação escolhida (switch) e valida divisão por zero |
| `somar()`, `subtrair()`, `multiplicar()`, `dividir()` | Executam e exibem o resultado de cada operação |
| `repetirCalculadora()` | Pergunta e valida se o usuário deseja continuar |

Essa divisão reflete um processo contínuo de refatoração**: a lógica que antes
estava concentrada na `main()` foi progressivamente extraída em funções menores,
nomeadas de acordo com sua responsabilidade, e a validação de divisão por zero foi
isolada dentro de `executarOperacoes()`, mantendo `dividir()` livre de
responsabilidades de tratamento de erro.

## 💻 Exemplo de Uso

```
===============================
      Calculadora Simples
===============================
Selecione uma operacao:
1. Adicao
2. Subtracao
3. Multiplicacao
4. Divisao
5. Sair
Opcao:
Digite um numero de 1 a 5: 4
Digite o primeiro numero: 10
Digite o segundo numero: 0
Erro. Divisoes por zero sao indefinidas. Por favor, escolha outro denominador.
Digite o primeiro numero: 10
Digite o segundo numero: 2
Resultado: 10.00 / 2.00 = 5.00
Deseja realizar outra operacao? Digite 'S' para SIM ou 'N' para NAO
```

## 🛠️ Tecnologias

- Linguagem: **C**
- Compilador utilizado: **GCC**

## 👤 Autor

**Pedro Lucas Moreira Araújo**
Estudante de Sistemas de Informação — UFU
[github.com/pedrolucas018](https://github.com/pedrolucas018)