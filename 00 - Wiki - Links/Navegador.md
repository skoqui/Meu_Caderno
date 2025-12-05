---
tags:
  - navegador
  - browser
  - web
---
---

# Como funciona um navegador (explicado passo a passo)

### 1. **Você digita uma URL**
Exemplo: `https://google.com`.  
O navegador:
- Verifica se o endereço é válido.
- Faz a **requisição [[HTTP]]/[[HTTPS]]** para o servidor daquele site.

### 2. **Recebe a resposta do servidor**
O servidor manda de volta:
- Um arquivo **[[HTML]]** (estrutura da página).
- Arquivos **CSS** (estilos).
- Arquivos **JavaScript** (interatividade).
- Imagens, vídeos, ícones etc.

### **Interpretação do HTML**
O navegador lê o [[HTML]] **linha por linha** e constrói o **DOM (Document Object Model)**:
- O DOM é uma árvore com todos os elementos da página.
- Exemplo: `<body><h1>Olá</h1></body>` → O navegador cria um "nó" `<body>` com um filho `<h1>` que contém "Olá".

### **Interpretação do CSS**
- O navegador pega o **CSS** e aplica no DOM.
- Ele calcula **cores, tamanhos, posições, fontes, margens**.
- Esse processo se chama **Render Tree** (árvore de renderização).

### **Execução do JavaScript**
- O navegador tem um **motor JavaScript** (ex.: V8 do Chrome, SpiderMonkey do Firefox).
- Esse motor lê e executa os scripts.
- É aqui que ataques como **[[XSS]]** acontecem → o navegador não diferencia JavaScript "bom" do "malicioso", ele só executa.

### **Renderização final**
O navegador junta tudo (DOM + CSSOM + JS) e desenha os **pixels na tela**.  
Esse processo tem 3 fases:
1. **Layout** → Calcula posição dos elementos.
2. **Paint** → Desenha os elementos.
3. **Composite** → Monta os layers na tela.

### **Controle de segurança (SOP, Cookies, Sandbox)**
- **[[SOP|SOP (Same-Origin Policy)]]:** Impede que scripts de outro site acessem dados da sua aba.
- **[[Cookies]]:** Guardam sessões e preferências.
- **Sandbox do navegador:** Isola abas umas das outras.

### **Resumo rápido:**
1. Você pede → navegador faz requisição.
2. Servidor responde com HTML, CSS, JS.
3. Navegador monta o DOM (estrutura).
4. Aplica CSS (aparência).
5. Executa JS (interatividade).
6. Renderiza tudo na tela.
7. Mantém regras de segurança (SOP, cookies, sandbox).