---
tags:
  - python
  - python3
  - python3/libs
---
---
# 🛡️ Bibliotecas Python em Cibersegurança

## 📡 **Redes**

### 🔹 `socket`

- **O que faz:** permite criar conexões entre computadores.
- Com ele você consegue **falar diretamente com serviços de rede** (como servidores web, FTP, SSH, etc).
- É a base para criar **scanners de porta**, **backdoors** ou até **sniffers básicos**.

```python
import socket

# Criando um cliente que se conecta a um site
s = socket.socket()
s.connect(("example.com", 80))  # conecta na porta 80 (HTTP)
s.send(b"GET / HTTP/1.1\r\nHost: example.com\r\n\r\n")  # manda requisição
print(s.recv(1024).decode())  # recebe resposta
```
📌 **Resumo:** mexe diretamente com portas e protocolos de rede.

---
### 🔹 `scapy`

- **O que faz:** biblioteca avançada para **enviar, receber e modificar pacotes de rede**.
- Diferente do `socket`, você controla o **pacote inteiro** (IP, TCP, UDP, ICMP, etc).
- Com ele, você pode fazer **sniffing (escutar pacotes)**, **criar pacotes falsos** (como ICMP, ARP spoofing) e até testar **IDS/IPS**.

```python
from scapy.all import *

# Enviar um ping
pkt = IP(dst="8.8.8.8")/ICMP()
send(pkt)

# Escutar 3 pacotes ICMP
sniff(filter="icmp", count=3, prn=lambda x: x.summary())
```
📌 **Resumo:** ferramenta poderosa de análise de tráfego de rede.

---
## 💻 **Sistema Operacional**

### 🔹 `os`

- **O que faz:** interação básica com o sistema (arquivos, pastas, comandos).
- Você pode **listar arquivos**, **pegar o diretório atual**, **criar pastas**, **executar comandos do SO**.

```python
import os

print(os.name)       # nt (Windows) ou posix (Linux)
print(os.getcwd())   # mostra diretório atual
os.system("ls -la")  # executa comando do sistema
```
📌 **Resumo:** mexe com arquivos e executa comandos simples.

---
### 🔹 `subprocess`

- **O que faz:** parecido com o `os.system`, mas **mais poderoso e seguro.**
- Você consegue **capturar a saída de um comando, passar parâmetros e até simular um shell.**

```python
import subprocess

# Executando um comando e capturando a saída
result = subprocess.run(["ls", "-la"], capture_output=True, text=True)
print(result.stdout)
```
📌 **Resumo:** usado em **scripts forenses** e **automação de exploits**.

---
## 🔑 **Criptografia & Hashes**

### 🔹 `hashlib`

- **O que faz:** cria **hashes** (MD5, SHA1, SHA256, etc).
- Hash = impressão digital de dados (muito usado para senhas e integridade).
- Em DFIR, usamos para verificar se um arquivo foi alterado.

```python
import hashlib

data = b"senha123"
print(hashlib.md5(data).hexdigest())     # MD5
print(hashlib.sha256(data).hexdigest())  # SHA256
```
📌 **Resumo:** transforma qualquer dado em uma **assinatura única**.

---
### 🔹 `cryptography`

- **O que faz:** implementa **criptografia real** (simétrica e assimétrica).
- Diferente do `hashlib` (que só gera hashes), aqui você pode **criar chaves, criptografar e descriptografar mensagens**.

```python
from cryptography.fernet import Fernet

# Criando uma chave
key = Fernet.generate_key()
cipher = Fernet(key)

# Criptografando
token = cipher.encrypt(b"Segredo")
print(token)

# Descriptografando
print(cipher.decrypt(token))
```
📌 **Resumo:** usado em **malware, ransomware, segurança de dados**.

---
## 🌐 **Web**

### 🔹 `requests`

- **O que faz:** facilita o envio de requisições HTTP/HTTPS.
- Usado em **web hacking**, **scraping**, **brute force**, **coleta de informações**.
- Muito mais simples que `socket` para trabalhar com web.

```python
import requests

r = requests.get("https://httpbin.org/get")
print(r.status_code)  # código da resposta
print(r.text)         # conteúdo da resposta
```
📌 **Resumo:** comunicação com sites (GET, POST, login, scraping).

---
## 📋 **Logs & Evidências**

### 🔹 `logging`

- **O que faz:** cria e gerencia **logs** dentro do seu programa.
- Essencial para DFIR e auditoria, pois você precisa **registrar evidências**.

```python
import logging

logging.basicConfig(filename="log.txt", level=logging.INFO)
logging.info("Execução iniciada")
logging.warning("Possível problema detectado")
```
📌 **Resumo:** registra **eventos importantes** em arquivos de log.

---
# ⚡ Resumindo (para nunca mais esquecer)

- 📡 **Redes** → `socket` (conexões simples) | `scapy` (controle total dos pacotes).
- 💻 **Sistema** → `os` (comandos básicos) | `subprocess` (comandos avançados).
- 🔑 **Cripto** → `hashlib` (hashes) | `cryptography` (criptografia real).
- 🌐 **Web** → `requests` (requisições HTTP).
- 📋 **Logs** → `logging` (evidências e auditoria).