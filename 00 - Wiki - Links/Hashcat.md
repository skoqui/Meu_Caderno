---
tags:
  - hashcat
  - pentest
  - hacking
  - bruteforce
---
---
# 🔐 Hashcat

## O que é?
O **Hashcat** é uma ferramenta avançada de **quebra de senhas via hashes**, usando **GPU** para acelerar ataques de força bruta e dicionário.  
Ele é mais rápido que John the Ripper em grandes volumes de hashes.

---

## Características
- Suporte a **diversos algoritmos de hash**  
- Usa **GPU ou CPU** para acelerar ataques  
- Permite ataques **[[Bruteforce|brute forces]], dicionário e combinados**  

---

## Exemplo de uso
```bash
hashcat -m 0 hashes.txt wordlist.txt
```
- `-m 0` → tipo de hash (MD5)
- `hashes.txt` → arquivo de hashes
- `wordlist.txt` → lista de senhas