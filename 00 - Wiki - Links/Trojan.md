---
tags:
  - trojan
  - cavalodetroia
  - malware
---
---
# 🐴 Trojan (Cavalo de Troia)

-> Um **Trojan** é um **[[malware]] disfarçado de software legítimo**.

- Não se replica sozinho (diferente do vírus e worm).
- Precisa que o usuário **baixe/execute voluntariamente**.
- Após ativado, abre portas para invasores → roubo de dados, instalação de outros malwares, controle remoto.

---
## 🔹 Características principais

- Usa **engenharia social** → se passa por algo útil (jogo, app, atualização).
- **Não se multiplica sozinho**.
- Permite instalação de **[[backdoors]]** para acesso remoto.
- Muito usado em ataques **APT (Advanced Persistent Threats)**.

---
## 🔹 Exemplos práticos

- **Zeus Trojan (2007)** → famoso por roubo de credenciais bancárias.
- **Emotet** → começou como Trojan bancário, depois evoluiu para **loader de ransomware**.
- **SpyEye** → espionava e roubava informações financeiras.
- **FakeAV** → programas que simulavam antivírus e pediam dinheiro para "limpar" vírus inexistentes.

---
## 🔹 Sintomas comuns

- Programas abrindo sozinhos.
- Processos desconhecidos consumindo recursos.
- Alterações em navegador (páginas redirecionadas, pop-ups).
- Credenciais e arquivos sendo exfiltrados.

---
## 🔹 Remoção / Mitigação

✅ **Curto prazo**

- Escanear o sistema com **antivírus/antimalware confiável**.
- Encerrar processos suspeitos e remover da inicialização.
- Desconectar da internet para evitar exfiltração.

✅ **Casos graves**

- Restaurar backup limpo.
- Reinstalar o sistema.

✅ **Prevenção**

- Não baixar programas de fontes duvidosas.
- Usar **antivírus e firewall** ativos.
- Treinar usuários contra engenharia social.


---
## 🔹 Exemplo prático de detecção no Linux

Listando conexões ativas para identificar se um **Trojan abriu backdoor**:
```bash
netstat -tunap
```

→ Se aparecer uma porta estranha aberta para um IP desconhecido → possível Trojan.

----
⚠️ **Resumo rápido para prova:**

- Trojan → precisa ser executado pelo usuário.
- Não se replica sozinho.
- Exemplos: Zeus, Emotet, FakeAV.
- Função: roubar dados, abrir backdoors, espionagem.
- Prevenção: antivírus, firewall, evitar engenharia social.