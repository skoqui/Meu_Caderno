---
tags:
  - python
  - python3
  - python3/list
---
---
# 📘 Python – Listas

↳ Uma **lista** é uma coleção ordenada e [[Python - Mutáveis e Imutáveis|mutável]] de elementos.  
Exemplo:

```python
minha_lista = [10, 20, 30, 40]
```


---
## 🔹 Métodos e funções úteis

|Método/Função|Descrição|Exemplo|
|---|---|---|
|`len(lista)`|Retorna o número de elementos|`len(minha_lista) # 4`|
|`append(x)`|Adiciona um elemento ao final|`minha_lista.append(50)`|
|`insert(i, x)`|Insere em uma posição específica|`minha_lista.insert(1, 15)`|
|`extend(iterável)`|Adiciona vários elementos|`minha_lista.extend([60,70])`|
|`remove(x)`|Remove a primeira ocorrência de x|`minha_lista.remove(20)`|
|`pop([i])`|Remove e retorna elemento (último por padrão)|`minha_lista.pop()`|
|`clear()`|Remove todos os itens|`minha_lista.clear()`|
|`index(x)`|Retorna a posição da primeira ocorrência de x|`minha_lista.index(30)`|
|`count(x)`|Conta quantas vezes x aparece|`[1,1,2].count(1)` → `2`|
|`sort()`|Ordena a lista (in place)|`minha_lista.sort()`|
|`sorted(lista)`|Retorna nova lista ordenada|`sorted([3,1,2])` → `[1,2,3]`|
|`reverse()`|Inverte a ordem dos elementos|`minha_lista.reverse()`|
|`copy()`|Cria cópia rasa|`nova = minha_lista.copy()`|


---
## 🔹 Exemplos práticos

```python
lista = [5, 2, 9]

lista.append(7)      # [5, 2, 9, 7]
lista.insert(1, 3)   # [5, 3, 2, 9, 7]
lista.remove(2)      # [5, 3, 9, 7]
lista.sort()         # [3, 5, 7, 9]
print(lista.pop())   # 9
print(lista)         # [3, 5, 7]
```
