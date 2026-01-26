# 🛡️ SIEM Lab — Wazuh, Splunk & QRadar

Este repositório é um **laboratório de estudos e implementação prática de SIEM (Security Information and Event Management)**, com foco em **SOC, Blue Team, detecção de ameaças e resposta a incidentes**.

A proposta é centralizar documentações, setups, regras, simulações de ataques e integrações com múltiplas plataformas SIEM, incluindo:

- **Wazuh** (Open Source)
- **Splunk** (Enterprise / Free / Cloud)
- **IBM QRadar**

---

## 🎯 Objetivo do Projeto

Criar um ambiente técnico e documentado que demonstre:

- Coleta e centralização de logs
- Criação de regras e correlações
- Detecção baseada em MITRE ATT&CK
- Simulação de incidentes
- Fluxo de resposta SOC
- Integrações com Cloud, endpoints e redes

Este repositório também funciona como **portfólio técnico em cibersegurança e SIEM engineering**.

---

## 🧱 Plataformas SIEM

| Plataforma | Status | Finalidade |
|------------|--------|------------|
| Wazuh     | ✅ Ativo | HIDS, detecção open-source, laboratório base |
| Splunk    | 🔜 Planejado | Análise avançada, SPL, dashboards e Big Data |
| QRadar    | 🔜 Planejado | SOC corporativo, correlação e fluxo enterprise |

---

## 🔍 Casos de Uso SOC

- Monitoramento de autenticação suspeita (Linux / Windows)
- Detecção de brute force (SSH / RDP)
- Análise de logs de firewall e proxy
- Monitoramento de integridade de arquivos
- Alertas de execução suspeita (Sysmon / Auditd)
- Correlação de eventos multi-fonte

---

## 🧪 Simulações de Ataque

Este laboratório utiliza cenários controlados para validação de detecções, incluindo:

- T1021 — Remote Services
- T1059 — Command and Scripting Interpreter
- T1110 — Brute Force
- T1046 — Network Service Scanning

Framework de referência:
- **MITRE ATT&CK**

---

## ☁️ Integrações

- AWS CloudTrail
- Azure Monitor
- Sysmon
- Firewall (pfSense / UFW)
- Linux Auditd
- Windows Event Logs

---

## 🛠️ Tecnologias e Ferramentas

- Linux (Ubuntu / Fedora)
- Wazuh
- Splunk
- IBM QRadar
- Bash / Python
- Syslog / Filebeat
- OpenSearch
- Docker

---

## 📈 Evolução do Projeto

- [x] SIEM com Wazuh (All-in-One)
- [ ] Ambiente Splunk local
- [ ] QRadar Community Edition
- [ ] Dashboards SOC
- [ ] Playbooks automatizados
- [ ] Pipeline de logs em cloud

---

## 📚 Documentação

Cada plataforma possui sua própria pasta com:

- Guia de instalação
- Regras e queries
- Casos de detecção
- Evidências e prints
- Anotações técnicas

---

## 👨‍💻 Autor

**Luis Scoqui**  
Estudante de Segurança da Informação — UNIP  
Foco em SOC, SIEM, Blue Team e Engenharia de Detecção

---

## ⭐ Observação

Este repositório é mantido como laboratório educacional e portfólio técnico.  
Sugestões e melhorias são bem-vindas.

---

> _"Logs contam histórias. SIEM revela a verdade."_ 🛡️
