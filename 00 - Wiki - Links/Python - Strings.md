---
tags:
  - python
  - python3
  - python3/strings
---
---
# 📝 Strings em Python

👉 Strings são **sequências de caracteres** (texto) delimitadas por aspas simples `'`, duplas `"` ou até triplas `'''` / `"""`.  
👉 **São imutáveis** → não dá para mudar uma string já criada, só criar outra.

---
## 🔹 Criando Strings

```python
s1 = "Olá"
s2 = 'Mundo'
s3 = """Texto
com múltiplas
linhas"""
```


---
## 🔹 Acessando caracteres

```python
texto = "Python"
print(texto[0])   # P (primeiro caractere)
print(texto[-1])  # n (último caractere)
```


---
## 🔹 Tamanho da String

```python
texto = "Segurança"
print(len(texto))  # 9
```


---
## 🔹 Fatiamento (Slicing)

```python
texto = "Python"
print(texto[0:3])   # Pyt (do índice 0 até 2)
print(texto[2:])    # thon (do 2 até o final)
print(texto[:4])    # Pyth (do início até o índice 3)
print(texto[::-1])  # nohytP (string invertida)
```


---
## 🔹 Métodos mais usados

```python
txt = "  segurança da informação  "

print(txt.upper())      # MAIÚSCULO
print(txt.lower())      # minúsculo
print(txt.title())      # Primeiras Letras Maiúsculas
print(txt.strip())      # remove espaços extras
print(txt.replace("informação", "dados"))  # troca palavras
print(txt.split())      # ['segurança', 'da', 'informação']
print("-".join(["segurança", "dados"]))    # segurança-dados
print(txt.startswith("  seg"))  # True (verifica começo)
print(txt.endswith("ção  "))    # True (verifica final)
```


---
## 🔹 Verificações

```python
print("123".isdigit())   # True (apenas números)
print("abc".isalpha())   # True (apenas letras)
print("abc123".isalnum()) # True (letras e números)
print(" ".isspace())     # True (apenas espaço)
```


----
## 🔹 Formatação de Strings

Usando `f-string` (mais moderno):
```python
nome = "Luis"
idade = 30
print(f"Meu nome é {nome} e tenho {idade} anos.")
```

Usando `.format()`:
```python
print("Meu nome é {} e tenho {} anos.".format("Luis", 30))
```


----
## ⚡ Resumão para não esquecer:

- Strings são **[[Python - Mutáveis e Imutáveis#🔹 Exemplos de Tipos **Imutáveis**|imutáveis]]** → não alteramos, só criamos novas.
- Use `[]` para acessar e **fatiar**.
- Use `.upper()`, `.lower()`, `.strip()` etc. para manipulação.
- Use `f"{}"` para **formatação mais prática**.