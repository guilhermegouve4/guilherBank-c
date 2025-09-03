# Sistema de Caixa Eletr�nico em C

Este � um projeto de um sistema de caixa eletr�nico interativo desenvolvido em C. O programa simula opera��es de saque, gerenciando o saldo do usu�rio e o limite especial, al�m de realizar a distribui��o "�tima" das notas de acordo com o valor solicitado.

---

## Funcionalidades

* **Menu Interativo:** O sistema opera em loop, permitindo que o usu�rio realize m�ltiplas opera��es at� que decida sair.
* **Gest�o de Saldo e Limite Especial:** O programa verifica se o saldo em conta � suficiente para o saque e, caso n�o seja, oferece a op��o de usar o limite especial (R$ 2.300,00).
* **Distribui��o �tima de Notas:** Para cada saque, o algoritmo calcula a quantidade m�nima de notas de cada valor (R$ 100, R$ 50, R$ 20, R$ 10, R$ 5, R$ 2, R$ 1) para compor a quantia.
* **Mensagem de Sauda��o:** O sistema cumprimenta o usu�rio com "Bom dia!", "Boa tarde!" ou "Boa noite!" com base no hor�rio de acesso.
* **Estrutura Modular:** O c�digo � organizado em m�dulos (`tools`, `menu`, `atm`, `bills`) para facilitar a manuten��o e a legibilidade.

---

## Tecnologias Utilizadas

* **Linguagem:** C
* **Bibliotecas Padr�o:** `stdio.h`, `stdlib.h`, `locale.h`, `time.h`