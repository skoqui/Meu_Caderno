---
tags:
  - vhost
  - web
---
---

# VHost (Virtual Host)
→ VHost (Virtual Host) é uma técnica que permite **hospedar múltiplos sites em um mesmo servidor/IP**.  
Cada site pode ter seu próprio domínio, mesmo que compartilhem o mesmo endereço IP.

> O caminho do arquivo a ser mudar `/etc/hosts`

### → **Como funciona**
- O servidor web (Apache, Nginx, etc.) lê o **Host header** da requisição [[HTTP]].
- Dependendo do domínio solicitado, ele responde com o site correto.
- Exemplo:
    - `site1.com` → conteúdo do site1
    - `site2.com` → conteúdo do site2

### → **Para que serve em segurança/web**
- Permite descobrir **subdomínios ou sites escondidos** em um mesmo servidor usando técnicas de **VHost enumeration**.
- Útil para testes de penetração e mapeamento de ambiente web.

### → **Ferramentas comuns**
- `vhostscan` → scanner de VHosts.
- `ffuf` ou `dirb` → para descobrir domínios virtuais configurados.
- `Burp Suite` → pode testar VHosts manipulando o header Host.

### → **Cuidados**
- Nem todos os VHosts são ativos ou relevantes para ataques.
- Alguns servidores podem responder com um site padrão se o VHost não existir, dificultando a enumeração.


---

## Dirb([[dirb]])

→ **Comando básico:**

```nginx
dirb http://example.com
```
- Busca diretórios e arquivos comuns usando wordlist padrão.


→ **Usando uma wordlist personalizada:**
```ruby
dirb http://example.com /usr/share/wordlists/dirb/common.txt
```

→ **Para testar em HTTPS:**
```nginx
dirb https://example.com
```

→ **Ignorando códigos de status específicos:**
```nginx
dirb http://example.com -X 403
```
- Ignora respostas HTTP 403 para focar em diretórios acessíveis.


---

## FFUF ([[fuff]])

→ **Comando básico:**

```bash
ffuf -u http://example.com/FUZZ -w /usr/share/wordlists/dirb/common.txt
```
- Substitui `FUZZ` pelos valores da wordlist para encontrar diretórios ou arquivos.

→ **Testando múltiplos códigos de status:**
```bash
ffuf -u http://example.com/FUZZ -w /usr/share/wordlists/dirb/common.txt -fc 404
```
- Filtra respostas 404, mostrando apenas páginas existentes.

→ **Enumerando subdomínios (com DNS resolvers):**
```nginx
ffuf -u https://FUZZ.example.com -w subdomains.txt -H "Host: FUZZ.example.com"
```
- Permite descobrir subdomínios válidos em um domínio.


→ **Comando da aula**
```nginx
ffuf -w subdomains.txt -H "Host: FUZZ.ffuf.me" -u http://ffuf.me # Ou IP
```

`Comando com filtro`
```nginx
ffuf -w subdomains.txt -H "Host: FUZZ.ffuf.me" -u http://ffuf.me -fs 1495
```
Então, ao usar `-fs 1495`, você está dizendo:

- “Ignora todas as respostas que têm 1495 bytes, porque provavelmente são **páginas de erro ou irrelevantes**.”
- Isso ajuda a **destacar apenas os subdomínios que realmente existem e retornam conteúdo diferente**.