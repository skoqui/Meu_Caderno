---
Curso: Python 3
Professor: Luiz Otávio
Plataforma:
  - Udemy
Data início: ""
Data término: 
tags:
  - "#pentest"
  - linux
  - python
  - python3
Status: false
---
---
# 🐍 Introdução às funções (*def*)

Funções são trechos de códigos usados para replicar determinada ação ao longo do seu código. Eles podem receber valores para parâmetros (argumentos) e retornar um valor específico. *Por padrão, funções em python retornam None (nada)*.

`Estrutura da função`
```python
def função():
	print("Varias vezes esta frase")


função()
```

`Saída:`
```
Varias vezes esta frase
```


---
`Entrada:`
```python
def imprimir(a, b, c):
	print(a, b, c)


imprimir(1, 2, 3)
imprimir(4, 5, 6)
```

`Saída`
```
1 2 3
4 5 6
```


---
`Entrada:`
```python
def ola(nome= "Sem Nome"):
	print(f"Olá, {nome}!")


ola("Luis Eduardo")
ola("Victoria")
ola()
```

`Saída`
```
Olá, Luis Eduardo!
Olá, Victória!
Olá, Sem Nome!
```


---
# 📚 Métodos úteis nos dicionários python (dict)

↳ Para saber mais: [[Python - Dict]]

```ad-intro
title: Introdução
collapse: open

- ***len*** -> quantas chaves
- ***keys*** -> iterável com as chaves
- ***values*** -> iterável com os valores
- ***items*** -> iterável com as chaves e valores
- ***setdefault*** -> adiciona valor se a chave não existe
- ***copy*** -> retorna uma cópia rasa (shallow copy)
- ***get*** -> obtém uma chave
- ***pop*** -> apaga um item com a chave especificada (del)
- ***popitem*** -> apaga o último item adicionado
- ***update*** -> atualiza um dicionário com outro
```

----
## 1. len()

↳ Saiba mais em: [[Python - Dict#🔹 `len()`|len()]]

`Dicionário`
```python
pessoa = {
	'nome': 'Luis Eduardo'
	'sobrenome': 'Scoqui'
}
```

Para saber quantas chaves têm dentro do dicionário, usa-se o len. Ex.:

`Entrada`
```python
pessoa = {
	'nome': 'Luis Eduardo',
	'sobrenome1': 'Scoqui',
	'sobrenome2': 'Scoqui',
	'sobrenome3': 'Scoqui',		
}
print(len(pessoa))
```

`Saída`
```
4
```


> Obs: Se a chave repetira dor igual a anterior, ela sobrescreve-rá a anterior.


---
## 2. keys()

As keys são as **chaves** do determinado dicionario, como **chaves** de uma tabela. Ex.: Nome, CPF, RG, Endereço....

Os valores são as coisas escritas em cada **chave**. Ex.: Fulano, 23124328141-21, 231242342-0, Rua tal tal...

`Entrada`
```python
pessoa = {
	'nome': 'Luis Eduardo',
	'sobrenome': 'Scoqui',
}

print(pessoa.keys())
```

`Saída`
```
dict_keys(['nome', 'sobrenome'])
```

---
Uma outra alternativa seria converter para *tuple* ou *list*

```python
pessoa = {
	'nome': 'Luis Eduardo',
	'sobrenome': 'Scoqui',
}

print(tuple(pessoa.keys()))
```

`Saída`
```
('nome', 'sobrenome')
```

> Nesse caso ele converteu a saída em tuplas


----
## 3. .values(0)

![[Python - Dict#🔹 `.values()`]]




