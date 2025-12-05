---
tags:
  - malware
  - backdoor
---
---
# 🗝️ Backdoor

-> Um **Backdoor** é um **acesso oculto ou não autorizado** a um sistema ou aplicação, criado por invasores ou até por softwares legítimos (em alguns casos).

- Permite ao atacante **contornar autenticações e controles de segurança**.
- Pode ser **implantado via [[malware]]** ([[Trojan]], [[Rootkit]]) ou manualmente pelo invasor.

----
### 🔹 Características principais

- Mantém **acesso remoto persistente** ao sistema.
- Pode executar comandos, instalar malware adicional ou roubar dados.
- Normalmente **não é visível ao usuário**.
- Facilita ataques subsequentes (ex.: espionagem, [[botnet]], [[ransomware]]).

---
### 🔹 Exemplos práticos

- **NetBus / Back Orifice (anos 90)** → software que permitia controle remoto de PCs Windows.
- **Sub7** → backdoor popular nos anos 2000 para controle remoto.
- **Trojan moderno** → muitos Trojans instalam backdoors em sistemas corporativos.
- **Web backdoors** → scripts escondidos em sites comprometidos que dão acesso ao servidor.

---
### 🔹 Sintomas comuns

- Sistema aparentemente normal, mas tráfego de rede suspeito.
- Programas abrindo sozinhos ou arquivos alterados.
- Acesso remoto não autorizado detectado em logs.
- Alteração de arquivos críticos do sistema sem consentimento.

---
### 🔹 Remoção / Mitigação

✅ **Curto prazo**

- Escanear o sistema com antivírus/antimalware atualizado.
- Encerrar processos suspeitos e checar portas abertas (`netstat -ano` / `lsof -i`).
- Remover arquivos suspeitos de inicialização.

✅ **Casos graves**

- Restaurar sistema a partir de backup limpo.
- Reinstalação completa do sistema se houver persistência.

✅ **Prevenção**

- Manter sistema, software e servidores atualizados.
- Monitorar tráfego de rede e logs de autenticação.
- Usar firewall e IDS/IPS.
- Evitar download e execução de programas de fontes desconhecidas.

---
### 🔹 Exemplo prático de detecção no Linux

```bash
sudo netstat -tunap | grep LISTEN
sudo lsof -i
```
Procure por **portas abertas ou conexões estranhas** que não deveriam existir.

### 🔹 Exemplo prático de detecção no Windows

```powershell
netstat -ano | findstr LISTENING
tasklist /svc
```
Verificar processos com conexões suspeitas e serviços desconhecidos.

---
⚠️ **Resumo rápido para prova:**

- Backdoor = acesso oculto e não autorizado ao sistema.
- Ex.: NetBus, Back Orifice, Sub7, web backdoors.
- Sintomas: tráfego suspeito, programas abrindo sozinhos, arquivos alterados.
- Remoção: antivírus, checar portas, reinstalação se necessário.
- Prevenção: atualização, monitoramento de rede, firewall, evitar software suspeito.