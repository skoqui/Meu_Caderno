---
tags:
---
---

# Response (Servidor → Cliente)
É o que o servidor devolve como resposta.

Exemplo:
```http
HTTP/1.1 200 OK
Date: Mon, 01 Sep 2025 16:00:00 GMT
Server: Apache/2.4.57
Content-Type: text/html; charset=UTF-8
Content-Length: 1256

<!DOCTYPE html>
<html>
<head>
  <title>Página de Exemplo</title>
</head>
<body>
  <h1>Olá, mundo!</h1>
</body>
</html>
```

Explicação rápida:
- `HTTP/1.1 200 OK` → versão + código de status (200 = sucesso)
- `Date` → data e hora do servidor
- `Content-Type` → tipo do conteúdo (HTML, JSON, imagem, etc.)
- `Content-Length` → tamanho do corpo da resposta
-  Depois do cabeçalho vem o **conteúdo da página** (Body - [[HTML]]).