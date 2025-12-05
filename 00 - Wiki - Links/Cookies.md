---
tags:
  - cookie
  - web
---
---

# Cookies
Cookies são pequenos arquivos de texto que o navegador guarda no computador do usuário a pedido de um site. Eles servem para lembrar informações entre uma visita e outra.

### Tipos principais:
1. **Cookies de sessão:** duram apenas enquanto o navegador está aberto, depois somem.
2. **Cookies persistentes:** ficam gravados mesmo depois de fechar o navegador, até vencerem ou serem apagados.
3. **Cookies de terceiros:** criados por domínios diferentes do site que você acessa (geralmente para anúncios e rastreamento).
4. **Cookies seguros:** só podem ser enviados em conexões HTTPS.

Exemplo de como um cookie pode parecer:
```rb
Set-Cookie: sessionId=abc123; HttpOnly; Secure; SameSite=Strict
```

### Usos comuns:
- Manter o usuário logado.
- Guardar preferências (tema escuro, idioma).
- Rastrear comportamento para marketing.

### Riscos:
- Se um cookie de sessão for roubado, alguém pode se passar pela vítima.
- Podem ser usados para rastrear navegação sem o usuário perceber.

### Boas práticas de segurança:
- Marcar cookies importantes como `HttpOnly` (não acessíveis por JavaScript).
- Usar `Secure` para só enviar via HTTPS.
- Definir `SameSite` para evitar ataques de Cross-Site Request Forgery (CSRF).
- Evitar guardar informações sensíveis diretamente no cookie.