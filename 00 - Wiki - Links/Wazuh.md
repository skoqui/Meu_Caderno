### O que é o Wazuh
→ O Wazuh é uma plataforma *open-source de SIEM e XDR* usada para o **monitoramento de segurança, detecção de ameaças e resposta a incidentes** em servidores, endpoints, containers e ambientes em nuvem.

Ele coleta, analisa e correlaciona [[logs]] e eventos de sistema para identificar comportamentos suspeitos, falhas de segurança e violações de conformidades.

### Principais Funções
- **Detecção de Intrusão (HIDS)***
	Monitora arquivos, processos, usuários, portas e atividades do sistema.
- **Análise de logs**
	Centraliza e correlaciona logs de Linux, Windows, Firewalls, cloud e aplicações.
- **File Integrity Monitoring (FIM)**
	Detecta alterações em arquivos críticos
- **Vulnerability Detection**
	Identifica pacotes e sistema vulneráveis automaticamente
- **Conformidade e Compliance**
	Suporte a PCI DSS, HIPAA, GDPR, ISO27001, NIST.
- **Cloud Security**
	Integra com AWS, Azure e GCP
- **Containers e Kubernetes**
	Monitoramento de workloads e clusters


## Arquitetura
- **Wazuh Agent** → Instalado nos endpoints, coleta eventos e métricas 
- **Wazuh Server** → Processa, correlaciona e gera alertas
- **Elasticsearch / OpenSearch** → Armazena os dados  
- **Kibana / Wazuh Dashboard** → Interface web para visualização

---

## Casos de Uso
- SOC e Blue Team
- Monitoramento de servidores Linux/Windows
- Detecção de ataques (bruteforce, malware, privilege escalation)
- Segurança em cloud e ambientes híbridos
- Auditoria e conformidade

## Vantagens
- 100% **open-source**
- Leve e escalável
- Forte integração com cloud e containers
- Muito usado em ambientes SOC e labs de cibersegurança

## Comparação Rápida
- **Wazuh vs SIEMs comerciais (Splunk, QRadar)**  
    Wazuh é gratuito e open-source, mas exige mais configuração e manutenção.