---
tags:
  - Keylogger
---
---
# ⌨️ Keylogger

-> Um **Keylogger** é um tipo de [[malware]] que **registra tudo que o usuário digita** no teclado.

- Pode ser usado para **roubo de senhas, dados bancários, e-mails e mensagens**.
- Pode operar **em segundo plano**, sem que o usuário perceba.
- Pode ser **software ou hardware** (teclado modificado, USB).

---
### 🔹 Características principais

- Invisível ao usuário e [[antivírus]] comuns (em versões avançadas).
- Coleta informações confidenciais digitadas.
- Pode enviar dados para um **servidor remoto** ou armazenar localmente.
- Alguns keyloggers incluem **captura de tela** e monitoramento de aplicativos.

---
### 🔹 Exemplos práticos

- **Zeus Trojan + Keylogger** → usado para roubar credenciais bancárias.
- **Refog Keylogger** → software comercial usado para monitoramento de PCs.
- **Hardware Keyloggers** → pequenos dispositivos conectados entre teclado e PC.

---
### 🔹 Sintomas comuns

- Lentidão ou travamentos ocasionais.
- Arquivos ou logs desconhecidos no sistema.
- Possível envio de e-mails automáticos suspeitos.
- Alteração de comportamento de aplicativos (ex.: login automático estranho).

----
### 🔹 Remoção / Mitigação

✅ **Curto prazo**

- Escanear com **antivírus/antimalware confiável**.
- Remover softwares suspeitos de inicialização.
- Monitorar conexões de rede suspeitas (`netstat -ano`).

✅ **Casos graves**

- Restaurar backup limpo ou reinstalar o sistema.

✅ **Prevenção**

- Evitar downloads e anexos suspeitos.
- Usar **teclados virtuais** para senhas críticas (em bancos).
- Manter antivírus/EDR ativo.

---
### 🔹 Exemplo prático de detecção no Windows

```powershell
Get-Process | Where-Object { $_.Path -like "*AppData*" }
```

(Muitos keyloggers se escondem no diretório AppData.)

---
⚠️ **Resumo rápido para prova:**

- Keylogger = malware que registra teclas digitadas.
- Pode ser software ou hardware.
- Ex.: Zeus, Refog.
- Sintomas: lentidão, arquivos suspeitos, tráfego estranho.
- Prevenção: antivírus, cuidado com downloads, teclado virtual em casos críticos.