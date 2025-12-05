---
tags:
  - nmap
  - portscan
---
---

# Nmap (*Network Mapper*)

-> É uma ferramenta de **scanner de rede e segurança**, usada para **mapear hosts, portas abertas e serviços ativos**.

---
## Principais pontos

- Descobrir **hosts ativos** em uma rede.
- Identificar **portas abertas** (TCP e UDP).
- Detectar **versões de serviços** e sistemas operacionais.
- Auxiliar em **pentest** e auditoria de segurança.

---
## Comandos básicos

| Parâmetro       | Função / Observações                                               |
| --------------- | ------------------------------------------------------------------ |
| `-p`            | Define quais portas escanear (ex: `-p 80,443` ou `-p-` para todas) |
| `-sS`           | Scan TCP SYN (“stealth scan”), rápido e discreto                   |
| `-sT`           | Scan TCP connect (conexão completa), menos discreto                |
| `-sU`           | Scan de portas UDP                                                 |
| `-sV`           | Detecta versão do serviço rodando na porta                         |
| `-O`            | Detecta sistema operacional do host                                |
| `-A`            | Scan agressivo: SO + versão + scripts NSE + traceroute             |
| `-F`            | Scan rápido de portas mais comuns                                  |
| `-T0` a `-T5`   | Ajusta velocidade do scan (`-T0` muito lento, `-T5` muito rápido)  |
| `-v`            | Modo verbose (mais informações durante o scan)                     |
| `--script`      | Executa scripts NSE para checagem de vulnerabilidades              |
| `-Pn`           | Não faz ping antes do scan (assume host ativo)                     |
| `-6`            | Habilita scan em IPv6                                              |
| `--reason`      | Mostra motivo pelo qual cada porta foi considerada aberta/fechada  |
| `--open`        | Mostra apenas portas abertas no resultado                          |
| `--top-ports N` | Escaneia as N portas mais comuns                                   |
| `-iL`           | Escaneia algum arquivo `.txt` ou outros esfecificado no seu PC     |

---
**Dicas rápidas:**

- Sempre combine **TCP e UDP** se o alvo permitir.
- Use **-v** para modo verbose e ver mais detalhes.
- Para **pentest**, foco em portas **padrão** e serviços conhecidos.
- Ferramenta poderosa, mas evite usar em redes externas sem permissão.