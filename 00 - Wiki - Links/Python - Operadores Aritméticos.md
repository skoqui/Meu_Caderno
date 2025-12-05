---
tags:
  - python
  - python3
  - python3/operadores
---
---
# 🔹Operadores Aritméticos

| Operador | Significado     | Exemplo (`a=10, b=3`) | Resultado  |
| -------- | --------------- | --------------------- | ---------- |
| `+`      | Adição          | `a + b`               | `13`       |
| `-`      | Subtração       | `a - b`               | `7`        |
| `*`      | Multiplicação   | `a * b`               | `30`       |
| `/`      | Divisão (float) | `a / b`               | `3.333...` |
| `//`     | Divisão inteira | `a // b`              | `3`        |
| `%`      | Módulo (resto)  | `a % b`               | `1`        |
| `**`     | Exponenciação   | `a ** b`              | `1000`     |


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