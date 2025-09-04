# Sistema de Caixa Eletr�nico - GuilherBank

Um simulador de caixa eletr�nico desenvolvido em C como parte do curso de **An�lise e Desenvolvimento de Sistemas** da **Unicesumar (Londrina)**.

## Sobre o Projeto

Este projeto foi desenvolvido para as disciplinas de **Algoritmos e L�gica de Programa��o** e **Linguagens de Programa��o**, ministradas pelo professor **Anderson Iwazaki**. O sistema simula as opera��es b�sicas de um caixa eletr�nico, implementando algoritmos de distribui��o otimizada de c�dulas e controle de saldo com limite especial.

## Funcionalidades

### Principais Features
- **Consulta de Saldo**: Visualiza��o do saldo atual da conta
- **Opera��o de Saque**: Retirada de valores com valida��es
- **Limite Especial**: Sistema de cr�dito adicional de R$ 2.300,00
- **Distribui��o Otimizada de Notas**: Algoritmo que minimiza a quantidade de c�dulas
- **Interface Interativa**: Menu intuitivo em portugu�s
- **Valida��es Robustas**: Tratamento de entradas inv�lidas

### Denomina��es Suportadas
O sistema trabalha com as seguintes c�dulas do Real brasileiro:
- R$ 200,00 (Lobo-guar�)
- R$ 100,00 (Peixe)
- R$ 50,00 (On�a-pintada)
- R$ 20,00 (Mico-le�o-dourado)
- R$ 10,00 (Arara)
- R$ 5,00 (Gar�a)
- R$ 2,00 (Tartaruga)
- R$ 1,00 (Beija-flor)

## Arquitetura do Projeto

```
projeto-caixa-eletronico/
??? src/
?   ??? main.c          # Fun��o principal e controle do programa
?   ??? atm.c           # L�gica de saque e valida��es
?   ??? bills.c         # Algoritmo de distribui��o de notas
?   ??? menu.c          # Interface do usu�rio
?   ??? tools.c         # Fun��es utilit�rias
??? include/
?   ??? atm.h           # Declara��es para opera��es ATM
?   ??? bills.h         # Declara��es para distribui��o de notas
?   ??? menu.h          # Declara��es do menu
?   ??? tools.h         # Declara��es de utilit�rios
??? README.md
```

## Como Compilar e Executar

### Pr�-requisitos
- Compilador GCC instalado
- Sistema operacional Windows (para comandos `cls` e `pause`)

### Compila��o
```bash
# Navegar para o diret�rio do projeto
cd projeto-caixa-eletronico

# Compilar todos os arquivos
gcc src/*.c -I include -o caixa_eletronico.exe

# Executar o programa
./caixa_eletronico.exe
```

### Compila��o Alternativa (Makefile)
```makefile
# Criar um Makefile para automatizar a compila��o
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
1. **Inicializa��o**: O sistema inicia com saldo de R$ 1.500,00 e limite especial de R$ 2.300,00
2. **Menu Principal**: Escolha entre realizar saque ou sair
3. **Opera��o de Saque**: 
   - Digite o valor desejado
   - Sistema verifica disponibilidade de fundos
   - Se necess�rio, oferece uso do limite especial
   - Distribui as notas de forma otimizada
4. **Finaliza��o**: Mensagem de agradecimento com sauda��o baseada no hor�rio

### Exemplo de Uso
```
=== EXEMPLO DE SAQUE ===
Valor solicitado: R$ 287,00
Distribui��o:
- 1 nota de R$ 200,00
- 1 nota de R$ 50,00
- 1 nota de R$ 20,00
- 1 nota de R$ 10,00
- 1 nota de R$ 5,00
- 1 nota de R$ 2,00
```

## Algoritmo de Distribui��o

O sistema utiliza um **algoritmo guloso** para distribui��o otimizada:

```c
// Pseudoc�digo do algoritmo
while (valor_restante > 0) {
    for (cada_cedula_em_ordem_decrescente) {
        while (valor_restante >= valor_cedula) {
            valor_restante -= valor_cedula;
            contador_cedula++;
        }
    }
}
```

Este algoritmo garante o **menor n�mero poss�vel de c�dulas** para qualquer valor solicitado.

## Valida��es Implementadas

### Valida��es de Entrada
- ? Verifica��o de tipos num�ricos
- ? Valores negativos ou zero
- ? Limpeza de buffer para entradas inv�lidas

### Valida��es de Neg�cio
- ? Verifica��o de saldo suficiente
- ? Controle de limite especial
- ? Confirma��o para uso de limite
- ? C�lculos precisos de distribui��o

## ?? Features Adicionais

### Sauda��es Inteligentes
```c
// Baseado no hor�rio do sistema
06:00 - 11:59: "Tenha um excelente dia!"
12:00 - 17:59: "Tenha uma excelente tarde!"
18:00 - 05:59: "Tenha uma excelente noite!"
```

### Interface Amig�vel
- Mensagens em portugu�s brasileiro
- Feedback visual com quebras de linha
- Comandos de pausa para melhor UX
- Limpeza de tela entre opera��es

## Conceitos Aplicados

### Programa��o Estruturada
- **Modulariza��o**: Separa��o em m�ltiplos arquivos
- **Headers**: Organiza��o de declara��es
- **Fun��es**: Responsabilidades bem definidas

### Estruturas de Dados
- **Ponteiros**: Passagem por refer�ncia para saldo e limite
- **Arrays impl�citos**: Denomina��es de c�dulas
- **Estruturas condicionais**: Valida��es e fluxos

### Algoritmos
- **Algoritmo Guloso**: Distribui��o otimizada
- **Valida��o de Entrada**: Tratamento robusto
- **Controle de Fluxo**: Loops e condi��es

## Autor

**Guilherme Augusto Gouvea**  
?? Estudante de An�lise e Desenvolvimento de Sistemas  
?? Unicesumar - Londrina  
????? Prof. Anderson Iwazaki

## Disciplinas

- **Algoritmos e L�gica de Programa��o**
- **Linguagens de Programa��o**

## Licen�a

Este projeto foi desenvolvido para fins acad�micos como parte do curso de ADS da Unicesumar.

---

### Links �teis
- [Documenta��o da Linguagem C](https://en.cppreference.com/w/c)
- [GCC Compiler](https://gcc.gnu.org/)
- [Unicesumar](https://www.unicesumar.edu.br/)

---
*Desenvolvido com ?? para aprendizado em programa��o C*