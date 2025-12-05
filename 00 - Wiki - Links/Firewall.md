---
tags:
  - firewall
  - rede
  - cibersegurança
  - proteção
---
---
# 🧱 Firewall

## O que é?
- Dispositivo (físico ou software) que **controla o tráfego de rede**.  
- Atua como uma **barreira de proteção** entre redes (ex: Internet ↔ rede interna).  

---

## Tipos
- **Firewall de rede:** instalado em roteadores/servidores.  
- **Firewall pessoal:** instalado em computadores (Windows Defender Firewall, por exemplo).  
- **Firewall de próxima geração (NGFW):** além de filtrar portas/IPs, analisa conteúdo (DPI).  

---

## Modos de atuação
- **Filtragem por pacotes:** analisa IP, porta, protocolo.  
- **Stateful Inspection:** acompanha o estado da conexão.  
- **Proxy:** atua como intermediário, inspecionando o tráfego.  

---

## Funções principais
- Bloquear acessos não autorizados.  
- Permitir apenas tráfego confiável.  
- Prevenir ataques como **port scanning** e **DoS**.  

---

## Exemplo prático
- Configurar firewall para **bloquear porta 445** (usada por SMB, alvo comum de ataques).  
- Permitir apenas tráfego de saída HTTP (porta 80) e HTTPS (porta 443).  

---

## Comando (Linux - iptables exemplo)

```bash
# Bloquear tráfego na porta 23 (Telnet)
iptables -A INPUT -p tcp --dport 23 -j DROP
```
