---
tags:
  - as
  - autonomoussystem
  - rede
---
---
# 🌐 Autonomous System (AS)

## 📌 O que é

- **Autonomous System (AS)** = Sistema Autônomo.
- É um **conjunto de redes IP** (faixas de endereços) que são administradas por uma mesma **entidade** (provedor, empresa, universidade, governo).
- Cada AS tem sua **política de roteamento** (decide como enviar e receber dados para a Internet).

---

## 🔑 Identificação

- Cada AS recebe um **número único** chamado **ASN (Autonomous System Number)**.
- Exemplo:
    - Google → AS15169
    - Cloudflare → AS13335
    - LACNIC (Latino América) → distribui números de ASN na região.

---

## 📡 Para que serve

- Facilita a comunicação entre grandes redes na Internet.
- É usado em **roteamento BGP (Border Gateway Protocol)**.
- Permite saber **quem é o dono de um bloco de IPs** e como ele se conecta ao resto da Internet.

---

## 🔍 Como consultar

- **Whois ASN**: mostra dono e faixa de IPs.
- Exemplo usando [[Whois]]:

```bash
whois -h whois.cymru.com " -v 8.8.8.8"
```
- Isso retorna o **ASN do IP 8.8.8.8** (Google).

---

## ⚡ Em resumo

Um **AS = rede grande controlada por uma organização**.  
O **ASN = número que identifica essa rede**.  
Usado em **roteamento BGP e investigações de IPs/domínios**.

---

# 🔑 Meu ASN é:

> **AS262509** – CONEXAO - TELECOM. E INTERNET LTDA
