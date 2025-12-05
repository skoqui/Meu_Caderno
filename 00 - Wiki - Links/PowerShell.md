---
tags:
  - powershell
  - cmd
---
---
# ⚡ PowerShell – Comandos Úteis

### 🔹 Introdução

PowerShell é um **shell e linguagem de scripts da Microsoft** usada para administração de sistemas, automação e análise.

- Pode ser usado no **Windows, Linux e macOS**.
- Ideal para **gerenciamento de arquivos, processos, rede e segurança**.

---
### 🔹 Comandos básicos de arquivos e pastas

|Comando|Função|
|---|---|
|`Get-ChildItem` ou `ls`|Lista arquivos e pastas no diretório atual|
|`Set-Location` ou `cd`|Muda de diretório|
|`Copy-Item`|Copia arquivos ou pastas|
|`Move-Item`|Move arquivos ou pastas|
|`Remove-Item`|Remove arquivos ou pastas|
|`New-Item`|Cria arquivo ou pasta nova|

----
### 🔹 Comandos de processos e serviços

|Comando|Função|
|---|---|
|`Get-Process`|Lista processos em execução|
|`Stop-Process -Id <PID>`|Encerra processo pelo PID|
|`Start-Service <Nome>`|Inicia serviço|
|`Stop-Service <Nome>`|Para serviço|
|`Get-Service`|Lista todos os serviços|

---
### 🔹 Comandos de rede

|Comando|Função|
|---|---|
|`Test-Connection <host>`|Testa ping para um host|
|`Get-NetIPConfiguration`|Mostra configuração de rede|
|`Get-NetTCPConnection`|Lista conexões TCP ativas|
|`netstat -ano`|Lista conexões e PID dos processos correspondentes|

----
### 🔹 Comandos de segurança / antivírus

|Comando|Função|
|---|---|
|`Get-ComputerInfo`|Mostra informações detalhadas do sistema|
|`Get-EventLog -LogName System -Newest 10`|Mostra últimos 10 eventos do log do sistema|
|`Get-History`|Lista comandos usados na sessão atual|

---
### 🔹 Comandos de sistema e informações

| Comando                                   | Função                                      |
| ----------------------------------------- | ------------------------------------------- |
| `Get-ComputerInfo`                        | Mostra informações detalhadas do sistema    |
| `Get-EventLog -LogName System -Newest 10` | Mostra últimos 10 eventos do log do sistema |
| `Get-History`                             | Lista comandos usados na sessão atual       |

---
### 🔹 Campo para novos comandos

| Comando | Função |
| ------- | ------ |
|         |        |
