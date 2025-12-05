---
tags:
  - python
  - python3
  - python3/dict
---
---
# 📘 Python – Elementos

↳ No Python, os **objetos** podem ser **mutáveis** ou **imutáveis**.

- **Mutável** → pode ser alterado **depois de criado** (adicionar, remover, mudar valores).
- **Imutável** → **não pode ser alterado**; qualquer modificação gera um novo objeto.

---
## 🔹 Exemplos de Tipos **Imutáveis**

Esses **não podem ser modificados** após a criação:

- **int** → números inteiros
- **float** → números decimais
- **bool** → `True` ou `False`
- **str** → strings (textos)
- **tuple** → tuplas
- **frozenset** → versão imutável de um set

📍 Exemplo:
```python
x = 10
print(id(x))  # ID na memória

x = x + 1
print(id(x))  # ID mudou → novo objeto criado
```

---
## 🔹 Exemplos de Tipos **Mutáveis**
Esses **podem ser modificados** sem trocar de referência:

- **list** → listas
- **dict** → dicionários
- **set** → conjuntos
- **bytearray**  

📍 Exemplo:
```python
lista = [1, 2, 3]
print(id(lista))  

lista.append(4)
print(lista)   # [1, 2, 3, 4]
print(id(lista))  # ID é o mesmo → objeto modificado
```

---
## 🔹 Por que isso é importante?

- **Imutáveis** → seguros para usar como **chaves de dicionários** ou em **sets**.
- **Mutáveis** → permitem alterações diretas, mas cuidado com referências!

📍 Exemplo perigoso (mutável):
```python
a = [1, 2, 3]
b = a   # b aponta para o mesmo objeto

b.append(4)
print(a)  # [1, 2, 3, 4] → mudou também!
```

Para evitar:
```python
b = a.copy()
```

---
✅ **Resumo:**

- Use **imutáveis** quando precisar de segurança, consistência ou chaves únicas.
- Use **mutáveis** quando precisar alterar os dados dinamicamente.