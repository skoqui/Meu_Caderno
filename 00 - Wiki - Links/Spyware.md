---
tags:
  - spyware
  - malware
---
---
# 👀 Spywares

→ É um tipo de [[malware]] criado para **espionar o usuário sem consentimento.**

- Coleta informações pessoais → senhas, e-mails, hábitos de navegação, dados bancários.
- Trabalha **em segundo plano**, sem chamar atenção.
- Pode ser instalado junto com softwares gratuitos, anexos de e-mail, ou via vulnerabilidades.

---
## 🔹 Características principais

- Atua de forma **silenciosa** e persistente.
- Se foca em **roubo de informações sensíveis**.
- Pode modificar o navegador (cookies, redirecionamentos, anúncios).
- Alguns permitem até **captura de tela ou keylogging**.

---
## 🔹 Exemplos práticos

- **CoolWebSearch** → redirecionava navegadores para sites maliciosos.
- **FinFisher** → usado em espionagem governamental.
- **DarkHotel** → spyware sofisticado usado em espionagem de executivos em hotéis.
- **Keyloggers** → registradores de teclas que capturam credenciais.

---
## 🔹 Sintomas comuns

- Navegador abrindo pop-ups sem controle.
- Mudança da página inicial ou mecanismo de busca.
- Lentidão anormal no sistema.
- Programas desconhecidos rodando em segundo plano.

---
## 🔹 Remoção / Mitigação

✅ **Curto prazo**

- Usar **antimalware específico para Spyware** (Spybot, Malwarebytes).  
- Restaurar navegador para as configurações padrão.
- Revogar credenciais (caso tenha havido roubo de senhas).

✅ **Casos graves**

- Restaurar sistema a um ponto limpo.
- Reinstalação completa, se persistente.

✅ **Prevenção**

- Evitar download de software pirata.
- Cuidado ao instalar programas gratuitos (sempre usar opção _instalação personalizada_ para evitar bundles).
- Manter sistema e navegador atualizados.

---
## 🔹 Exemplo prático de detecção no Windows

Verificando processos ocultos (Spyware geralmente roda disfarçado):
```powershell
Get-Process | Where-Object { $_.Path -like "*AppData*" }
```

(Muitos spywares se instalam no diretório _AppData_ por ser menos monitorado.)

---
⚠️ **Resumo rápido para prova:**

- Spyware = malware espião, coleta dados sem permissão.
- Ex.: [[Keylogger]], FinFisher, CoolWebSearch.
- Sintomas: lentidão, pop-ups, navegador alterado.
- Prevenção: evitar pirataria, usar antimalware, atualizar sistema.