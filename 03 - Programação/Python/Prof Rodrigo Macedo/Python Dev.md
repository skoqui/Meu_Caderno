---
Curso: Python 3
Professor: Rodrigo Macedo
Plataforma:
  - Udemy
Data início: 2025-10-20
Data término:
tags:
  - "#pentest"
  - linux
  - python
  - programacao
Status: false
---
---
# Anotações do curso para não esquecer

### Verificador de palíndromo

```python
# Ex3:

texto1 = "arara"
texto2 = "python"

# Remove espaço e deixa nome em minúsculo

texto1_format = texto1.lower().replace(" ", "")
texto2_format = texto2.lower().replace(" ", "")

# Verifica se o texto original é igual ao seu inverso

palindromo1 = texto1_format == texto1[::-1]
palindromo2 = texto2_format == texto1[::-1]  

print(palindromo1)
print(palindromo2)
```


### Texto Invertido

```python
# Ex2:
texto = "Python é muito interessante"

palavras = texto.split()
textoInvertido = " ".join(palavras[::-1])

print(textoInvertido)
```


----

## O que é **@classmethod**?

Um **classmethod** é um método que pertence **à classe**, e não a um objeto específico.
Ele:
- **Não usa `self`** (porque `self` representa uma instância, um objeto específico)
- **Usa `cls`**, que representa a **classe inteira**. 

# Diferença entre `self` e `cls`

|Palavra|Representa o quê?|Usado onde?|
|---|---|---|
|**self**|Um objeto específico|métodos normais|
|**cls**|A classe inteira|métodos com `@classmethod`|


----


# 📌 **Python – Resumos Teóricos Essenciais**
### [[Regex]] (Regular Expressions)
**Para que serve?**  
Encontrar, validar e extrair padrões em strings — muito usado em OSINT, parsing de logs, scraping, análise forense.

**Principais metacaracteres:**

|Símbolo|Significado|Exemplo|
|---|---|---|
|`.`|qualquer caractere|`a.b` → “aab”, “acb”|
|`^`|início da string|`^GET`|
|`$`|fim da string|`txt$`|
|`[]`|conjunto|`[a-zA-Z]`|
|`()`|grupo|`(admin|
|`*`|0+ vezes|`a*`|
|`+`|1+ vezes|`a+`|
|`?`|0 ou 1 vez|`https?`|
|`{n,m}`|repetição específica|`\d{3,5}`|
|`\d`|dígito|`\d+`|
|`\w`|palavra|`\w+`|
|`\s`|espaço|`\s+`|

**Exemplos úteis em SI:**

- Emails: `[\w.-]+@[\w.-]+\.\w+`
- IPv4: `\b\d{1,3}(\.\d{1,3}){3}\b`
- Hash MD5: `^[a-fA-F0-9]{32}$`

## [[Lambda]] Functions