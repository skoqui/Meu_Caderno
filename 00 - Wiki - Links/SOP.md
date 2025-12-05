---
tags:
  - SOP
  - xss
  - web
  - vulnerabilidade
---

---
# Same-Origin Policy (SOP)

A **Same-Origin Policy** é uma regra de segurança dos navegadores que define quando um site pode acessar dados de outro.

### O que significa "mesma origem"?
Para que duas páginas sejam consideradas da **mesma origem**, elas precisam ter os **três elementos iguais**:
1. **Protocolo** (http / https)  
2. **Host** (domínio ou IP)  
3. **Porta** (80, 443, 3000 etc.)

Se qualquer um desses for diferente, a origem é considerada distinta.

### Exemplos:
- `https://site.com` e `https://site.com` → ✅ Mesma origem  
- `http://site.com` e `https://site.com` → ❌ Protocolo diferente  
- `https://site.com` e `https://blog.site.com` → ❌ Host diferente  
- `https://site.com:443` e `https://site.com:8443` → ❌ Porta diferente  

### Por que existe?
- Impede que uma página maliciosa leia dados sensíveis de outra página carregada no navegador, como ataques [[XSS]] (cookies, tokens, DOM).  
- É a base para a segurança da web moderna.

🔹 **Resumo:** A SOP só permite acesso se **protocolo, host e porta** forem **iguais**, protegendo os usuários de ataques entre sites.
