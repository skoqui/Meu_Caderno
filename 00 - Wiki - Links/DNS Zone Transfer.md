# DNS Zone Transfer

-> É um mecanismo usado entre **servidores [[DNS]] primário e secundário** para replicar registros de zona

---
## Principais pontos

- **AXFR (*Asynchronous Full Transfer Zone*)**: transfere **toda a zona [[DNS]]**.
- **IXFR (*Incremental Zone Transfer*)**: transfere **somente mudanças desde a última sincronização.**

⚠️ Em segurança, uma má configuração pode perimitir que **qualquer cliente** solicite a transferência, expondo todos os registros [[DNS]] de um domínio (subdomínio, MX, TXT, etc).

---
## 🔹 Por que importa para pentest?

- Ajuda descobrir **subdomínios ocultos**.
- Pode revelar **MX, TXT (SPF, DKIM), NS,** e até endereços internos da rede.
- Em provas (ex.: Security +, OSCP, CTFs), é clássico verificar se um servidor DNS está vulnerável a **AXFR aberto.**


---
## 🔹 Testando Zone Transfer


Usando `dig`
```bash
dig @ns1.exemplo.com exemplo.com AXFR
```
👉 Se o servidor permitir, ele listará toda a zona.

Usando `host`
```bash
host -l exemplo.com ns1.exemplo.com
```

Usando `dnsrecon` (mais automatizado)
```bash
dnsrecon -d exemplo.com -t axfr
```

---
## 🔹 Mitigação

- Restringir AXFR apenas a servidores autorizados (primário ↔ secundário).
- Configurar **firewall** para bloquear consultas externas de transferência.
- Monitorar logs de tentativas não autorizadas.




---
# 🌐 Site para prática: [zonetransfer.me](https://www.zonetransfer.me)


## 🔹 Descobrindo Nameservers (NS)

```bash
dig zonetransfer.me NS
```

ou

```bash
host -t ns zonetransfer.me
```


## 🔹 Testando Zone Transfer com `dig`

```bash
dig @nsztm1.digi.ninja zonetransfer.me AXFR
dig @nsztm2.digi.ninja zonetransfer.me AXFR
```


## 🔹 Testando com `host`

```bash
host -l zonetransfer.me nsztm1.digi.ninja
host -l zonetransfer.me nsztm2.digi.ninja
```


## 🔹 Testando com `dnsrecon`

```bash
dnsrecon -d zonetransfer.me -t axfr
```

