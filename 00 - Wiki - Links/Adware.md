---
tags:
  - adware
  - malware
---
---
# 📢 Adwares

→ É um software malicioso ou indesejado ([[malware]]) que **exibe anúncios** automaticamente no computador ou navegador.

- Geralmente vem **bundled** com programas gratuitos ou piratas.
- Diferente de spyware, normalmente **não rouba dados**, mas pode coletar hábitos de navegação para segmentação de anúncios.

---
### 🔹 Características principais

- Mostra **pop-ups e banners** constantemente.
- Pode redirecionar o navegador para sites maliciosos ou de propaganda.
- Às vezes acompanha **spyware** para coleta de dados.
- Reduz desempenho do sistema e da internet.

---
### 🔹 Exemplos práticos

- **Conduit** → barra de ferramentas que redirecionava pesquisas.
- **Bonanza Deals** → exibia anúncios invasivos no navegador.
- **Fireball** → infectava milhões de PCs para coletar tráfego e gerar receita com publicidade.

---
### 🔹 Sintomas comuns

- Pop-ups e anúncios mesmo sem abrir navegador.
- Alteração da página inicial ou mecanismo de busca padrão.
- Lentidão no sistema ou no navegador.
- Instalação de programas desconhecidos sem permissão.

---
### 🔹 Remoção / Mitigação

✅ **Curto prazo**

- Remover programas suspeitos via **Painel de Controle / Configurações**.
- Restaurar navegador para **configurações padrão**.
- Usar **antimalware específico** (Malwarebytes, AdwCleaner).

✅ **Casos graves**

- Reinstalação do navegador ou do sistema se persistente.

✅ **Prevenção**

- Evitar softwares piratas e downloads suspeitos.
- Optar sempre por **instalação personalizada** para desmarcar extras.
- Manter [[antivírus]]/antimalware ativo.

---
### 🔹 Exemplo prático de detecção no Windows

Listando programas instalados recentemente (possíveis adwares):
```powershell
Get-WmiObject -Class Win32_Product | Sort-Object InstallDate
```

---
⚠️ **Resumo rápido para prova:**

- Adware = exibe anúncios indesejados.
- Geralmente vem junto com software gratuito ou pirata.
- Sintomas: pop-ups, redirecionamentos, lentidão.
- Remoção: antimalware, remover programas suspeitos, restaurar navegador.