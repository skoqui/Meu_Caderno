---
tags:
  - rootkit
  - malware
---
---
# 🕳️ Rootkits

-> Um **Rootkit** é um tipo de [[malware]] projetado para **ocultar sua presença** e/ou de outros malwares no sistema.

- Normalmente dá **acesso privilegiado** (root/administrador) ao invasor.
- Pode se instalar em **[[kernel]]**, drivers ou espaço de usuário.
- Muito difícil de detectar, pois se **esconde de [[antivírus]] e ferramentas comuns**.

---
### 🔹 Características principais

- Permite **controle remoto** do sistema.
- Esconde **processos, arquivos, serviços e portas de rede**.
- Pode instalar **backdoors, keyloggers ou outros malwares**.
- Persistência alta → continua ativo mesmo após reinicialização.

---
### 🔹 Exemplos práticos

- **Sony BMG Rootkit (2005)** → instalado via CDs de música, escondia arquivos do sistema.
- **Stuxnet Rootkit** → malware industrial com componentes rootkit para esconder suas ações.
- **TDSS / TDL-4** → rootkit usado para criar botnets, muito difícil de remover.

---
### 🔹 Sintomas comuns

- Sistema lento ou instável sem motivo aparente.
- Ferramentas de segurança não conseguem detectar certos processos.
- Arquivos ou pastas desaparecem ou não podem ser apagados.
- Atividade de rede suspeita não identificada por antivírus.

---
### 🔹 Remoção / Mitigação

✅ **Curto prazo**

- Usar scanners especializados:
    - Linux: `rkhunter`, `chkrootkit`
    - Windows: GMER, Malwarebytes Anti-Rootkit
- Verificar logs de inicialização e processos ocultos.


✅ **Casos graves**

- Boot via **rescue disk** ou live CD para limpar o sistema.
- Reinstalação completa se persistente.

✅ **Prevenção**

- Manter sistema e software atualizados.
- Evitar execução de programas de fontes desconhecidas.
- Monitorar integridade do kernel e arquivos críticos do sistema.

---
### 🔹 Exemplo prático de detecção no Linux

```bash
sudo chkrootkit
sudo rkhunter --check
```

### 🔹 Exemplo prático de detecção no Windows

- Usar GMER → escaneia drivers e processos ocultos.
- Monitorar portas com `netstat -ano` para conexões suspeitas.

---
⚠️ **Resumo rápido para prova:**

- Rootkit = malware que se esconde e mantém acesso privilegiado.
- Ex.: Sony BMG, Stuxnet, TDSS.
- Sintomas: processos invisíveis, arquivos ocultos, rede suspeita.
- Remoção: scanners especializados, rescue disk, reinstalação completa.