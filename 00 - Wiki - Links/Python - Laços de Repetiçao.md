---
tags:
  - python
  - python3
  - python3/while
  - python3/for
---
---
# 🔁 Estruturas de Repetição em Python

## 🔹 `for`

👉 Usado quando você **sabe a quantidade de repetições** ou quer **percorrer elementos** de uma coleção ([[Python - List|lista]], [[Python - Tuple|tupla]], [[Python - Dict|dicionários]], string…).

### Como funciona:

1. Ele pega **cada item** de uma sequência.
2. Executa o bloco de código para esse item.
3. Passa para o próximo item até acabar.

### Exemplos:

#### Percorrer uma lista:
```python
frutas = ["maçã", "banana", "uva"]

for fruta in frutas:
    print(fruta)

# Saída:
# maçã
# banana
# uva
```

#### Usando `range()` (intervalo de números):
```python
for i in range(5):  # de 0 até 4
    print(i)

# Saída: 0, 1, 2, 3, 4
```

#### Percorrer dicionário:
```python
pessoa = {"nome": "Ana", "idade": 25}

for chave, valor in pessoa.items():
    print(chave, "->", valor)

# nome -> Ana
# idade -> 25
```


---
## 🔹 `while`

👉 Usado quando você **não sabe quantas vezes vai repetir**, mas depende de uma **condição ser verdadeira**.

### Como funciona:

1. Verifica a condição.
2. Se for `True`, executa o bloco de código.
3. Volta e verifica de novo.
4. Para quando a condição virar `False`.

⚠️ **Atenção**: cuidado para não esquecer de alterar a condição, senão vira **loop infinito**.

### Exemplos:

#### Contando até 5:
```python
x = 1

while x <= 5:
    print(x)
    x += 1   # incrementa +1 a cada volta

# Saída: 1, 2, 3, 4, 5
```

#### Usando para validar entrada:
```python
senha = ""

while senha != "1234":
    senha = input("Digite a senha: ")

print("Acesso permitido!")
```


---
## 📌 Diferença Fundamental

- **`for`** → melhor quando você já sabe **quantas vezes** precisa repetir ou quer **percorrer uma coleção**.

- **`while`** → melhor quando depende de uma **condição** que pode variar (não sabe quantas vezes vai repetir).


---
## ⚡ Dicas para nunca esquecer:

- Pense: **"tenho um número de voltas certo?"** → use `for`.
- Pense: **"tenho que esperar uma condição mudar?"** → use `while`.