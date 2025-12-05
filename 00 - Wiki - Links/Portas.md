# Portas TCP/UDP

-> São pontos de comunicação entre cliente e servidor. 

---
## Principais portas TCP

| Porta   | Protocolo / Serviço | Observações                                            |
| ------- | ------------------- | ------------------------------------------------------ |
| 20 / 21 | FTP                 | Transferência de arquivos; 21 = controle, 20 = dados   |
| 22      | SSH / SFTP / SCP    | Acesso remoto seguro; transferência de arquivos segura |
| 23      | Telnet              | Acesso remoto em texto puro (inseguro)                 |
| 25      | SMTP                | Envio de e-mails; vulnerável a relay aberto            |
| 53      | DNS                 | Consultas de nomes; UDP/TCP                            |
| 80      | HTTP                | Web em texto puro                                      |
| 110     | POP3                | Recebimento de e-mails (texto)                         |
| 143     | IMAP                | Recebimento de e-mails (texto)                         |
| 443     | HTTPS               | Web segura (TLS/SSL)                                   |
| 445     | SMB                 | Compartilhamento de arquivos Windows                   |
| 3389    | RDP                 | Acesso remoto Windows                                  |


---
## Principais portas UDP

|Porta|Protocolo / Serviço|Observações|
|---|---|---|
|53|DNS|Consultas de nomes|
|67 / 68|DHCP|Atribuição de IP|
|69|TFTP|Transferência de arquivos simples, sem autenticação|
|123|NTP|Sincronização de horário|
|161 / 162|SNMP|Monitoramento de rede|


---
**Dicas rápidas para pentester**

- Sempre faça **scan completo** (TCP + UDP) em alvos internos/externos.
- Ferramentas comuns: `nmap`, `masscan`.
- Conhecer portas **padrão** ajuda a identificar **serviços ativos e potenciais vulnerabilidades**.
- Combine análise de portas com banners, versões e exploits conhecidos.