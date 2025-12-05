---
tags:
  - python
  - python3
  - python3/dict
---
---
# 📘 Python – Dicionários

Um **dicionário** é uma coleção de pares **chave:valor** em Python.  
Exemplo:

```python
meu_dict = {"nome": "Luis", "idade": 30, "cidade": "São Paulo"}
```

---
## 🔹 Métodos e funções úteis

| Método/Função              | Descrição                                                  | Exemplo                                                      |
| -------------------------- | ---------------------------------------------------------- | ------------------------------------------------------------ |
| `len(d)`                   | Retorna o número de itens do dicionário                    | `len(meu_dict) # 3`                                          |
| `keys()`                   | Retorna todas as **chaves**                                | `meu_dict.keys()` → `dict_keys(['nome','idade','cidade'])`   |
| `values()`                 | Retorna todos os **valores**                               | `meu_dict.values()` → `dict_values(['Luis',30,'São Paulo'])` |
| `items()`                  | Retorna pares (chave, valor)                               | `meu_dict.items()` → `[('nome','Luis'),('idade',30),...]`    |
| `get(chave, padrao)`       | Retorna o valor da chave ou um valor padrão se não existir | `meu_dict.get("altura", "não existe")`                       |
| `setdefault(chave, valor)` | Se a chave não existir, adiciona com valor definido        | `meu_dict.setdefault("altura", 1.83)`                        |
| `copy()`                   | Cria uma cópia rasa do dicionário                          | `novo = meu_dict.copy()`                                     |
| `pop(chave)`               | Remove a chave e retorna o valor dela                      | `meu_dict.pop("idade")`                                      |
| `popitem()`                | Remove o último item inserido (Python 3.7+)                | `meu_dict.popitem()`                                         |
| `update(outro_dict)`       | Atualiza/adiciona pares chave:valor de outro dicionário    | `meu_dict.update({"idade":31,"estado":"SP"})`                |


---
## 🔹 Exemplos práticos

```python
# Criando um dicionário
usuario = {"nome": "Ana", "idade": 25}

# Acessando valores
print(usuario["nome"])       # Ana
print(usuario.get("email"))  # None

# Adicionando valor com setdefault
usuario.setdefault("cidade", "Rio de Janeiro")

# Atualizando
usuario.update({"idade": 26, "email": "ana@email.com"})

# Removendo valores
usuario.pop("email")
usuario.popitem()  # remove o último inserido

print(usuario)
```

📌 Saída final pode ser algo como:
```python
{'nome': 'Ana', 'idade': 26}
```


---
## 🔹 `len()`

↳ Retorna o número de elementos do dicionário.
```python
d = {"nome": "Ana", "idade": 25, "cidade": "SP"}
print(len(d))  # 3
```


---
## 🔹 `.keys()`

↳ Retorna todas as **chaves**.
```python
print(d.keys())  # dict_keys(['nome', 'idade', 'cidade'])
```


---
## 🔹 `.values()`

↳ Retorna todos os **valores**.
```python
print(d.values())  # dict_values(['Ana', 25, 'SP'])
```


---
## 🔹 `.items()`

↳ Retorna pares **(chave, valor)**.
```python
print(d.items())  
# dict_items([('nome', 'Ana'), ('idade', 25), ('cidade', 'SP')])
```


---
## 🔹 `.get()`

↳ Retorna o valor de uma chave, sem erro se não existir.
```python
print(d.get("nome"))     # Ana
print(d.get("altura"))   # None
print(d.get("altura", 1.70))  # 1.70 (valor padrão)
```


---
## 🔹 `.setdefault()`

↳ Adiciona uma chave com valor padrão se não existir.
```python
d.setdefault("pais", "Brasil")
print(d)  # {'nome': 'Ana', 'idade': 25, 'cidade': 'SP', 'pais': 'Brasil'}
```


---
## 🔹 `.copy()`

↳ Cria uma **cópia rasa** do dicionário.
```python
novo = d.copy()
print(novo)
```


---
## 🔹 `.pop()`

↳ Remove uma chave e retorna o valor.
```python
valor = d.pop("idade")
print(valor)  # 25
print(d)      # {'nome': 'Ana', 'cidade': 'SP', 'pais': 'Brasil'}
```


---
## 🔹 `.popitem()`

↳ Remove e retorna  **último item** inserido.
```python
chave, valor = d.popitem()
print(chave, valor)
```


---
## 🔹 `.update()`

↳ Atualiza valores ou adiciona novos pares.
```python
d.update({"idade": 30, "altura": 1.70})
print(d)  
# {'nome': 'Ana', 'cidade': 'SP', 'pais': 'Brasil', 'idade': 30, 'altura': 1.70}
```
