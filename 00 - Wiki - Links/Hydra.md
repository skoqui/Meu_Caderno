---
tags:
  - hydra
  - linux
  - hacking
  - pentest
---
---
# 🔐 Hydra

## O que é?
O **Hydra** é uma ferramenta de **[[Bruteforce|Brute Force]]** usada para testar senhas em **protocolos de rede**.  
Ele tenta todas as combinações ou usa listas de senhas para acessar serviços como [[SSH]], [[FTP]], [[HTTP]], Telnet, entre outros.

---

## Características
- Suporta **muitos protocolos de rede**  
- Permite **ataques paralelos** para acelerar o processo  
- Pode usar **dicionários de senhas**  

---

## Exemplo de uso
```bash
hydra -l admin -P senhas.txt ssh://192.168.0.10
```
- `-l` → usuário
- `-P` → lista de senhas
- `ssh://` → protocolo alvo

