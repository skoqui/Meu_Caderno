---
tags:
  - logs
---
---
## O que são Logs

**Logs** são registros gerados por sistemas, aplicações, redes e dispositivos que documentam **eventos, ações e estados do sistema** ao longo do tempo.

Eles servem como uma **linha do tempo** do que aconteceu em um ambiente — quem acessou, o que foi executado, o que falhou e quando ocorreu.

---

## Para que servem

- **Segurança**
    - Detecção de ataques e comportamentos suspeitos
    - Investigação de incidentes (forense digital)

- **Operação**
    - Diagnóstico de erros e falhas de sistema
    - Monitoramento de desempenho
- **Auditoria e Compliance**
    - Rastreabilidade de ações de usuários e sistemas
    - Atendimento a normas como ISO 27001, LGPD, PCI DSS

---

## Tipos de Logs

### Por Origem

- **Sistema** → Kernel, serviços, autenticação  
    Ex: login, sudo, falhas de boot
- **Aplicação** → Sistemas web, bancos, APIs  
    Ex: erros HTTP, exceções, acessos
- **Segurança** → Firewall, IDS/IPS, antivírus, SIEM
- **Rede** → Roteadores, switches, VPN, proxy

### Por Nível
- **INFO** → Eventos normais
- **WARNING** → Comportamento anormal leve
- **ERROR** → Falhas
- **CRITICAL** → Problemas graves / segurança

---

## Estrutura de um Log

Normalmente contém:
- **Timestamp** → Data e hora do evento
- **Fonte** → Sistema ou serviço que gerou o log
- **Tipo/Nível** → Severidade
- **Mensagem** → Descrição do evento
- **Usuário/IP/Processo** → (quando aplicável)

### Exemplo
```
2026-01-26 14:32:10 sshd[2145]: Failed password for root from 192.168.1.10
```

## Logs em Segurança da Informação

Em ambientes SOC e SIEM, logs são usados para:
- Correlacionar eventos
- Criar alertas automáticos
- Identificar padrões de ataque
- Gerar relatórios e métricas de segurança

---

## Centralização de Logs

Em vez de analisar máquina por máquina, os logs são enviados para um sistema central, como:
- **[[Wazuh]]**
- **ELK Stack (Elasticsearch, Logstash, Kibana)**
- **Splunk**
- **Graylog**

---

## Boas Práticas
- Sincronizar horário com **NTP**
- Definir política de retenção
- Proteger logs contra alteração
- Padronizar formatos
- Monitorar logs críticos em tempo real