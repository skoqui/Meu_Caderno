---
tags:
  - vírus
  - malware
---
---
# 🦠 Vírus

-> Vírus é um tipo de **[[Malware]]** **autorreplicante** que depende de um arquivo hospedeiro (ex: `.exe`, `.doc`, `.bat`).
-> Ele **infecta arquivos legítimos** e se espalha quando esses arquivos são executados ou compartilhados.

---
## 🔹Características principais

- Precisa de um **programa hospedeiro**.
- Pode **corromper arquivos**, **roubar dados** ou apenas causar **danos estéticos** (ex: mensagens, telas piscando).
- Muitos usam **engenharia social** para se espalhar (pendrives, e-mails, cracks).

---
## 🔹Exemplos práticos

- **ILOVEYOU (2000)** → vírus em VBScript enviado por e-mail como "carta de amor". Apagava arquivos e roubava senhas.
- **Michelangelo (1992)** → ativava-se no aniversário de Michelangelo (06/03), sobrescrevendo setores do HD.
- **Vírus de macro (Word/Excel)** → infectam documentos `.doc`/`.xls` via macros maliciosas.
- **Vírus de pendrive (autorun.inf)** → copiava-se automaticamente quando o pendrive era inserido.

---
## 🔹 Sintomas comuns

- Lentidão anormal do sistema.
- Arquivos sumindo ou corrompidos.
- Programas abrindo sozinhos.
- Mensagens estranhas na tela.
- Atividade de rede incomum (mesmo sem uso).

---
## 🔹 Remoção / Mitigação

✅ **Curto prazo**

- Desconectar da rede para evitar propagação.
- Rodar um **antivírus atualizado** (ex: Kaspersky, Windows Defender, ClamAV no Linux).
- Usar **scanners online** (ex: VirusTotal).

✅ **Casos graves**

- Bootar via **rescue disk** (antivírus que roda fora do SO).
- Restaurar arquivos de **backup confiável**.
- Em casos extremos → **formatar e reinstalar o sistema**.

✅ **Prevenção**

- Não abrir anexos suspeitos.
- Desativar execução automática de macros e pendrives.
- Manter SO e antivírus atualizados.

---
👉 Exemplo de comando no Linux para verificar com **ClamAV**:

```bash
clamscan -r /home/usuario
```

----
⚠️ **Resumo rápido para prova:**

- Vírus precisa de hospedeiro.
- Infecta arquivos executáveis/documentos.
- Exemplos: ILOVEYOU, Michelangelo, macros do Word.
- Remoção: antivírus, rescue disk, formatação em último caso.