---
Curso: "Treinamento Completo: Wazuh"
Professor:
Plataforma:
  - Youtube
Data início: 2026-01-26
Data término:
tags:
  - "#pentest"
  - linux
  - SIEM
  - SIEM/wazuh
Status: false
---
---

# Treinamento Completo: **Wazuh**
## Aula 01 - Entenda o que é a solução Wazuh
### O que é o Wazuh
→ O [[Wazuh]] é uma plataforma *open-source de SIEM e XDR* usada para o **monitoramento de segurança, detecção de ameaças e resposta a incidentes** em servidores, endpoints, containers e ambientes em nuvem.

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

![[Pasted image 20260126162434.png]]

>Essa imagem mostra como o **Wazuh** funciona como um "vigia" tecnológico para a sua rede. Ele é dividido em três grandes partes que trabalham juntas para detectar ameaças.

Imagine que o Wazuh é um sistema de segurança de um grande prédio comercial:

### 1. Endpoints (Os Postos de Vigia)

No lado esquerdo, temos os **Endpoints** (Servidores, Desktops, Laptops, Nuvem).
- Em cada um deles, você instala um pequeno programa chamado **Wazuh Agent**.
- **O que ele faz:** Ele fica "olhando" tudo o que acontece no computador (quem logou, se algum arquivo foi alterado, se há vírus) e envia esses relatórios para a central.

### 2. Central Components (O Cérebro)

No meio, temos os componentes centrais, que processam as informações:

- **Network Load Balancer:** Funciona como um recepcionista que recebe todos os relatórios dos agentes e os distribui de forma organizada para os servidores não ficarem sobrecarregados.

- **Wazuh Server Cluster:** É aqui que a mágica acontece. Ele tem um **Master Node** (o chefe) e vários **Worker Nodes** (os ajudantes).
    - **Analysis Engine:** É o motor de análise. Ele lê os relatórios dos agentes e decide: "Isso aqui é normal" ou "Isso aqui é um ataque hacker!".
    - **Filebeat:** É o "correio" que pega os dados analisados e leva para o arquivo (Indexer).

- **Wazuh Indexer:** É o grande **arquivo digital**. Ele guarda todos os logs e alertas de forma organizada para que você possa pesquisar depois.

### 3. Visualização (A Sala de Monitoramento)

No topo e à direita, temos onde o usuário interage:

- **Wazuh Dashboard:** É a tela bonita com gráficos e mapas que os analistas de segurança olham. Ela puxa os dados do Indexer e mostra tudo o que está acontecendo em tempo real.

- **Wazuh Users:** São as pessoas (como você ou sua equipe de TI) que usam o dashboard para tomar decisões e proteger a empresa.

---

## Casos de Uso
- SOC e Blue Team
- Monitoramento de servidores Linux/Windows
- Detecção de ataques ([[bruteforce]], [[malware]], privilege escalation)
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

### Resumo:
- É uma solução de monitoramento open-source que contempla um conjunto de componentes avançados de segurança.
- **Principais Componentes:**
	- coleta de logs;
	- análise de logs (conjunto personalizável de mais de 4000 regras HIDS);
	- monitoramento de integridade de arquivos;
	- detecção de anomalias baseada em host
	- varredura de conformidade de segurança para vulnerabilidades conhecidas
	- alerta em tempo real (e-mail, SMS, slack, etc);
	- resposta ativa (uma implementação [[IPS]] orientada por [[HIDS]])



