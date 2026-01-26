---
tags:
  - rede
  - proteção
---
---
# IPS — Intrusion Prevention System

## 📌 Informações Padrão
- **Categoria:** Segurança de Rede / Blue Team / SOC  
- **Tipo:** Sistema de Prevenção de Intrusão (Preventivo e Reativo)  
- **Ambiente:** On-Premise / Cloud / Híbrido  
- **Relacionamento:** IDS (Intrusion Detection System), SIEM, Firewall, SOAR  

---

## 📖 O que é IPS?

O **IPS (Intrusion Prevention System)** é um sistema de segurança que **monitora o tráfego de rede em tempo real** e, ao detectar atividades maliciosas ou comportamentos suspeitos, **bloqueia automaticamente o ataque antes que ele atinja o alvo**.

Diferente do [[IDS]], que apenas detecta e gera alertas, o IPS atua **inline** na rede, tomando ações imediatas como:
- Bloqueio de pacotes
- Reset de conexões
- Isolamento de hosts
- Aplicação dinâmica de regras de firewall

---

## ⚙️ Como Funciona

O IPS analisa pacotes de rede passando por três camadas principais:

### 1️⃣ Captura de Tráfego
O tráfego passa diretamente pelo IPS (modo inline), permitindo inspeção profunda dos pacotes.

### 2️⃣ Análise
O sistema compara os dados com:
- **Assinaturas** (ataques conhecidos)
- **Análise comportamental**
- **Anomalias estatísticas**
- **Regras heurísticas**

### 3️⃣ Resposta
Se uma ameaça for confirmada, o IPS pode:
- Bloquear IP de origem
- Encerrar sessão [[Modelo TCPIP|TCP]]
- Gerar logs para SIEM
- Notificar SOC automaticamente

---

## 🧠 Tipos de IPS

### 🔹 NIPS (Network IPS)
Protege a rede inteira analisando o tráfego em tempo real.
> Exemplo: Suricata, Snort Inline, Palo Alto Networks IPS

### 🔹 HIPS (Host IPS)
Instalado diretamente em servidores ou endpoints.
> Exemplo: OSSEC, Wazuh Agent, Windows Defender Exploit Guard

---

## 🔍 Técnicas de Detecção

| Técnica | Descrição |
|----------|---------------|
| **Assinatura** | Detecta padrões conhecidos de ataques |
| **Anomalia** | Identifica desvios do comportamento normal |
| **Heurística** | Analisa lógica e padrões suspeitos |
| **Machine Learning** | Aprende comportamentos e prevê ameaças |

---

## 🔥 Exemplos de Ataques Bloqueados

- SQL Injection
- Cross-Site Scripting (XSS)
- Port Scanning
- Brute Force
- Exploração de Vulnerabilidades (CVE)
- Malware em tráfego HTTP/HTTPS

---

## 🔗 Integração com SOC & SIEM

Em ambientes profissionais, o IPS normalmente:
- Envia logs para **SIEM (Wazuh, Splunk, Elastic, QRadar)**
- Aciona **SOAR** para respostas automáticas
- Alimenta dashboards de visibilidade de ameaças

---

## 🛠️ Ferramentas Populares

| Ferramenta | Tipo | Uso |
|---------------|--------|--------|
| **Suricata** | NIPS | Open Source, alta performance |
| **Snort** | NIPS | Clássico e amplamente usado |
| **Wazuh** | HIPS | Foco em SOC e SIEM |
| **Palo Alto IPS** | NIPS | Enterprise |
| **Cisco Firepower** | NIPS | Enterprise |

---

## ⚖️ Vantagens e Desvantagens

### ✅ Vantagens
- Bloqueio automático de ataques
- Proteção em tempo real
- Redução de carga no SOC
- Interação com SIEM e SOAR

### ❌ Desvantagens
- Pode gerar **falsos positivos**
- Exige ajuste fino de regras
- Pode impactar performance da rede
- Implementação mais complexa que IDS

---

## 🧪 Exemplo Prático (Suricata Inline)

```bash
sudo suricata -c /etc/suricata/suricata.yaml -i eth0 --af-packet
```
