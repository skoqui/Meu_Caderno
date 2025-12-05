---
tags:
  - ransomware
  - malware
---
---
# 🔒 Ransomwares

→ **Ransomware** é um tipo de [[malware]] que **sequestra dados do usuário**.

- Ele criptografa arquivos ou bloqueia o acesso ao sistema.
- O atacante exige **resgate em dinheiro (geralmente criptomoedas)** para liberar os arquivos.
- Mesmo pagando, **não há garantia** de recuperação.

---
### 🔹 Características principais

- Explora falhas, phishing ou downloads maliciosos.
- Usa algoritmos fortes de criptografia.
- Geralmente se espalha por e-mail com anexos falsos, macros em documentos, ou exploits em serviços expostos.

---
### 🔹 Exemplos práticos

- **WannaCry (2017)** → atingiu hospitais, empresas e governos no mundo inteiro explorando falha SMB (EternalBlue).
- **Petya/NotPetya (2017)** → além de criptografar, sobrescrevia o MBR, impossibilitando inicialização.
- **LockBit (2020+)** → grupo ativo que sequestra dados corporativos e aplica dupla extorsão (ameaça de vazamento).

---
### 🔹 Sintomas comuns

- Arquivos com extensões alteradas (.locked, .cry, etc).
- Mensagem de resgate em pop-up ou arquivo de texto.
- Impossibilidade de abrir documentos, fotos e programas.
- Computador funcionando, mas com arquivos inacessíveis.

---
### 🔹 Remoção / Mitigação

✅ **Curto prazo**

- Desconectar da rede imediatamente (evita propagação lateral).
- Não pagar o resgate → incentiva ataques e não garante retorno.
- Usar ferramentas de descriptografia (quando disponíveis no site **No More Ransom**).

✅ **Casos graves**

- Restaurar backups íntegros e limpos.
- Reinstalar o sistema do zero se não houver backups.

✅ **Prevenção**

- **Backup offline** atualizado.
- Atualizações de segurança sempre aplicadas.
- Não abrir anexos suspeitos.    
- Usar antivírus e EDR (Endpoint Detection & Response).

---
### 🔹 Exemplo prático de proteção em Linux

Bloqueando [[SMB]] vulnerável (porta usada no WannaCry):
```bash
sudo ufw deny 445/tcp
```

---
⚠️ **Resumo rápido para prova:**

- Ransomware = sequestro de dados + pedido de resgate.
- Ex.: WannaCry, Petya, LockBit.
- Sintomas: arquivos criptografados, mensagem de resgate.
- Prevenção: backup, patch, segurança de e-mail.
- Resposta: isolar, não pagar, tentar descriptografar com ferramentas confiáveis.