---
tags:
  - ARP
  - rede
---
---

# ARP (Address Resolution Protocol)

**ARP** é um protocolo utilizado para associar um endereço IP a um endereço MAC dentro de uma rede local (LAN).  
Ele permite que um dispositivo descubra o MAC correspondente a um IP antes de enviar os dados.

**Como funciona:**
1. O host envia um **ARP Request** (broadcast) perguntando “Quem tem este IP?”
2. O dispositivo dono do IP responde com um **ARP Reply**, informando seu endereço MAC
3. A associação IP ↔ MAC é armazenada na **ARP Table**

**Características:**
- Atua na camada de rede/acesso (entre L2 e L3)
- Funciona apenas em redes locais
- Usa broadcast para requisições

**Risco de Segurança:**
- **ARP Spoofing / ARP Poisoning**: ataque que permite interceptação de tráfego (MITM)

**Mitigações:**
- ARP estático
- DHCP Snooping + Dynamic ARP Inspection
- Segmentação de rede


