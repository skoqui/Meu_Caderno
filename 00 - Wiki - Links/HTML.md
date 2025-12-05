---
tags:
  - html
  - web
---
---

## O que é HTML?
**HTML (HyperText Markup Language)** é a **linguagem de marcação** usada para estruturar páginas da web.  
Ele **não é uma linguagem de programação** (não tem lógica como `if/else`), mas sim uma forma de **organizar e descrever o conteúdo** (texto, imagens, links, formulários, etc.).

## Estrutura básica de um HTML
Um arquivo HTML sempre segue uma hierarquia de **tags** (marcadores).  
Exemplo de um arquivo bem simples:
```HTML
<!DOCTYPE html>
<html>
  <head>
    <title>Minha Página</title>
    <meta charset="UTF-8">
  </head>
  <body>
    <h1>Olá, mundo!</h1>
    <p>Esse é o meu primeiro site.</p>
    <a href="https://google.com">Ir para o Google</a>
  </body>
</html>
```

## Explicando as partes
- `<!DOCTYPE html>` → Diz ao [[Navegador|navegador]] que o documento é HTML5.
- `<html> ... </html>` → Tag raiz, tudo vai dentro dela.
- `<head> ... </head>` → Contém **informações sobre a página**, como título, meta tags, links de CSS/JS.
- `<title>` → Nome que aparece na aba do navegador.
- `<body> ... </body>` → Onde fica o **conteúdo visível** da página.

Dentro do `<body>` você pode usar várias tags:
- `<h1> ... </h1>` → Títulos (do maior `<h1>` até `<h6>`).
- `<p> ... </p>` → Parágrafos de texto.
- `<a href="..."> ... </a>` → Links.
- `<img src="imagem.jpg">` → Imagens.
- `<form> ... </form>` → Formulários (entrada de dados).

## Como o navegador interpreta
1. O navegador **lê o HTML de cima para baixo**.
2. Ele constrói o **DOM (Document Object Model)**, que é como uma árvore de elementos.
3. Depois, aplica estilos (CSS) e interações (JavaScript).


Resumindo:  
O HTML é a **estrutura** (esqueleto), o CSS é a **aparência** (roupa) e o JavaScript é o **comportamento** (cérebro) de uma página web.