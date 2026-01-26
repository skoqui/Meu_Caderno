---
tags:
  - SIEM
  - rede
  - proteção
---
---
# HIDS — Host-based Intrusion Detection System

## 📌 Informações Padrão
- **Categoria:** Segurança de Endpoint / Blue Team / SOC  
- **Tipo:** Sistema de Detecção de Intrusão em Host (Passivo e Monitoramento)  
- **Ambiente:** On-Premise / Cloud / Híbrido  
- **Relacionamento:** SIEM, EDR, IPS, Firewall, SOAR  

---

## 📖 O que é HIDS?

O **HIDS (Host-based Intrusion Detection System)** é um sistema de segurança que atua **diretamente nos endpoints e servidores**, monitorando atividades internas do sistema operacional para **detectar comportamentos maliciosos, violações de integridade e uso indevido de recursos**.

Diferente do NIDS, que observa o tráfego de rede, o HIDS foca no que acontece **dentro do host**, oferecendo maior visibilidade sobre:
- Processos em execução
- Alterações em arquivos críticos
- Logs de sistema
- Atividades de usuários
- Chamadas de sistema

---

## ⚙️ Como Funciona

O funcionamento do HIDS segue três camadas principais:

### 1️⃣ Coleta Local
O agente HIDS coleta:
- Logs do sistema (syslog, auth.log, event logs)
- Hashes de arquivos e diretórios monitorados
- Eventos de processos e serviços
- Tentativas de login e privilégios

### 2️⃣ Análise
Os dados são analisados usando:
- **Assinaturas de comportamento**
- **Regras de integridade (FIM — File Integrity Monitoring)**
- **Correlação de eventos**
- **Detecção por anomalia**

### 3️⃣ Alerta
Quando algo suspeito é detectado, o sistema:
- Gera alertas para o SOC
- Envia eventos ao SIEM
- Marca o host como potencialmente comprometido
- Dispara automações via SOAR

---

## 🧠 Componentes Principais

- **Agente HIDS:** Instalado no host monitorado  
- **Servidor Central:** Recebe, processa e correlaciona eventos  
- **Dashboard:** Visualização e investigação  
- **Base de Regras:** Define o que é comportamento normal ou suspeito  

---

## 🔍 Técnicas de Detecção

| Técnica | Descrição |
|-------------|---------------|
| **FIM (Integridade de Arquivos)** | Detecta modificações em arquivos críticos |
| **Análise de Logs** | Identifica eventos suspeitos |
| **Assinaturas** | Reconhece padrões maliciosos |
| **Anomalia** | Detecta desvios de comportamento |
| **Correlação** | Relaciona eventos locais e globais |

---

## 🔥 Exemplos de Eventos Detectados

- Alteração em `/etc/passwd` ou `/etc/shadow`  
- Execução de processos não autorizados  
- Tentativas de escalonamento de privilégio  
- Instalação de backdoors  
- Modificação de binários do sistema  
- Logins suspeitos via SSH/RDP  

---

## 🔗 Integração com SOC & SIEM

O HIDS normalmente:
- Envia logs para **SIEM (Wazuh, Elastic, Splunk, QRadar)**  
- Correlaciona eventos com firewall e NIDS  
- Permite resposta automática via **SOAR**  
- Suporta auditorias e compliance (PCI-DSS, ISO 27001, LGPD)

---

## 🛠️ Ferramentas Populares

| Ferramenta | Tipo | Uso |
|---------------|--------|--------|
| **Wazuh Agent** | HIDS | SIEM + FIM + Compliance |
| **OSSEC** | HIDS | Open Source, leve |
| **Tripwire** | HIDS | Integridade de arquivos |
| **Falco** | HIDS | Segurança para containers |
| **AIDE** | HIDS | Monitoramento de integridade |

---

## ⚖️ Vantagens e Desvantagens

### ✅ Vantagens
- Visibilidade interna profunda
- Detecta ataques pós-exploração
- Excelente para compliance
- Baixo impacto na rede

### ❌ Desvantagens
- Requer instalação em cada host
- Pode consumir recursos locais
- Não bloqueia ataques automaticamente
- Gerenciamento em larga escala é complexo

---

## 🧪 Exemplo Prático (Wazuh Agent Linux)

```bash
curl -sO https://packages.wazuh.com/4.x/wazuh-install.sh
sudo bash wazuh-install.sh --agent
