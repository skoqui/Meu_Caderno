---
tags:
  - botnet
  - malware
---
---
# 🤖 Botnet

-> Uma **Botnet**([[malware]]) é uma **rede de computadores infectados** (bots/zumbis) controlados remotamente por um invasor (botmaster).

- Cada máquina infectada é chamada de **bot**.
- Usadas para ataques em grande escala: DDoS, envio de spam, mineração de criptomoedas, fraude online.

---
### 🔹 Características principais

- Máquinas infectadas **não precisam de interação do usuário** após o bot estar instalado.
- Pode ter **controle centralizado** (C&C server) ou **p2p** (peer-to-peer).
- Difícil de detectar sem monitoramento de rede.
- Alguns bots podem instalar **outros malwares** ou ransomware.

---
### 🔹 Exemplos práticos

- **Mirai (2016)** → atacava dispositivos IoT, usado para DDoS massivo.
- **Emotet Botnet** → começou como Trojan, depois virou botnet para distribuição de malware.
- **Zeus/Zbot Botnet** → roubava credenciais bancárias em larga escala.
- **Necurs** → enviava milhões de e-mails de spam e instalava ransomware.

---
### 🔹 Sintomas comuns

- Lentidão de rede ou tráfego anormal.
- PCs funcionando normalmente, mas conectando a IPs desconhecidos.
- Bloqueios em serviços online devido a envio massivo de spam.
- Possível instalação de malware adicional sem consentimento.

---
### 🔹 Remoção / Mitigação

✅ **Curto prazo**

- Desconectar máquinas da rede.
- Escanear cada máquina com antivírus/antimalware atualizado.
- Remover malware de inicialização.

✅ **Casos graves**

- Reinstalação completa do sistema infectado.
- Monitoramento de rede para detectar outros bots.

✅ **Prevenção**

- Atualizar sistema e software constantemente.
- Evitar downloads de fontes suspeitas.
- Monitorar tráfego de rede incomum (IDS/IPS).
- Firewall para bloquear portas e IPs suspeitos.

---
### 🔹 Exemplo prático de detecção no Linux

Monitorando tráfego de rede para identificar bots:
```bash
sudo netstat -tunap
sudo nethogs
```


### 🔹 Exemplo prático de detecção no Windows

Listando conexões suspeitas:
```powershell
netstat -ano | findstr ESTABLISHED
```

Verificar se processos desconhecidos estão conectados a IPs externos.

---
⚠️ **Resumo rápido para prova:**

- Botnet = rede de PCs/zumbis controlados remotamente.
- Ex.: Mirai, Emotet, Zeus, Necurs.
- Sintomas: tráfego anormal, envio de spam, lentidão.
- Remoção: antivírus, desconectar da rede, reinstalar se necessário.
- Prevenção: atualizações, firewall, monitoramento de rede.