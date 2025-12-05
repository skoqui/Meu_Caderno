# DNS (*Domain Name Server*)

-> É um sistema que **traduz nomes de domínio em endereços IP**, permitindo que humanos acessem sites usando nomes fáceis de memorizar.

----
## Princripais pontos

- **Função principal:** resolver nomes de domínio → IP e vice-versa.
- **Servidores DNS comuns:** Google DNS (8.8.8.8 / 8.8.4.4), Cloudflare (1.1.1.1), OpenDNS (208.67.222.222).

---
## Principais tipos de registros DNS

|Registro|Função / Observações|Exemplo|
|---|---|---|
|**A**|Endereço IPv4 do domínio|exemplo.com → 93.184.216.34|
|**AAAA**|Endereço IPv6 do domínio|exemplo.com → 2606:2800:220:1:248:1893:25c8:1946|
|**MX**|Mail eXchanger → servidores de e-mail|MX 10 mail.exemplo.com|
|**NS**|Nameserver → servidores que respondem pelas zonas do domínio|NS ns1.exemplo.com|
|**CNAME**|Nome canônico → alias para outro domínio|[www.exemplo.com](http://www.exemplo.com/) → exemplo.com|
|**TXT**|Texto arbitrário → SPF, DKIM, verificação de propriedade|"v=spf1 include:_spf.google.com ~all"|
|**PTR**|Reverse DNS → resolve IP para nome|34.216.184.93 → exemplo.com|
|**SRV**|Localização de serviços específicos|_sip._tcp.exemplo.com|
|**SOA**|Start of Authority → informações de zona, responsável e serial|Administrador, serial, refresh|

---
## Comandos básicos no terminal

**Usando [[dig]]:**
```bash
dig exemplo.com A        # endereço IPv4
dig exemplo.com AAAA     # endereço IPv6
dig exemplo.com MX       # servidor de email
dig exemplo.com NS       # servidores de nomes
dig -x 93.184.216.34    # PTR, reverse DNS
```

**Usando [[nslookup]]:**
```bash
nslookup -type=A exemplo.com
nslookup -type=MX exemplo.com
nslookup 93.184.216.34
```

----
**Dicas rápidas de revisão**

- **MX** → fundamental para e-mails; sempre verifica prioridade.
- **NS** → diz quem é responsável pela zona DNS.
- **CNAME** → nunca pode coexistir com outro registro A no mesmo nome.
- **TXT** → usado para SPF/DKIM, segurança e verificação de propriedade.
- Ferramentas como `dig` e `nslookup` podem usar qualquer **DNS público** (ex: Google 8.8.8.8) para consultas externas.
- Reverse DNS (`PTR`) é útil em pentest para identificar hosts ativos por IP.