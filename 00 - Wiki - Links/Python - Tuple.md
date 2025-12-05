---
tags:
  - python
  - python3
  - python3/tuple
---
---
# 📘 Python – Tuplas

↳ Uma **tupla** é uma coleção ordenada **[[Python - Mutáveis e Imutáveis|imutável]]** de elementos.  
Exemplo:

```python
minha_tupla = (10, 20, 30)
```


---
## 🔹 Características

- São **imutáveis** → não é possível adicionar, remover ou alterar itens.
- Usadas quando os dados não devem mudar.
- Mais rápidas e leves que listas.


---
## 🔹 Métodos e funções úteis

|Método/Função|Descrição|Exemplo|
|---|---|---|
|`len(tupla)`|Retorna o número de elementos|`len(minha_tupla)`|
|`count(x)`|Conta quantas vezes x aparece|`(1,2,2,3).count(2)` → `2`|
|`index(x)`|Retorna a posição da primeira ocorrência|`(1,2,3).index(2)` → `1`|

---
## 🔹 Exemplos práticos

```python
tupla = (1, 2, 3, 4, 2)

print(tupla[0])       # 1
print(tupla.count(2)) # 2
print(tupla.index(3)) # 2

# Convertendo
lista = list(tupla)   # converte para lista (mutável)
nova_tupla = tuple(lista)  # volta para tupla
```

