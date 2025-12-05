---
tags:
  - csrf
  - xss
  - web
---
---

# 🛡️ CSRF (Cross-Site Request Forgery)

## 📘 O que é
**CSRF (Cross-Site Request Forgery)** significa **Falsificação de Solicitação entre Sites**.  
É um ataque onde o invasor **engana o navegador de uma vítima** para que ele envie **requisições maliciosas** a um site em que o usuário já está autenticado.

---

## 💡 Exemplo simples
Imagine que você está **logado no seu banco** (com sessão aberta).  
Enquanto isso, você visita um **site malicioso**.

Esse site tem um código oculto como:
```html
<img src="https://banco.com/transferir?para=123&valor=1000">
```

➡️ Quando seu navegador carrega essa imagem, ele **automaticamente envia a requisição** ao banco com **seus cookies de login**.  
O banco **acha que foi você quem fez a transferência**!

---

## ⚙️ Como o ataque funciona
1. O usuário faz login em um site legítimo (ex: banco.com).
2. O navegador guarda o **cookie de autenticação**.
3. O usuário visita um site malicioso.
4. Esse site faz uma **requisição disfarçada** (GET ou POST) para o site legítimo.
5. O servidor **não diferencia** a origem e executa a ação.

---

## 🚫 Como prevenir

### 1. Tokens CSRF
- Cada formulário ou requisição sensível deve conter um **token único e imprevisível**.
- O servidor **verifica** se o token enviado é válido.
- Exemplo:
```html
<input type="hidden" name="csrf_token" value="abc123xyz">
```
    Se o token não estiver presente ou for inválido → a requisição é rejeitada.

### 2. Verificar o cabeçalho **Origin** ou **Referer**
- O servidor checa se o pedido vem do mesmo domínio esperado.

### 3. Reautenticação para ações críticas
- Pedir a senha novamente ao alterar senha, fazer transferência, etc.

### 4. Cookies com flag **SameSite**
- Configurar o cookie para que **não seja enviado por sites externos**:
```
Set-Cookie: sessionid=abc123; SameSite=Strict
```

---

## 🧠 Diferença entre CSRF e XSS

|Ataque|O que faz|Onde o código roda|
|---|---|---|
|**CSRF**|Engana o navegador para enviar requisições|No navegador da vítima|
|**XSS**|Injeta código malicioso (JavaScript) no site|No site/alvo|

---

## 🧩 Resumo rápido
- 🎯 **Objetivo:** Forçar ações não autorizadas.
- 👤 **Depende:** De o usuário estar logado.
- 🧱 **Defesa:** Tokens, SameSite, verificação de origem.
- ⚠️ **Comum em:** Sites sem proteção em formulários POST.

---

## 🔍 Referências
- OWASP - Cross-Site Request Forgery (CSRF)
- MDN Web Docs - CSRF  
- PortSwigger - What is CSRF?


---

🧭 **Resumo final:**
> CSRF é um ataque de _engenharia do navegador_, onde o invasor usa a **confiança do site no usuário autenticado**.  
> A melhor defesa é usar **tokens únicos, validação de origem e cookies seguros**.