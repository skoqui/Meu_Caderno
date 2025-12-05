---
tags:
  - antivirus
  - antivírus
---
---
# 🛡️ Antivírus

-> Um **antivírus** é um software que **detecta, previne e remove [[malware|malwares]]** do sistema.

- Monitora arquivos, processos e tráfego de rede em tempo real.
- Pode usar **assinaturas**, **heurísticas** e **análise comportamental** para detectar ameaças.
- Essencial para **proteção proativa** em desktops, servidores e dispositivos móveis.

---
### 🔹 Características principais

- **Proteção em tempo real** → impede execução de malware conhecido.
- **Scan manual ou programado** → verifica arquivos e diretórios específicos.
- **Atualização constante de definições** → garante que novas ameaças sejam reconhecidas.
- **Logs e alertas** → registra tentativas de ataque e ações do antivírus.

---
### 🔹 Exemplos práticos

- **[[Windows Defender]]** → antivírus nativo do Windows, atualizado automaticamente.
- **Kaspersky, Bitdefender, ESET** → antivírus comerciais com recursos avançados.
- **ClamAV** → antivírus open-source para Linux, também usado em servidores de e-mail.

---
### 🔹 Funcionalidades importantes

- **Detecção baseada em assinatura** → compara arquivos com banco de dados de vírus conhecidos.
- **Heurística / análise comportamental** → identifica malware novo ou desconhecido.
- **Quarentena** → isola arquivos suspeitos para análise posterior.
- **Proteção de e-mail e navegador** → evita phishing e malwares baixados da internet.

----
### 🔹 Exemplos de comandos / uso prático

**Linux (ClamAV)**  
Scan de pasta inteira:
```bash
clamscan -r /home/usuario
```

Atualizar banco de vírus:
```bash
freshclam
```


**Windows (PowerShell / Windows Defender)**
Scan completo:
```powershell
Start-MpScan -ScanType FullScan
```

Scan rápido:

```powershell
Start-MpScan -ScanType QuickScan
```

---
### 🔹 Prevenção e boas práticas

- Manter antivírus sempre **atualizado**.
- Configurar **scans periódicos**.
- Evitar baixar arquivos suspeitos e usar sites confiáveis.
- Combinar com **firewall**, **IDS/IPS** e boas práticas de segurança.

---
⚠️ **Resumo rápido para prova:**

- Antivírus = software que detecta e remove malware.
- Usa **assinaturas**, **heurística** e **análise comportamental**.
- Exemplos: Windows Defender, Kaspersky, ClamAV.
- Prevenção: atualização constante, scans periódicos, quarentena de arquivos suspeitos.