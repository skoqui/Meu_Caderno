---
tags:
  - proteção
  - rede
---
---
# IDS — Intrusion Detection System

## 📌 Informações Padrão
- **Categoria:** Segurança de Rede / Blue Team / SOC  
- **Tipo:** Sistema de Detecção de Intrusão (Passivo e Monitoramento)  
- **Ambiente:** On-Premise / Cloud / Híbrido  
- **Relacionamento:** IPS, SIEM, SOAR, Firewall, EDR  

---

## 📖 O que é IDS?

O **IDS (Intrusion Detection System)** é um sistema de segurança responsável por **monitorar, analisar e detectar atividades suspeitas ou maliciosas** em redes ou hosts, **sem interferir diretamente no tráfego**.

Diferente do IPS, o IDS atua de forma **passiva**, focando em:
- Geração de alertas
- Registro de eventos
- Apoio à investigação forense
- Alimentação de SIEM e SOC

Seu objetivo principal é **visibilidade e detecção precoce de ameaças**.

---

## ⚙️ Como Funciona

O funcionamento do IDS segue três etapas principais:

### 1️⃣ Coleta de Dados
O IDS captura informações de:
- Tráfego de rede (pacotes)
- Logs de sistema
- Eventos de aplicação
- Atividades de usuários

### 2️⃣ Análise
Os dados são comparados com:
- **Assinaturas de ataques**
- **Padrões comportamentais**
- **Regras heurísticas**
- **Modelos de anomalia**

### 3️⃣ Alerta
Quando uma ameaça é identificada, o sistema:
- Gera alertas para o SOC
- Cria logs estruturados
- Envia eventos para SIEM
- Marca eventos para correlação

---

## 🧠 Tipos de IDS

### 🔹 NIDS (Network IDS)
Monitora o tráfego de rede por meio de portas espelhadas (SPAN/TAP).
> Exemplo: Snort, Suricata, Zeek

### 🔹 [[HIDS]] (Host IDS)
Instalado diretamente nos endpoints e servidores.
> Exemplo: [[Wazuh]] Agent, OSSEC, Tripwire

---

## 🔍 Técnicas de Detecção

| Técnica | Descrição |
|-------------|---------------|
| **Assinatura** | Detecta ataques conhecidos |
| **Anomalia** | Identifica comportamentos fora do padrão |
| **Heurística** | Analisa padrões suspeitos |
| **Correlação** | Relaciona eventos entre múltiplas fontes |

---

## 🔥 Exemplos de Eventos Detectados

- Tentativas de brute force
- Port scanning
- Execução de malware
- Alteração de arquivos críticos
- Exploração de vulnerabilidades (CVE)
- Comunicação com C2 (Command & Control)

---

## 🔗 Integração com SOC & SIEM

O IDS normalmente:
- Envia eventos para **SIEM (Wazuh, Splunk, Elastic, QRadar)**
- Permite correlação com firewall, EDR e cloud logs
- Suporta playbooks de resposta via **SOAR**
- Alimenta dashboards de threat hunting

---

## 🛠️ Ferramentas Populares

| Ferramenta | Tipo | Uso |
|---------------|--------|--------|
| **Snort** | NIDS | Assinaturas e detecção em rede |
| **Suricata** | NIDS | Alta performance e multi-thread |
| **Zeek** | NIDS | Análise comportamental |
| **Wazuh** | HIDS | SIEM + IDS integrado |
| **OSSEC** | HIDS | Monitoramento de integridade |

---

## ⚖️ Vantagens e Desvantagens

### ✅ Vantagens
- Não impacta o tráfego de rede
- Alta visibilidade de eventos
- Fácil integração com SIEM
- Ideal para forense e auditoria

### ❌ Desvantagens
- Não bloqueia ataques automaticamente
- Pode gerar muitos alertas
- Exige correlação e análise humana
- Dependente da qualidade das regras

---

## 🧪 Exemplo Prático (Snort NIDS)

```bash
sudo snort -c /etc/snort/snort.conf -i eth0 -A console
