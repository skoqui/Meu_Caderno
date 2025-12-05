# Modelo OSI (*Open Systems Interconnection*)

-> É um modelo teórico de referência que **divide a comunicação de rede em 7 camadas**, facilitando estudo, padronização e diagnóstico.

---
## Camadas do OSI (de cima para baixo)

| Camada           | Função principal                                           | Exemplos / Observações                           |
| ---------------- | ---------------------------------------------------------- | ------------------------------------------------ |
| 7 – Aplicação    | Interface com o usuário; fornece serviços de rede          | HTTP, FTP, SMTP, DNS                             |
| 6 – Apresentação | Formato e tradução de dados; criptografia; compressão      | SSL/TLS, JPEG, ASCII                             |
| 5 – Sessão       | Controle de conexões; gerenciamento de sessões             | NetBIOS, RPC                                     |
| 4 – Transporte   | Entrega confiável ou não de dados fim a fim                | TCP (confiável), UDP (não confiável)             |
| 3 – Rede         | Endereçamento e roteamento de pacotes                      | IP, ICMP, OSPF                                   |
| 2 – Enlace       | Comunicação dentro da mesma rede física; detecção de erros | Ethernet, Wi-Fi, PPP                             |
| 1 – Física       | Transmissão de bits pelo meio físico                       | Cabos, fibra óptica, sinais elétricos ou ópticos |


---
**Dicas rápidas de revisão**

- **“SALVA FISICAMENTE E LOGICAMENTE”**: camada Física = transmissão, Enlace = detecção de erros, Rede = endereçamento.
- TCP/IP não segue exatamente o OSI, mas mapeia suas funções (Aplicação → HTTP/FTP, Transporte → TCP/UDP, Internet → IP, Acesso à Rede → Enlace/Física).
- Memorizar acrônimo ajuda: **A – P – S – T – N – E – F** (Aplicação, Apresentação, Sessão, Transporte, Rede, Enlace, Física).
- Pergunta comum de prova: “Em qual camada funciona o IP?” → **Camada 3 – Rede**.

