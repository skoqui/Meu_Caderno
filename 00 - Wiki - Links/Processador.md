---
tags:
  - computador
---
---

# Processador (CPU)
O **processador**, também chamado de **CPU (Central Processing Unit)**, é o “**cérebro do computador**”.  
Ele é o responsável por **executar instruções**, **fazer cálculos** e **controlar as tarefas** do sistema.

Tudo o que o computador faz passa, de alguma forma, pelo processador.

## Como o Processador Funciona 
O processador trabalha em um ciclo básico chamado:
**Buscar → Decodificar → Executar**

1. **Buscar (Fetch)**
	O processador **busca uma instrução** na memória RAM.

2. **Decodificar(Decode)**
	Ele **entende o que precisa ser feito** (ex: somar, comparar, mover dados).

3. **Executar (Execute)**
	Ele **executa a instrução** e gera um resultado.

==Esse ciclo acontece **bilhões de vezes por segundo**.==

## O que são Clock e GHz
- O **clock** é a velocidade do processador.
- Medido em **GHz** (Gigahertz).
- Exemplo: `3.5 GHz` = **3,5 bilhões de ciclos por segundos.**

-> Quando maior o clock, mais instruções podem ser executadas por segundo (mas não é o fator de desempenho).

## Núcleos (Cores)
- Um processador pode ter **vários núcleos.**
- Cada núcleo funciona como um "mini processador".

Exemplo:
- **2 núcleos:** pode executar 2 tarefas ao mesmo tempo
- **8 núcleos:** melhor para multitarefa, VMs, segurança, análise, etc.

## Cache do Processador
O **cache** é uma memória **muito rápida** dentro do processador.
Ele guarda dados que a CPU usa com frequência para evitar buscar tudo na RAM

Tipos comuns:
- **L1:** muito rápido, pequeno
- **L2**
- **L3:** maior, um pouco mais lento

## Relação com outros componentes
- [[RAM]]: onde ficam os dados e programas em uso
- HD/SSD: armazenamento permanente
- Processador: executa tudo