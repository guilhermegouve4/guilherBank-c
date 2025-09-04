# Sistema de Caixa Eletrônico - GuilherBank

Um simulador de caixa eletrônico desenvolvido em C como parte do curso de **Análise e Desenvolvimento de Sistemas** da **Unicesumar (Londrina)**.

## Sobre o Projeto

Este projeto foi desenvolvido para as disciplinas de **Algoritmos e Lógica de Programação** e **Linguagens de Programação**, ministradas pelo professor **Anderson Iwazaki**. O sistema simula as operações básicas de um caixa eletrônico, implementando algoritmos de distribuição otimizada de cédulas e controle de saldo com limite especial.

## Funcionalidades

### Principais Features
- **Consulta de Saldo**: Visualização do saldo atual da conta
- **Operação de Saque**: Retirada de valores com validações
- **Limite Especial**: Sistema de crédito adicional de R$ 2.300,00
- **Distribuição Otimizada de Notas**: Algoritmo que minimiza a quantidade de cédulas
- **Interface Interativa**: Menu intuitivo em português
- **Validações Robustas**: Tratamento de entradas inválidas

### Denominações Suportadas
O sistema trabalha com as seguintes cédulas do Real brasileiro:
- R$ 200,00 (Lobo-guará)
- R$ 100,00 (Peixe)
- R$ 50,00 (Onça-pintada)
- R$ 20,00 (Mico-leão-dourado)
- R$ 10,00 (Arara)
- R$ 5,00 (Garça)
- R$ 2,00 (Tartaruga)
- R$ 1,00 (Beija-flor)

## Arquitetura do Projeto

```
projeto-caixa-eletronico/
--- src/
|   --- main.c          # Função principal e controle do programa
|   --- atm.c           # Lógica de saque e validações
|   --- bills.c         # Algoritmo de distribuição de notas
|   --- menu.c          # Interface do usuário
|   --- tools.c         # Funções utilitárias
--- include/
|   --- atm.h           # Declarações para operações ATM
|   --- bills.h         # Declarações para distribuição de notas
|   --- menu.h          # Declarações do menu
|   --- tools.h         # Declarações de utilitários
--- README.md
```

## Como Compilar e Executar

### Pré-requisitos
- Compilador GCC instalado
- Sistema operacional Windows (para comandos `cls` e `pause`)

### Compilação
```bash
# Navegar para o diretório do projeto
cd projeto-caixa-eletronico

# Compilar todos os arquivos
gcc src/*.c -I include -o caixa_eletronico.exe

# Executar o programa
./caixa_eletronico.exe
```

### Compilação Alternativa (Makefile)
```makefile
# Criar um Makefile para automatizar a compilação
CC=gcc
CFLAGS=-Wall -Wextra -std=c99
SRCDIR=src
INCDIR=include
SOURCES=$(wildcard $(SRCDIR)/*.c)
TARGET=caixa_eletronico

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) -I$(INCDIR) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET)
```

## Como Usar

### Fluxo Principal
1. **Inicialização**: O sistema inicia com saldo de R$ 1.500,00 e limite especial de R$ 2.300,00
2. **Menu Principal**: Escolha entre realizar saque ou sair
3. **Operação de Saque**: 
   - Digite o valor desejado
   - Sistema verifica disponibilidade de fundos
   - Se necessário, oferece uso do limite especial
   - Distribui as notas de forma otimizada
4. **Finalização**: Mensagem de agradecimento com saudação baseada no horário

### Exemplo de Uso
```
=== EXEMPLO DE SAQUE ===
Valor solicitado: R$ 287,00
Distribuição:
- 1 nota de R$ 200,00
- 1 nota de R$ 50,00
- 1 nota de R$ 20,00
- 1 nota de R$ 10,00
- 1 nota de R$ 5,00
- 1 nota de R$ 2,00
```

## Algoritmo de Distribuição

O sistema utiliza um **algoritmo guloso** para distribuição otimizada:

```c
// Pseudocódigo do algoritmo
while (valor_restante > 0) {
    for (cada_cedula_em_ordem_decrescente) {
        while (valor_restante >= valor_cedula) {
            valor_restante -= valor_cedula;
            contador_cedula++;
        }
    }
}
```

Este algoritmo garante o **menor número possível de cédulas** para qualquer valor solicitado.

## Validações Implementadas

### Validações de Entrada
- ? Verificação de tipos numéricos
- ? Valores negativos ou zero
- ? Limpeza de buffer para entradas inválidas

### Validações de Negócio
- ? Verificação de saldo suficiente
- ? Controle de limite especial
- ? Confirmação para uso de limite
- ? Cálculos precisos de distribuição

## Features Adicionais

### Saudações Inteligentes
```c
// Baseado no horário do sistema
06:00 - 11:59: "Tenha um excelente dia!"
12:00 - 17:59: "Tenha uma excelente tarde!"
18:00 - 05:59: "Tenha uma excelente noite!"
```

### Interface Amigável
- Mensagens em português brasileiro
- Feedback visual com quebras de linha
- Comandos de pausa para melhor UX
- Limpeza de tela entre operações

## Conceitos Aplicados

### Programação Estruturada
- **Modularização**: Separação em múltiplos arquivos
- **Headers**: Organização de declarações
- **Funções**: Responsabilidades bem definidas

### Estruturas de Dados
- **Ponteiros**: Passagem por referência para saldo e limite
- **Arrays implícitos**: Denominações de cédulas
- **Estruturas condicionais**: Validações e fluxos

### Algoritmos
- **Algoritmo Guloso**: Distribuição otimizada
- **Validação de Entrada**: Tratamento robusto
- **Controle de Fluxo**: Loops e condições

## Autor

**Guilherme Augusto Gouvea**  
?? Estudante de Análise e Desenvolvimento de Sistemas  
?? Unicesumar - Londrina  
????? Prof. Anderson Iwazaki

## Disciplinas

- **Algoritmos e Lógica de Programação**
- **Linguagens de Programação**

## Licença

Este projeto foi desenvolvido para fins acadêmicos como parte do curso de ADS da Unicesumar.

---

### Links Úteis
- [Documentação da Linguagem C](https://en.cppreference.com/w/c)
- [GCC Compiler](https://gcc.gnu.org/)
- [Unicesumar](https://www.unicesumar.edu.br/)

---
*Desenvolvido com ?? para aprendizado em programação C*
