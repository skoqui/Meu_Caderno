---
tags:
  - request
  - https
  - web
---
---

# Request (Cliente → Servidor)
É o que o navegador envia para pedir algo ao servidor.

Exemplo de um `GET` para acessar uma página:
```http
GET /index.html HTTP/1.1
Host: www.exemplo.com
User-Agent: Mozilla/5.0
Accept: text/html
Accept-Language: pt-BR
Connection: keep-alive
```

Explicação rápida:
- `GET /index.html HTTP/1.1` → método, recurso e versão do protocolo
- `Host` → site que você quer acessar
- `User-Agent` → info do navegador
- `Accept` → tipo de conteúdo aceito (HTML, JSON, etc.)
