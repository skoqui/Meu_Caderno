# VPN (*Virtual Private Network*)

-> É uma tecnologia que cria um **túnel seguro** entre o seu dispositivo e uma rede remota, protegendo dados de interceptação.

---
## Principais pontos

- **Função principal:** **segurança e privacidade**, permitindo acesso seguro a redes privadas através da internet. 
- **Como funciona:** criptografa o tráfego e encapsula pacotes em protocolos de tunelamento.
- **Protocolos comuns:**
	- **OpenVPN** – SSL/TLS, muito usado e flexível.
	- **IPSec / IKEv2** – padrão de mercado para empresas.
	- **WireGuard** – moderno, leve e rápido.
- **Uso comum:**
	- Acesso remoto a redes corporativas.
	- Proteção em Wi-Fi público.
	- Contornar bloqueios geográficos.



---
## Comandos básicos (Linux / terminal)

**Conectar via OpenVPN:**

```bash
sudo openvpn --config cliente.ovpn
```

**Ver status de VPN WireGuard:**

```bash
sudo wg show
```

**Ativar VPN WireGuard (configuração já criada):**

```bash
sudo wg-quick up wg0
sudo wg-quick down wg0  # para desconectar
```

---
**Dicas rápidas:**

- VPN protege **confidencialidade e integridade**, mas não protege totalmente contra malware ou rastreamento em sites.
- Prefira protocolos modernos (WireGuard, OpenVPN com TLS 1.2/1.3) para melhor segurança e performance.
- Use sempre credenciais fortes ou chaves criptográficas.
