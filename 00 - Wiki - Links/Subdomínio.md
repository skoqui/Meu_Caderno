---
tags:
  - subdomain
  - subdominio
  - web
---
---
# 🟢 Subdomínio

## O que é?
Um **subdomínio** é uma **divisão ou seção de um domínio principal**, usado para organizar serviços, áreas ou servidores diferentes de um site.  
Ele aparece **antes do domínio principal** na URL.

---

## Estrutura de um subdomínio

```ruby
subdominio.dominio.com
```

| Componente        | Exemplo        | Descrição                               |
| ----------------- | -------------- | --------------------------------------- |
| Subdomínio        | `blog`         | Identifica uma seção ou serviço do site |
| Domínio principal | `dominio`      | Nome registrado do site                 |
| TLD               | `.com`, `.org` | Extensão do site (Top-Level Domain)     |

---

### 🔹 Exemplos
- `blog.exemplo.com` → subdomínio do blog  
- `mail.exemplo.com` → subdomínio do e-mail  
- `shop.exemplo.com` → subdomínio da loja  

---

### ⚡ Importância
- **Organização:** separa serviços (site, blog, loja, e-mail).  
- **Segurança/DFIR:** subdomínios podem revelar **servidores esquecidos ou vulneráveis**.  
- **OSINT:** listar subdomínios ajuda a mapear toda a **infraestrutura de um alvo**.  

---

### 🔹 Relação com [[domínio]]

- **Domínio:** parte principal (`dominio.com`)  
- **Subdomínio:** prefixo que separa serviços (`blog`)  


---

###  🗄️ Buscadores de Subdomínios

↳ Aqui vai alguns sítes para buscadores de [[Subdomínio|subdomínios]]:

- [DNSdumpster](https://dnsdumpster.com)
- [WhoisXML](https://pt.subdomains.whoisxmlapi.com/)
- [SecurityTrails](https://securitytrails.com/)
- [NetCraft](https://searchdns.netcraft.com/)
