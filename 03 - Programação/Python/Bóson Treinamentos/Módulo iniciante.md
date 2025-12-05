---
Curso: Python 3
Professor: Fábio dos Reis
Plataforma:
  - Youtube
Data início: 2025-08-22
Data término:
tags:
  - "#pentest"
  - linux
  - python
  - python3
Status: false
---
---
# 1 - Variáveis, Tipos de Dados e o comando Type
## 🔹Variáveis

- São **"caixinhas" na memória** que guardam valores.
- Em Python, não precisa declarar o tipo antes, ele reconhece automaticamente.

```python
nome = "Luis"
idade = 30
altura = 1.83
```


---

## 🔹Tipos de Dados mais usados

- **int** → números inteiros (`10`, `-5`, `0`)
- **float** → números decimais (`3.14`, `2.0`)
- **str** → textos, cadeias de caracteres (`"Olá"`, `'Python'`)
- **bool** → valores lógicos (`True`, `False`)
- **list** → lista de valores (`[1, 2, 3]`)
- **tuple** → tupla, imutável (`(1, 2, 3)`)
- **dict** → dicionário (pares chave: valor) (`{"nome": "Luis", "idade": 30}`)


---

## 🔹O comando `type`

- Serve para **descobrir o tipo de uma variável**:

```python
x = 10
print(type(x))   # <class 'int'>

y = 3.14
print(type(y))   # <class 'float'>

z = "Python"
print(type(z))   # <class 'str'>
```


---

👉 Resumindo:

- Variáveis guardam dados.
- Tipos de dados definem **o que está guardado**.
- `type()` mostra **qual tipo** está sendo usado.


---

# 2 - Importação de Módulos em Python
## 🔹O que são módulos?

- São **arquivos prontos em Python** (ou criados por você) que contêm funções, classes e variáveis.
- Usamos módulos para **não precisar reescrever código**.

Exemplo: o módulo `math` já traz funções matemáticas prontas.

---

## 🔹Como importar

1. **Importar tudo do módulo**
```python
import math
print(math.sqrt(16))  # Raiz quadrada → 4.0
```

2. **Dar um apelido (alias)**
```python
import math as m
print(m.pi)  # 3.14159...
```

3. **Importar só o que precisa**
```python
from math import sqrt, pi
print(sqrt(25))  # 5.0
print(pi)        # 3.14159...
```

4. **Importar tudo (não recomendado)**
```python
from math import *
print(cos(0))  # 1.0
```


----

## 🔹Criar e importar seu próprio módulo

Suponha que você fez um arquivo chamado **meu_modulo.py**:
```python
a = "banana"
b = "laranja"
c = "maça"
```

No seu programa principal:
```python
import meu_modulo

print(f"Eu gosto de comer {meu_modulo.b}")   # Eu gosto de comer laranja
```


---

👉 Resumindo:

- **`import`** → traz módulos inteiros.
- **`from ... import ...`** → traz só partes específicas.
- Você pode **criar seus próprios módulos** e reutilizar em outros códigos.


---
# 3 - Operadores e Expressões Aritméticas

## 🔹 [[Python - Operadores Aritméticos|Operadores Aritiméticos]]

|Operador|Significado|Exemplo (`a=10, b=3`)|Resultado|
|---|---|---|---|
|`+`|Adição|`a + b`|`13`|
|`-`|Subtração|`a - b`|`7`|
|`*`|Multiplicação|`a * b`|`30`|
|`/`|Divisão (float)|`a / b`|`3.333...`|
|`//`|Divisão inteira|`a // b`|`3`|
|`%`|Módulo (resto)|`a % b`|`1`|
|`**`|Exponenciação|`a ** b`|`1000`|


---

## 🔹 Expressões Aritméticas

- São **combinações de variáveis, números e operadores**.
- Respeitam a ordem de precedência matemática:

1. **Parênteses** `()`
2. **Exponenciação** `**`
3. **Multiplicação, Divisão, Módulo, Divisão inteira** (`*`, `/`, `%`, `//`)
4. **Adição e Subtração** (`+`, `-`)

Exemplo:
```python
resultado = (2 + 3) * 4 ** 2
print(resultado)  # 80
```


---

## 🔹 Operadores de Atribuição (atalhos)

|Operador|Significado|Exemplo (`x=10`)|Resultado final|
|---|---|---|---|
|`=`|Atribuição normal|`x = 5`|`5`|
|`+=`|Soma e atribui|`x += 3`|`13`|
|`-=`|Subtrai e atribui|`x -= 2`|`8`|
|`*=`|Multiplica e atribui|`x *= 2`|`20`|
|`/=`|Divide e atribui|`x /= 2`|`5.0`|


----

👉 **Resumo rápido**:

- Operadores fazem contas.
- Expressões juntam números, variáveis e operadores.
- Python segue a **ordem matemática tradicional**.
- Operadores de atribuição deixam o código mais curto.


---

# 4 - Funções Matemáticas básicas (sem `math`)

Python já tem algumas funções matemáticas **embutidas**: 
```python
abs(-10)     # 10   → valor absoluto
pow(2, 3)    # 8    → potência (mesmo que 2**3)
round(3.6)   # 4    → arredonda
max(1, 5, 9) # 9    → maior valor
min(1, 5, 9) # 1    → menor valor
```


---

## 🔹 O módulo `math`

Para cálculos mais avançados:
```python
import math
```

### 📌 Constantes úteis
```python
math.pi      # 3.14159...
math.e       # 2.71828...
```

###  📌 Funções comuns:

|Função|Exemplo|Resultado|
|---|---|---|
|`math.sqrt(x)`|`math.sqrt(16)`|`4.0`|
|`math.ceil(x)`|`math.ceil(4.2)`|`5`|
|`math.floor(x)`|`math.floor(4.9)`|`4`|
|`math.trunc(x)`|`math.trunc(4.9)`|`4`|
|`math.factorial(x)`|`math.factorial(5)`|`120`|
|`math.pow(x, y)`|`math.pow(2, 3)`|`8.0`|
|`math.log(x)`|`math.log(10)`|logₑ(10)|
|`math.log10(x)`|`math.log10(100)`|`2.0`|

### 📌 Funções trigonométricas

```python
math.sin(math.pi/2)   # 1.0
math.cos(0)           # 1.0
math.tan(math.pi/4)   # 1.0
```


---

## 🔹 Dica prática

```python
import math

raio = 5
area = math.pi * math.pow(raio, 2)
print(area)  # 78.5398...
```


---
👉 **Resumo rápido**:

- Python já tem funções simples (`abs`, `round`, `max`...).
- O módulo **`math`** adiciona funções avançadas (raiz, log, trigonometria, arredondamento etc.).
- Útil em cálculos científicos, estatísticos e engenharia.