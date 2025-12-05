# Endereçamento IP

-> É a forma de identificar **dispositivos em uma rede** para envio de pacotes. Cada dispositivo recebe um **IP único** dentro da rede.

---
## Tipos de IP

| Tipo     | Descrição                          | Exemplo                        |
| -------- | ---------------------------------- | ------------------------------ |
| **IPv4** | 32 bits, dividido em 4 octetos     | 192.168.0.1                    |
| **IPv6** | 128 bits, hexadecimal, mais espaço | 2001:0db8:85a3::8a2e:0370:7334 |

---
## Classes de IPv4 (histórico)

| Classe | Faixa                       | Uso            |
| ------ | --------------------------- | -------------- |
| A      | 1.0.0.0 – 126.255.255.255   | Grandes redes  |
| B      | 128.0.0.0 – 191.255.255.255 | Médias redes   |
| C      | 192.0.0.0 – 223.255.255.255 | Pequenas redes |
| D      | 224.0.0.0 – 239.255.255.255 | Multicast      |
| E      | 240.0.0.0 – 254.255.255.255 | Experimental   |

---
## Tipos de IP por função
|Tipo|Descrição|Observações|
|---|---|---|
|**Público**|Acessível na internet|Usado por servidores, roteadores|
|**Privado**|Usado em redes internas|Faixas comuns: 10.0.0.0/8, 172.16.0.0/12, 192.168.0.0/16|
|**Loopback**|Testes locais|127.0.0.1 (IPv4), ::1 (IPv6)|
|**Link-local**|Autoatribuído quando sem DHCP|169.254.0.0/16 (IPv4), fe80::/10 (IPv6)|

---
### Máscara de rede

- Define **qual parte do IP é rede e qual é host**.
- Exemplo:
	- IP: 192.168.1.10
	- Máscara: 255.255.255.0 → rede: 192.168.1.0, hosts: 1–254
- Notação CIDR: 192.168.1.10/24


---
**Dicas rápidas de revisão**

- **IPv4:** limitado a ~4,3 bilhões de endereços → IPv6 resolve limitação.
- **IP público ≠ IP privado**; NAT converte para acessar a internet.
- **Máscara / prefixo** define quantos hosts cabem na rede.
- Pergunta comum: “Qual IP de loopback?” → 127.0.0.1 (IPv4) ou ::1 (IPv6).