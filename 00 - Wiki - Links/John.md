---
tags:
  - john
  - bruteforce
  - hacking
  - pentest
---
---
# 🔐 John the Ripper

## O que é?
O **John the Ripper** é uma ferramenta de **recuperação de senhas**, principalmente de **hashes armazenados em arquivos**.  
Ele tenta quebrar senhas usando [[Bruteforce|força bruta]], dicionário ou combinações híbridas.

---

## Características
- Suporta **muitos tipos de hash** (MD5, SHA, NTLM)  
- Permite **ataques de dicionário e força bruta**  
- Muito usado para **auditorias de senhas em sistemas locais**  

---

## Exemplo de uso
```bash
john --wordlist=senhas.txt arquivo_hash.txt
```
- `--wordlist` → lista de senhas
- `arquivo_hash.txt` → hashes a serem quebrados