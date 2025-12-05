---
tags:
---
---

# DOM XSS (Cross-Site Scripting no DOM)
## O que é
- Diferente do **[[Reflect XSS|Reflect]]** e do **[[Stored XSS|Stored]]**, aqui o ataque não depende da resposta do servidor.
- O problema está **no próprio código JavaScript do cliente (front-end)**.
- O [[navegador]] manipula o **DOM** (Document Object Model) de forma insegura, usando valores vindos da URL, fragmentos (`#`), ou outros dados controlados pelo usuário.

## Estrutura do Ataque

### 1. **Request com payload malicioso**
O atacante cria um link com código injetado:
```html
http://www.exemplo.com/#<script>alert('DOM XSS')</script>
```

### 2. **Código vulnerável no front-end**
Exemplo em JavaScript da página:
```html
<html>
<body>
  <div id="saida"></div>
  <script>
    // pega o valor do fragmento da URL (location.hash)
    var entrada = location.hash.substring(1);
    // insere diretamente no DOM
    document.getElementById("saida").innerHTML = entrada;
  </script>
</body>
</html>
```

### 3. **Exploração**
- O navegador carrega a página.
- O script lê `location.hash`.
- Insere o conteúdo sem validação no `innerHTML`.
- O `<script>` injetado **executa no navegador da vítima**.

## O que acontece
- A vulnerabilidade está **no JavaScript do cliente**.
- Não precisa passar pelo servidor.
- Permite o mesmo impacto de outros XSS (roubo de cookies, phishing, redirecionamento etc.).

## Como prevenir
1. Evitar usar `innerHTML`, `document.write`, `eval()` com dados do usuário.
2. Usar métodos seguros como `textContent` ou `createTextNode`.
3. Sanitizar os dados vindos da URL antes de usar.
4. Implementar **CSP (Content Security Policy)**.