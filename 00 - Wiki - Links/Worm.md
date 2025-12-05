---
tags:
  - malware
  - worm
---
---
# 🪱 Worms

-> Um **worm** é um **[[Malware]] autorreplicante**, mas diferente do vírus:

- **Não precisa de hospedeiro**.
- Se espalha sozinho pela rede, explorando falhas de segurança ou usando engenharia social.
- Foco principal: **propagação rápida**.

---
## 🔹 Características principais

- Se replica sozinho, sem depender de arquivos.
- Usa **redes e sistemas vulneráveis** para se espalhar.
- Pode instalar **carga maliciosa** (payload) → [[Ransomware]], [[backdoors]], mineradores.
- Provoca **lentidão de rede** e sobrecarga de sistemas.

---
## 🔹 Exemplos práticos

- **Morris Worm (1988)** → primeiro worm famoso; explorava falhas no Unix.
- **ILOVEYOU (2000)** → também considerado um worm, pois enviava cópias via e-mail.
- **Conficker (2008)** → infectou milhões de PCs Windows explorando falhas de RPC.
- **WannaCry (2017)** → worm + ransomware, explorando falha SMB (EternalBlue).

---
## 🔹 Sintomas comuns

- Tráfego de rede anormal (mesmo sem uso).
- Mensagens automáticas enviadas em massa (e-mail/chat).
- Lentidão geral em PCs e servidores.
- Instalação de outros malwares.

---
## 🔹 Remoção / Mitigação

✅ **Curto prazo**

- Isolar a máquina infectada da rede.
- Usar [[Antivírus]]/antimalware atualizado para detectar e remover.
- Aplicar patches de segurança (corrigir a falha usada pelo worm).

✅ **Casos graves**

- Restaurar sistema a partir de backup.
- Reinstalação limpa se houver comprometimento profundo.

✅ **Prevenção**

- Manter sistema sempre atualizado (patch management).
- Usar [[Firewall]] para bloquear portas vulneráveis (ex: SMB, RPC).
- Monitorar tráfego anômalo de rede (IDS/IPS).

---
👉 Exemplo prático de prevenção no Linux com **iptables** (bloquear SMB - porta 445):

```bash
sudo iptables -A INPUT -p tcp --dport 445 -j DROP
```

---
⚠️ **Resumo rápido para prova:**

- Worm → não precisa de hospedeiro.
- Se espalha sozinho pela rede.
- Exemplos: Morris, Conficker, WannaCry.
- Prevenção: atualizações, firewall, IDS/IPS.