# 🛡️ SIEM com Wazuh — Instalação e Setup

Este repositório documenta a instalação e o setup de um ambiente **SIEM baseado em Wazuh** utilizando o método **All-in-One** em **Ubuntu Linux**, com foco em estudos de **SOC, Blue Team e Segurança da Informação**.

O objetivo é servir como **laboratório pessoal**, base para **portfólio técnico** e referência para futuras automações, integrações e testes de detecção.

---

## 📌 Visão Geral
- **SIEM:** Wazuh
- **Modo de instalação:** All-in-One
- **Plataforma:** Ubuntu Server/Desktop
- **Método:** Wazuh Installation Assistant
- **Interface:** Wazuh Dashboard (Web)

A instalação inclui automaticamente:
- Wazuh Manager
- Wazuh Indexer (OpenSearch)
- Wazuh Dashboard
- Filebeat

---

## 💻 Ambiente

|Item|Valor|
|---|---|
|Sistema|Ubuntu Linux|
|Data|24/01/2026|
|Método|Terminal (Bash)|
|Acesso Web|[https://localhost](https://localhost/)|

---

## ⚙️ Pré-requisitos

Antes de iniciar, garanta que:
- Você tem privilégios de **sudo**
- O sistema está atualizado
- Porta **443/TCP** liberada (caso acesse remotamente)
- Pelo menos **4GB de RAM** recomendados

---

## 🔄 Atualização do Sistema

```bash
sudo apt update && sudo apt upgrade -y
sudo apt install curl -y
```

---

## 📥 Download do Instalador

```bash
curl -sO https://packages.wazuh.com/4.9/wazuh-install.sh
```

---

## 🚀 Instalação All-in-One

```bash
sudo bash wazuh-install.sh -a
```

Este comando realiza automaticamente:
- Configuração do Wazuh Manager
- Deploy do Indexer
- Setup do Dashboard
- Geração de credenciais

---

## 🔐 Credenciais

Ao final da instalação, o script gera:
- Usuário do Dashboard
- Senha de acesso

> ⚠️ **Importante:** Salve essas credenciais em local seguro. Elas não são exibidas novamente automaticamente.

---

## 🌐 Acesso ao Dashboard

No próprio servidor:

```
https://localhost
```

Ou remotamente:

```
https://<IP_DO_SERVIDOR>
```

Se aparecer um aviso de certificado, basta aceitar a exceção (certificado autoassinado).

---

## 🧪 Validação da Instalação

Verifique se os serviços estão ativos:

```bash
sudo systemctl status wazuh-manager
sudo systemctl status wazuh-indexer
sudo systemctl status wazuh-dashboard
```

Todos devem aparecer como **active (running)**.


---

## 📚 Próximos Passos

-  Adicionar agentes Linux e Windows
-  Criar regras customizadas
-  Integrar com Sysmon
-  Simular ataques (MITRE ATT&CK)
-  Dashboards personalizados
-  Integração com cloud (AWS / Azure)

---

## 🧠 Conceitos Estudados
- SIEM
- Log Management
- Threat Detection
- HIDS
- MITRE ATT&CK
- Blue Team Operations
- SOC Workflow

---

## 🛠️ Tecnologias
- Wazuh
- OpenSearch
- Ubuntu Linux
- Bash
- Syslog
- Filebeat

---

## 📸 Evidências

> Prints e diagramas podem ser adicionados na pasta `docs/` para documentar detecções, alertas e cenários simulados.

---

## 📄 Licença

Este projeto é apenas para fins educacionais e laboratoriais.

---

## ✍️ Autor

**Luis Scoqui**  
Estudante de Segurança da Informação — UNIP  
Foco em SOC, SIEM, Blue Team e Cibersegurança

---

## ⭐ Observação

Se este repositório te ajudou nos estudos ou no setup do Wazuh, considere deixar uma estrela e compartilhar com outros estudantes de segurança da informação.

---

> _"Detectar cedo é proteger melhor."_ 🛡️