---
tags:
  - antivirus
  - antivírus
  - windows
  - windowsdefender
---
---
# 🛡️ Windows Defender

-> O **Windows Defender** é o **[[antivírus]] nativo do Windows** (também chamado Microsoft Defender).

- Protege contra **vírus, spyware, ransomware e outros malwares**.
- Integrado ao sistema, atualizado automaticamente via Windows Update.
- Oferece **proteção em tempo real** e **scan programado**.

---
### 🔹 Características principais

- **Proteção em tempo real** → bloqueia ameaças antes que causem dano.
- **Atualizações automáticas** → banco de assinaturas atualizado pelo Windows Update.
- **Quarentena** → isola arquivos suspeitos para análise posterior.
- **Monitoramento de comportamento** → detecta malware novo ou desconhecido.
- **Proteção contra ransomware** → pastas controladas com acesso restrito.

---
### 🔹 Funcionalidades importantes

- **Scan rápido, completo ou personalizado** → escaneia arquivos e pastas.
- **Proteção de nuvem** → envia informações sobre ameaças suspeitas para análise Microsoft.
- **Relatórios e logs** → histórico de detecções e ações realizadas.

---
### 🔹 Comandos práticos ([[PowerShell]])

Scan rápido:
```powershell
Start-MpScan -ScanType QuickScan
```

Scan completo:
```powershell
Start-MpScan -ScanType FullScan
```

Atualizar definições de vírus:
```powershell
Update-MpSignature
```

Ver status de proteção:
```powershell
Get-MpComputerStatus
```

---
### 🔹 Prevenção e boas práticas

- Manter Windows Update ativo para atualizações de segurança e definições.
- Não desativar proteção em tempo real.
- Usar junto com **firewall do Windows** e boas práticas de segurança.
- Realizar scans periódicos em arquivos baixados ou unidades externas.

---
⚠️ **Resumo rápido para prova:**

- Windows Defender = antivírus nativo do Windows.
- Protege contra vírus, malware e ransomware.
- Scan rápido, completo e atualização automática.
- Comandos úteis: `Start-MpScan`, `Update-MpSignature`, `Get-MpComputerStatus`.