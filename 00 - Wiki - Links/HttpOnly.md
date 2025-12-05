---
tags:
  - xss
  - web
  - segurançadainformaçao
  - httponly
---
---

# HttpOnly 
É uma **flag de segurança** que pode ser aplicada em [[Cookies|cookies]] pelo servidor.

Exemplo de cookie **sem proteção**:
```css
Set-Cookie: sessionid=abc123;
```

Exemplo de cookie **com HttpOnly**:
```css
Set-Cookie: sessionid=abc123; HttpOnly;
```

### O que muda?
- Comum: o cookie pode ser acessado via **JavaScript** (`document.cookie`).
- `HttpOnly`: o cookie **só é enviado pelo navegador ao servidor** em cada requisição.  

➝ Isso significa que mesmo se houver XSS, o atacante **não consegue roubar o cookie via JS**.

### Exemplo prático:
**Sem HttpOnly:**
```html
<script>
  alert(document.cookie);  // mostra o cookie
</script>
```

**Com HttpOnly:**
```html
<script>
  alert(document.cookie);  // vazio, porque o navegador bloqueia
</script>
```

### Resumindo:
- **HttpOnly** protege os cookies contra roubo via **JavaScript**.
- Não impede todo XSS (o atacante ainda pode modificar a página, redirecionar, etc.).
- É uma defesa importante, mas precisa ser usada junto com outras ([[CSP]], validação de entrada, etc.).