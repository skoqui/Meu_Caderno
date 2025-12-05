---
tags:
  - xss
  - vulnerabilidade
  - hacking
---
---

# XSS (Cross-Site Scripting)
↳ É uma [[Vulnerabilidade]] que acontece quando uma aplicação web permite a inserção de códigos maliciosos (geralmente JavaScript) dentro de páginas web por outros usuários. Isso ocorre quando entradas do usuário não são devidamente validadas ou filtradas antes de serem exibidas.

Existem três tipos principais:
1. **Refletido ([[Reflect XSS]]):** o código malicioso vem de uma requisição do usuário (exemplo: link com script) e é refletido imediatamente na resposta da aplicação.
2. **Armazenado (Store XSS)**: o código malicioso é gravado no servidor (exemplo: comentário em um fórum) e aparece para todos que acessarem a página.
3. **DOM-based XSS:** a manipulação acontece diretamente no navegador, explorando o Document Object Model, sem necessidade de resposta do servidor.

Exemplo simples de XSS refletido:
```html
http://site.com/search?q=<script>alert('XSS')</script>
```

### Impactos possíveis:
- Roubo de cookies e sessões.
- Redirecionamento para sites maliciosos.
- Injeção de keyloggers ou phishing.

### Prevenção:
- Escapar caracteres especiais antes de exibir dados do usuário (`< > " ' &`).
- Usar funções seguras de template/renderização.
- Implementar Content Security Policy (CSP).
- Validar e sanitizar todas as entradas do usuário.

### Same-Origin
O **Same-Origin Policy ([[SOP]])** é uma regra de segurança dos navegadores que impede que scripts de um site acessem dados de outro domínio diferente.

### Relação entre os dois:
- O XSS quebra a confiança da **Same-Origin Policy**, pois o navegador considera que o script injetado veio do mesmo site legítimo.  
- Assim, o atacante pode **roubar cookies, tokens de sessão e dados sensíveis**, já que o navegador trata o script malicioso como confiável.


**Exemplo prático:**

Você está navegando nesta **página A**, e dentro dela existe uma "**janela**" (iframe) que força seu navegador a interagir com uma outra **página B**.

Página A - Algum site aleatório
Página B - Google dentro do site A

<iframe src="https://google.com" width="100%" height="500"></iframe>

