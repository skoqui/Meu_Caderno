---
tags:
  - csp
  - httponly
  - web
---
---

# **CSP (Content Security Policy)**.
**Content Security Policy** é uma **camada de defesa no navegador** que ajuda a bloquear ataques XSS e injeções de conteúdo.  
É configurada pelo **servidor** através de um cabeçalho [[HTTP]], por exemplo:
```css
Content-Security-Policy: default-src 'self';
```

## Como funciona?
O servidor diz ao [[navegador]] **de onde ele pode carregar recursos** (scripts, imagens, estilos, etc.).  
Se algo não estiver permitido na política, o navegador **bloqueia**.

## Exemplos práticos
### 1. Bloquear scripts externos
```css
Content-Security-Policy: script-src 'self';
```
- Só permite rodar **scripts do mesmo domínio**.

Se o atacante tentar injetar:
```html
<script src="http://site-do-hacker.com/xss.js"></script>
```
- O navegador não vai carregar.

### 2. Bloquear **inline scripts** (`<script>alert(1)</script>`)
```css
Content-Security-Policy: script-src 'self'; 
```
- Scripts escritos direto no HTML **não rodam**.

Ou seja, o famoso `alert(1)` de XSS seria bloqueado.

### 3. Permitir só scripts com **hash** ou **nonce**
```css
Content-Security-Policy: script-src 'self' 'nonce-abc123';
```
- Só scripts com o atributo certo rodam:
```html
<script nonce="abc123">
   console.log("Script permitido!");
</script>
```
- Qualquer script sem o **nonce** é bloqueado.

## Resumindo
- **[[HttpOnly]]** → protege cookies de serem lidos via JS.
- **CSP** → limita quais scripts podem rodar e de onde vêm.
- Usados juntos = grande defesa contra XSS.