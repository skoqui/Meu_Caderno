---
tags:
  - hacking
  - web
---
---

# Sniffing
→ **O que é?**  
Sniffing é a prática de **capturar pacotes de dados** que trafegam em uma rede.  
Funciona como "escutar" a comunicação entre dispositivos.

### Como funciona
1. Um programa coloca a placa de rede em **modo promíscuo**.
2. Assim, ela passa a capturar **todo o tráfego** visível na rede.
3. O atacante analisa os pacotes para encontrar informações úteis.

### Ferramentas comuns
- **Wireshark** → captura e analisa pacotes.
- **tcpdump** → ferramenta de linha de comando para captura.
- **Ettercap** → usado em ataques de sniffing e MITM.

### O que pode ser capturado
- Logins e senhas em protocolos sem criptografia (ex.: [[HTTP]], [[FTP]], Telnet).
- Mensagens em texto claro.
- Cookies de sessão.
- Informações de rede ([[IPv4 e IPv6|IPs]], [[portas]], protocolos).

### Como se proteger

- Usar **[[HTTPS]], [[SSH]], [[VPN|VPNs]]** → criptografam os dados.
- Evitar redes Wi-Fi públicas sem proteção.
- Habilitar **segurança na camada de transporte ([[TLS]])** sempre que possível.