# Sistema de Caixa Eletrônico em C

Este é um projeto de um sistema de caixa eletrônico interativo desenvolvido em C. O programa simula operações de saque, gerenciando o saldo do usuário e o limite especial, além de realizar a distribuição "ótima" das notas de acordo com o valor solicitado.

---

## Funcionalidades

* **Menu Interativo:** O sistema opera em loop, permitindo que o usuário realize múltiplas operações até que decida sair.
* **Gestão de Saldo e Limite Especial:** O programa verifica se o saldo em conta é suficiente para o saque e, caso não seja, oferece a opção de usar o limite especial (R$ 2.300,00).
* **Distribuição Ótima de Notas:** Para cada saque, o algoritmo calcula a quantidade mínima de notas de cada valor (R$ 100, R$ 50, R$ 20, R$ 10, R$ 5, R$ 2, R$ 1) para compor a quantia.
* **Mensagem de Saudação:** O sistema cumprimenta o usuário com "Bom dia!", "Boa tarde!" ou "Boa noite!" com base no horário de acesso.
* **Estrutura Modular:** O código é organizado em módulos (`tools`, `menu`, `atm`, `bills`) para facilitar a manutenção e a legibilidade.

---

## Tecnologias Utilizadas

* **Linguagem:** C
* **Bibliotecas Padrão:** `stdio.h`, `stdlib.h`, `locale.h`, `time.h`