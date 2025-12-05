---
tags:
  - fingerprint
  - vulnerabilidade
  - pentest
---
---

# Fingerprinting
→ Fingerprinting é a técnica de **identificar detalhadamente um sistema, servidor ou serviço** sem necessariamente depender de banners visíveis.  
É como “ler a digital” do sistema para descobrir seu tipo, versão e configuração.


### → **Como funciona**
- Observando respostas do servidor a requisições específicas.
- Analisando **diferenças de comportamento** entre sistemas (ex.: tempo de resposta, mensagens de erro, padrões de TCP/IP).


### → **Tipos de Fingerprinting**
- **Ativo** → envia pacotes específicos para o alvo e analisa as respostas.
- **Passivo** → observa o tráfego existente sem enviar pacotes, menos detectável.


### → **Por que é útil**
- Permite descobrir sistemas operacionais, versões de software e serviços rodando.
- Ajuda a identificar **potenciais vulnerabilidades** antes de um ataque.
- Essencial em auditorias de segurança e testes de penetração.


### → **Ferramentas comuns**
- `nmap -O` → detecção de sistema operacional.
- `Netcraft` → informações passivas sobre servidores web.
- `WhatWeb` e `Wappalyzer` → identificam tecnologias usadas em sites.