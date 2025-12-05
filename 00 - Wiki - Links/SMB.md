---
tags:
  - smb
  - rede
  - exploit
  - cibersegurança
---
---
# 📂🔗 SMB (Server Message Block) 
## O que é?
- Protocolo de rede usado para **compartilhamento de arquivos, impressoras e recursos** entre computadores.  
- Muito comum em redes **Windows**.  

---

## Portas usadas
- **445/TCP:** usada pelas versões modernas (SMB direto sobre TCP/IP).  
- **137-139/TCP/UDP:** usado em versões antigas (NetBIOS sobre TCP/IP).  

---

## Funções
- Compartilhar arquivos em rede local.  
- Compartilhar impressoras.  
- Mapear unidades de rede (ex: `Z:\`).  
- Comunicação entre processos (IPC$).  

---
## Vulnerabilidades conhecidas ⚠️
- SMB é alvo frequente de ataques.  
- **EternalBlue (MS17-010):** exploit usado no ransomware **WannaCry** (2017).  
- Ataques de **pass-the-hash** exploram autenticação NTLM em SMB.  

---

## Exemplo prático
- Um administrador cria uma pasta compartilhada `\\servidor\documentos`.  
- Usuários autenticados conseguem acessar via explorador de arquivos.  

---

## Ferramentas comuns em pentest 🔍

- **smbclient** (Linux): conecta a shares SMB.  
```bash
smbclient -L //192.168.1.10/ -U usuario
```


- **enum4linux:** coleta informações de um servidor SMB.
- **Impacket (smbexec, psexec):** usado para exploração.


---

## Como proteger

- Desativar SMBv1 (muito inseguro).
- Usar apenas **SMBv3** com criptografia.
- Restringir acesso por firewall.
- Usar VPN para conexões externas.