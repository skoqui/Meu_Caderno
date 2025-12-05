---
tags:
  - ssl
  - web
  - criptografia
---
---

# SSL (Secure Sockets Layer)
→ **O que é?**  
SSL (Secure Sockets Layer) é um **protocolo de criptografia** criado para proteger a comunicação entre cliente e servidor.  

Hoje em dia, a versão mais usada é o **[[TLS|TLS (Transport Layer Security)]]**, que substituiu o SSL, mas o nome "SSL" ainda é popular.

### Como funciona
1. Cliente acessa o servidor **(porta 443)**.
2. O servidor envia seu **[[Certificate Transparency|certificado digital]]**.
3. O cliente verifica se o certificado é confiável.
4. Ambos negociam uma **chave de sessão** para criptografar os dados.
5. A comunicação ocorre de forma segura.

### Por que é importante

- Protege contra espionagem ([[sniffing]]).
- Evita alterações não autorizadas nos dados.
- Ajuda a garantir que o site é realmente quem diz ser.

### Limitações

- Versões antigas (SSLv2, SSLv3) são inseguras.
- Ataques como **POODLE** e **BEAST** exploraram falhas do SSL.
- Hoje, a prática correta é usar apenas **TLS 1.2 ou TLS 1.3**.