---
tags:
  - TLS
  - certificadosegurança
  - web
---
---
# TLS (*Transport Layer Security*) 

-> TLS é um protocolo de **segurança para comunicação em rede,** sucessor do SSL.

----
## Principais pontos

- **Porta padrão:** 443 (HTTPS), 465 (SMTP seguro), 993 (IMAP seguro), 995 (POP3)
- **Função:** **criptografar dados** entre cliente e servidor, garantindo confidencialidade, integridade e autenticidade.
- **Como funciona:** combina **criptografia simétrica** (para todos), **criptografia assimétrica** (para trocas de chaves) e **hashing** (para integridade)
- **Uso comum:** 
	- HTTPS (navegação segura na web)
	- E-mail seguro (SMTP, IMAP, POP3)
	- VPNs e protocolos de aplicação que exigem segurança


---
## Comandos básicos (teste / diagnóstico)

**Testar conexão TLS com `openssl`:**

```bash
openssl s_client -connect exemplo.com:443
```
- Mostra detalhes do certificado e handshake TLS.

**Verificar versão TLS suportada pelo servidor:**

```bash
openssl s_client -connect exemplo.com:443 -tls1_2
openssl s_client -connect exemplo.com:443 -tls1_3
```

---
**Dicas rápidas:**

- TLS é **transparente para o usuário**, mas essencial para segurança em qualquer serviço de rede.
- Sempre prefira **TLS 1.2 ou 1.3**; versões antigas (SSL, TLS 1.0/1.1) são inseguras.
- Frequentemente usado junto com protocolos de aplicação: HTTPS, FTPS, SMTPS, IMAPS.

