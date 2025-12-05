---
tags:
  - openssl
  - criptografia
---
---

# OpenSSL
O **OpenSSL** também é muito usado para criptografia [[Criptografia|simétrica]] e [[Criptografia|assimétrica]].

### Criptografia simétrica (com senha):
```bash
openssl enc -aes-256-cbc -salt -in arquivo.txt -out arquivo.enc
```

### Descriptografia:
```bash
openssl enc -d -aes-256-cbc -in arquivo.enc -out arquivo.txt
```

