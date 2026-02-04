---
Curso: Segurança da Informação
Professor: Marcelo Santos
Plataforma:
  - UNIP
Data início: 2026-02-04
Data término:
tags:
  - "#pentest"
  - linux
Status: false
---
---

# 📘 Fundamentos de Sistemas Operacionais – Unidade I
### 📌 Introdução aos Sistemas Operacionais
**Resumo:**
→ Um computador faz várias coisas ao mesmo tempo: abre programas, salva arquivos, mostra imagens na tela e se conecta à internet. Quem organiza tudo isso é o **Sistema Operacional (SO).**

Pense no SO como um **gerente de uma fábrica:**
- Os **programas** são os funcionários.
- O **Hardware** (memória, disco, teclado, tela, etc) são as máquinas.
- O **SO organiza quem usa o quê e quando,** para evitar confusão.

Ele garante que:
- Um programa não use a tela do outro
- Dois programas não tentem usar a mesma memória ao mesmo tempo
-  Os dados sejam salvos corretamente

→ **Exemplo prático:**
Quando você abre o navegador e um editor de texto ao mesmo tempo:
- O SO decide quanto de memória cada um recebe
- Controla o teclado e mouse
-  Mostra os dois na tela sem misturar

→ **Lembrete**
```
📌 O sistema operacional é o intermediário entre o usuário, os programas e o hardware.
```

---

## 📌 Hardware x Software
### 🔹**Hardware**
→ **Explicação simples:**
São as **partes físicas** do computador. Tudo que você pode tocar.

Exemplos:
- Teclado
- Mouse
- Tela (Monitor)
- HD ou SSD
- Memória RAM
- Processador

→ **Analogia:**
==O hardware é o **corpo do computado.**==

---

### 🔹**Software**
→ **Explicação simples:**
São os **programas** que dizem ao hardware o que fazer.

Exemplo:
- Windows, Linux, macOS (SOs)
- Navegador
- Word, games, calculadora

→ **Analogia:**
==O software é o **cérebro e as instruções.**==

→ **Lembrete:**
```
📌 Hardware = físico | Software = lógico
```

---

## 📌 O que é um Sistema Operacional
→ **Definição importante:**
O sistema operacional é o **programa principal do computador.** Ele controla todo o hardware e permite que os outros programa funcionem.

Ele gerencia:
- Processos (programas rodando)
- Memória
- Disco
- Teclado, mouse e tela
- Internet e rede

→**Exemplo prático:**
Quando você manda imprimir um trabalho:
- O word fala com o sistema operacional
- O sistema operacional fala com a impressora

Você nunca fala diretamente com o hardware.

→ **Lembrete**
```
📌 Programas não falam com o hardware — eles falam com o Sistema Operacional.
```

---

## 📌 Estrutura do Ambiente Computacional
→ **Como funciona a "camada" do computador.**

De cima para baixo:
- Usuário
- Aplicativos (Word, navegador, jogos)
- Sistema Operacional
- Hardware

→ **Explicação simples:**
1. O usuário fala com os aplicativos.
2. Os aplicativos falam com o sistema operacional.
3. O sistema operacional fala com o hardware.

![](../../Banco%20de%20imagens/estrutura.png)


→ **Lembrete:**
```
📌 O SO fica entre os aplicativos e o hardware.
```


---

## 📌 Abstração
→ **Explicação simples:**
O sistema operacional **esconde a complexidade do hardware.**

==Você não precisa saber como funciona uma impressora por dentro. Você só clica em "imprimir".==

→**Exemplo:**
O programa manda o texto para um "modelo de impressora virtual".
O SO transforma isso em sinais que a impressora real entende.

→**Lembrete:**
```
📌 Abstração = o SO simplifica o uso do hardware.
```

---

## 📌 **Gerência de Recursos**
→ **Explicação simples:**
Quando vários programas querem usar o computador ao mesmo tempo, o SO decide:
- Quem usa a memória
- Quem usa o processo
- Quem acessa o disco

→ **Exemplo:**
Se você abre um jogo e um navegador juntos:
1. O SO divide o processador
2. Controla a memória para os dois

→ **Analogia:**
==O SO funciona como um semáforo organizando carros em um cruzamento==

→**Lembrete:**
```
📌 O SO evita conflitos entre programas.
```

---

## 📌 **Ábaco**
→ **Explicação simples:**
É um dos primeiros instrumentos de cálculo da história:
Funciona com bolinhas organizadas em colunas:
- Parte de baixo = vale 1
- Parte de cima = vale 5

![](../../Banco%20de%20imagens/abaco.png)

Cada coluna representa:
- Unidade
- Dezenas
- Centenas

→ **Exemplo:**
Uma bolinha na segunda coluna vale 10, não 1

→ **Lembrete:**
```
📌 O ábaco é um antecessor dos computadores.
```

---

## 🔹**Pascaline (Blaise Pascal - 1642)**
→ **Explicação simples:**
Foi uma das primeiras máquinas mecânicas de calcular.
Funcionava com rodas dentadas:
- Cada roda era uma casa decimal
- Quando passava de 9, empurrava a próxima

![](../../Banco%20de%20imagens/Pasc.png)

→ **Exemplo:**
Igual quando você soma 9 + 1 e "vai 1" para a próxima casa.

→ **Lembrete:**
```
📌 Pascal criou uma máquina para somar e subtrair.
```

---

# 📌 **Geração de Computadores**
## 🖥️ **Primeira Geração (1945–1955) – Válvulas** 
→ **Explicação simples:**
Eram computadores gigantes, lentos e gastavam muita energia.
Características:
- Usavam válvulas (tipo lâmpadas)
- Ocupavam salas inteiras
- Não tinha um sistema operacional
- Programados manualmente

→ **Exemplo famoso:**
- **ENIAC** (30 toneladas, 17 mil válvulas)

![](../../Banco%20de%20imagens/ENIAC.png)

→ **Lembrete:**
```
📌 Primeira geração = Válvulas, gigantes e sem SO.
```

---

## 🖥️ Segunda Geração (1955–1965) – Transistores
→ **Explicação simples:**
As válvulas foram substituídas por transistores, que são:
- Menores
- Mais rápidos
- Gastam menos energia

Surgiu o sistema em lote (batch):
- Os trabalhos eram colocados em fila
- O computador executava um por um

→ **Exemplo:**
Como uma fila de impressão: um trabalho só começa quando o outro termina.

→ **Lembrete:**
```
📌 Segunda geração: transistores e processamentos em lote.
```

---

## 🖥️ **Terceira Geração (1965–1980) – Circuitos Integrados**
→ **Explicação simples:**  
Muitos transistores foram colocados dentro de um único chip.
Grande avanço:
- **Multiprogramação**

Isso significa:
- Enquanto um programa espera o disco
- Outro pode usar o processador

→ **Exemplo:**  
Como estudar enquanto a roupa lava.

→ **Lembrete:**
```
📌 Terceira geração = circuitos integrados e multiprogramação.
```

---

## 🖥️ **Quarta Geração (1980–Atual) – Computadores Pessoais**
→ **Explicação simples:**  
Surgiram os PCs como conhecemos hoje.
Características:
- Microprocessadores
- Computadores menores e baratos
- Sistemas como:
    - MS-DOS
    - UNIX
    - Macintosh

→ **Exemplo:**  
Computadores domésticos e notebooks.

→ **Lembrete:**  
```
📌 Quarta geração = PCs e sistemas modernos.
```


![](../../Banco%20de%20imagens/Evolut.png)

---

## ✅ Resumo Geral
O [[#📌 O que é um Sistema Operacional|Sistema operacional]] é o principal programa do computador e atua como intermediário entre os aplicativos e o hardware. Ele gerencia recursos como memória, processador, disco e dispositivos de entrada e saída. [[#🔹**Hardware**|Hardware]] são as partes físicas do computador, enquanto [[#🔹**Software**|software]] são os programas. O conceito de [[#📌 Abstração|abstração]] permite que o usuário utilize o computador sem entender seu funcionamento interno. Ao longo da história, os computadores evoluíram em gerações: a primeira usava **válvulas e não tinha sistema operacional**, a segunda trouxe **transistores e sistema em lote**, a terceira **introduziu circuitos integrados e multiprogramação**, e a quarta geração marcou o **surgimento dos computadores pessoais e dos sistemas modernos como UNIX e MS-DOS**. Essa evolução tornou os computadores menores, mais rápidos e acessíveis.