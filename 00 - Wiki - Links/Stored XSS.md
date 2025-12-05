---
tags:
---
---

# Stored XSS (Cross-Site Scripting Armazenado)
## O que é
- É um tipo de vulnerabilidade [[XSS]] em que o **código malicioso é armazenado no servidor** (ex.: em um banco de dados, comentário, post de fórum, perfil de usuário).
- Depois, **cada vez que alguém acessar a página**, o script é carregado junto com o conteúdo salvo.
- Diferente do **Reflect XSS**, aqui o ataque **fica persistente**.

## Estrutura do Ataque
### 1. **Request do atacante (inserindo payload)**
Exemplo: um comentário em um site vulnerável
```http
POST /comentarios HTTP/1.1
Host: www.exemplo.com
Content-Type: application/x-www-form-urlencoded
Content-Length: 50

comentario=<script>alert('XSS armazenado')</script>

```

### 2. **Servidor salva no banco de dados**
O servidor não sanitiza a entrada e grava o conteúdo **exatamente como foi enviado**.

### 3. **Response para outro usuário (carregando a página)**
Quando outra pessoa abre a página de comentários:
```http
HTTP/1.1 200 OK
Content-Type: text/html; charset=UTF-8

<html>
<body>
  <h2>Comentários:</h2>
  <p><script>alert('XSS armazenado')</script></p>
</body>
</html>

```
O código malicioso é executado no navegador de **todo usuário que visitar** a página.

## O que acontece
- Muito mais perigoso que o Reflect XSS, porque:
    - Pode atingir **vários usuários automaticamente**.
    - O ataque é **persistente**, não precisa de link malicioso.
    - Pode roubar cookies, modificar a página, injetar phishing etc.

## Como prevenir
1. **Sanitizar a entrada** antes de salvar no banco de dados.
2. **Escapar a saída** antes de exibir no [[HTML]].
3. Usar **CSP (Content Security Policy)**.
4. Definir corretamente o `Content-Type` e evitar interpretar HTML em campos de texto.