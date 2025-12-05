---
tags:
  - https
  - web
  - protocolo
---
---

# HTTPS (HyperText Transfer Protocol Secure)
→ **O que é?**  
HTTPS (HyperText Transfer Protocol Secure) é a versão **segura** do [[HTTP]].  
Ele usa criptografia para proteger a comunicação entre o navegador e o servidor.

### Como funciona
1. O navegador conecta ao servidor na porta **443**.
2. O servidor apresenta um **[[Certificate Transparency|certificado digital]] ([[SSL]]/[[TLS]])**.
3. O navegador verifica se o certificado é confiável.
4. A comunicação é criptografada → só cliente e servidor entendem os dados trocados.

### Por que é importante

- **[[Tríade Cibersegurança|Confidencialidade]]** → dados (senhas, cartões, etc.) não ficam expostos.
- **[[Tríade Cibersegurança|Integridade]]** → garante que as informações não foram alteradas no caminho.
- **[[Tríade Cibersegurança|Autenticidade]]** → o usuário sabe que está falando com o site verdadeiro, não com um impostor.

### Pontos de atenção em segurança

- Certificados inválidos ou expirados → alertas no navegador.
- Ataques de downgrade (forçando cair para HTTP inseguro).
- Implementação incorreta de TLS pode gerar brechas.