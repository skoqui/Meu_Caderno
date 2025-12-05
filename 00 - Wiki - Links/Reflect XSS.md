---
tags:
  - xss/reflect
  - web
---
---

# Reflect XSS (Cross-Site Scripting Refletido)
## O que é

- É um tipo de **vulnerabilidade [[XSS]]**.
- Acontece quando **dados enviados pelo usuário** (ex: em um campo de busca, formulário ou URL) são **refletidos imediatamente na resposta do servidor** **sem validação** ou sanitização.
- O código malicioso (JavaScript) é executado **na hora**, assim que a vítima abre o link ou envia o dado.

## Estrutura do Ataque

### 1. Request da vítima (com payload malicioso)
```http
GET /search?q=<script>alert('XSS')</script> HTTP/1.1
Host: www.exemplo.com

```

### 2. **Response do servidor (sem sanitização)**
```http
HTTP/1.1 200 OK
Content-Type: text/html; charset=UTF-8

<html>
<head><title>Busca</title></head>
<body>
  <h2>Resultados para: <script>alert('XSS')</script></h2>
</body>
</html>

```
- O servidor apenas **refletiu** o que foi enviado, sem tratar.

## O que acontece
- O navegador interpreta o `<script>` como código real.
- O JavaScript roda na **máquina do usuário** (não no servidor).
- Pode roubar cookies, tokens de sessão, redirecionar, etc.

## Como prevenir
1. **Escapar / sanitizar** a entrada do usuário antes de exibir.
2. Usar **CSP (Content Security Policy)** para limitar scripts.
3. **Validar** o que o usuário pode enviar (whitelist).