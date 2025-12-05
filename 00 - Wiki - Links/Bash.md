---
tags:
  - bash
  - shell
  - comandoslinux
---
---
# 🐧 Linux Bash / Shell – Comandos Úteis

### 🔹 Introdução

O **Bash** (Bourne Again Shell) é o **interpretador de comandos padrão** na maioria das distribuições Linux.

- Usado para **administração de sistemas, automação, análise e scripts**.
- Pode ser combinado com ferramentas nativas como `grep`, `awk`, `sed`, `netstat`, etc.

---
### 🔹 Comandos básicos de arquivos e pastas

|Comando|Função|
|---|---|
|`ls`|Lista arquivos e pastas|
|`cd <diretório>`|Muda de diretório|
|`pwd`|Mostra o diretório atual|
|`cp <origem> <destino>`|Copia arquivos ou pastas|
|`mv <origem> <destino>`|Move ou renomeia arquivos/pastas|
|`rm <arquivo>`|Remove arquivos|
|`mkdir <nome>`|Cria pasta nova|
|`touch <arquivo>`|Cria arquivo vazio|

---
### 🔹 Comandos de processos e serviços

|Comando|Função|
|---|---|
|`ps aux`|Lista todos os processos ativos|
|`top`|Mostra processos em tempo real|
|`kill <PID>`|Mata processo pelo PID|
|`systemctl start <serviço>`|Inicia serviço|
|`systemctl stop <serviço>`|Para serviço|
|`systemctl status <serviço>`|Mostra status de serviço|

### 🔹 Comandos de rede

|Comando|Função|
|---|---|
|`ping <host>`|Testa conectividade|
|`ifconfig` ou `ip a`|Mostra configuração de rede|
|`netstat -tulpn`|Lista conexões e portas abertas|
|`ss -tulw`|Lista sockets abertos|
|`curl <url>`|Testa requisições HTTP|
|`wget <url>`|Baixa arquivos da internet|

---
### 🔹 Comandos de monitoramento e logs

|Comando|Função|
|---|---|
|`df -h`|Mostra uso de disco|
|`du -sh <pasta>`|Mostra tamanho de pasta|
|`free -h`|Mostra uso de memória|
|`tail -f /var/log/syslog`|Mostra logs em tempo real|
|`journalctl -xe`|Logs detalhados do sistema|

---
### 🔹 Comandos de manipulação de texto

| Comando                         | Função                            |
| ------------------------------- | --------------------------------- |
| `cat <arquivo>`                 | Exibe conteúdo de arquivo         |
| `less <arquivo>`                | Exibe arquivo página a página     |
| `grep <termo> <arquivo>`        | Procura termo dentro do arquivo   |
| `awk '{print $1}' <arquivo>`    | Manipulação de colunas do arquivo |
| `sed 's/velho/novo/' <arquivo>` | Substitui texto no arquivo        |

---
### 🔹 Campo para novos comandos

| Comando     | Função                       |
| ----------- | ---------------------------- |
| `nmap -sT ` | Tenta conectar às portas TCP |
|             |                              |

