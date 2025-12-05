---
tags:
  - whois
  - consultaDNS
---
---
# Whois

-> É uma ferramenta e protocolo para **consultar informações públicas de domínios e endereços IP**.

---
## Principais pontos

- **Função principal:** identificar proprietário, contatos administrativos/técnicos, datas de registro e expiração, servidores DNS, ASN, etc.
- **Uso comum:** coleta de informações (OSINT), auditoria de segurança, pentest e investigação de redes.

---
## Comandos básicos

```bash
whois exemplo.com          # Consulta padrão de domínio
whois 8.8.8.8              # Consulta de IP
whois -h whois.registro.br exemplo.com.br  # Especificar servidor WHOIS
```


----
## Comandos e opções avançadas

|Comando / Opção|Função / Observações|
|---|---|
|`-H`|Suprime informações de cabeçalho do servidor WHOIS|
|`-i`|Especifica tipo de pesquisa de IP/ASN (ex: `-i origin AS15169`)|
|`-r`|Desativa consultas recursivas (evita buscar no servidor remoto de registro)|
|`-p <porta>`|Usar porta personalizada para conectar ao servidor WHOIS|
|`--verbose`|Exibe informações detalhadas de consulta|
|`--help`|Mostra todas as opções do comando|
|`whois -i AS15169`|Pesquisa por ASN específico (útil para mapeamento de rede)|
|`whois -H exemplo.com`|Consulta limpa, sem cabeçalhos técnicos|

---
## Dicas práticas para pentest / OSINT

- Combine **Whois + dig/nslookup** para mapear **domínio → IP → ASN → servidores**. 
- Use servidores WHOIS específicos para TLDs (ex: `whois -h whois.verisign-grs.com exemplo.com`).
- 
- Para IPs, use WHOIS regional:
    - ARIN (América do Norte)
    - RIPE (Europa)
    - LACNIC (América Latina) 
    - APNIC (Ásia/Pacífico)

- Whois pode revelar **emails de administradores**, úteis para **social engineering** em testes autorizados.
- Muitas vezes os registros estão **protegidos por privacy/proxy**, limitando os dados públicos.