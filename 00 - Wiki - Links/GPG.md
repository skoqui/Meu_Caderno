---
tags:
  - gpg
  - criptografia
---
---

# GPG (GNU Privacy Guard)
O **GPG** é a ferramenta mais comum para [[Criptografia|criptografia]] de arquivos/textos.

### **Instalar**
```bash
sudo apt update && sudo apt install gnupg -y
```

### Criptografar um arquivo:
```bash
gpg -c arquivo.txt
```
- Ele vai pedir uma senha.
- Vai gerar `arquivo.txt.gpg`.

### Descriptografar:
```bash
gpg -d arquivo.txt.gpg > arquivo.txt
```

