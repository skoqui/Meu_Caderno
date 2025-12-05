# TCP/IP

-> É o modelo prático usado na internet, com **4 camadas**, mais simples que o OSI. Ele define como os dados são transmitidos entre dispositivos.

---
## Camadas do TCP/IP

| Camada            | Função principal                      | Protocolos comuns                    | Mapeamento aproximado no OSI            |
| ----------------- | ------------------------------------- | ------------------------------------ | --------------------------------------- |
| 1 – Acesso à Rede | Comunicação física e enlace local     | Ethernet, Wi-Fi, PPP                 | Física + Enlace (OSI)                   |
| 2 – Internet      | Endereçamento e roteamento de pacotes | IP, ICMP, ARP                        | Rede (OSI)                              |
| 3 – Transporte    | Entrega confiável ou não fim a fim    | TCP (confiável), UDP (não confiável) | Transporte (OSI)                        |
| 4 – Aplicação     | Serviços de rede para usuário final   | HTTP, FTP, SMTP, DNS, SFTP           | Sessão + Apresentação + Aplicação (OSI) |

---
**Dicas rápidas**

- TCP/IP é **mais prático e usado**, enquanto OSI é **teórico**.
- Camadas **superiores** → serviços ao usuário; **inferiores** → transporte de dados e rede física.
- Pergunta comum: “Qual camada do TCP/IP é equivalente à camada de transporte do OSI?” → **Transporte**.
- Ferramentas de análise de rede (ex: `ping`, `traceroute`, `nmap`) operam principalmente nas camadas **Internet** e **Transporte**.