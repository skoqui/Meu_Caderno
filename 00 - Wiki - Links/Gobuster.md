---
tags:
---
---
# 🔐 Gobuster

## O que é?
O **Gobuster** é uma ferramenta de **enumeração de diretórios, arquivos e subdomínios** em sites.  
Ele funciona usando **listas (wordlists)** para tentar acessar caminhos específicos em um servidor web ou descobrir subdomínios.

> Pense no Gobuster como alguém tentando abrir **todas as portas e portas secretas** de um site para ver o que existe.

---

## Funções principais
- **Directory/Files**: descobre diretórios e arquivos escondidos em um site  
- **DNS/Subdomain**: encontra subdomínios ativos de um domínio  
- **Virtual Host**: testa nomes de host virtuais configurados no servidor  

---

## Exemplo de uso - Diretórios
```bash
gobuster dir -u https://exemplo.com/ -w wordlist.txt
```
- `dir` → modo diretórios
- `-u` → URL alvo
- `-w` → wordlist (lista de caminhos possíveis)

---

## Exemplo de uso - [[Subdomínio|Subdomínios]]
```bash
gobuster dns -d exemplo.com -w subdominios.txt
```
- `dns` → modo subdomínios
- `-d` → domínio alvo
- `-w` → lista de subdomínios possíveis



---

## Testar Virtual Host com Gobuster

↳ Quando você quer testar **[[Subdomínio|subdomínios]], vhosts ou diretórios** em um servidor local ou remoto, às vezes o DNS público não aponta para o IP que você quer testar.

- Nesse caso, você adiciona entradas no **arquivo `hosts`** para mapear domínios/subdomínios para um IP específico.
- Depois, o **[[00 - Wiki - Links/Gobuster]] pode usar esse host** para fazer os testes.

**`/etc/hosts`**
```
192.168.0.50    teste.exemplo.com
192.168.0.50    admin.exemplo.com
```


**`Gobuster`**
```bash
gobuster vhost -u http://192.168.0.50 -w vhosts.txt -H "Host: teste.exemplo.com"
```
- `vhost` → modo Virtual Host
- `-u` → IP do servidor
- `-w` → wordlist de possíveis nomes de host
- `-H "Host: ..."` → cabeçalho HTTP `Host` com o domínio/subdomínio que você adicionou no arquivo hosts

> O cabeçalho `Host` é essencial, pois o servidor web usa ele para servir o vhost correto.


