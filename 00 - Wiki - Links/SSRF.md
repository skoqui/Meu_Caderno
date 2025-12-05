---
tags:
  - ssrf
  - xss
  - csrf
---
---

# 🕵️ SSRF (Server-Side Request Forgery)

## 📘 O que é
**SSRF (Falsificação de Requisição do Lado do Servidor)** é um tipo de vulnerabilidade onde um atacante consegue fazer **o servidor de um site** enviar requisições HTTP (ou outras) para destinos que ele escolher — normalmente locais internos da rede ou serviços que o servidor consegue acessar, mas que o usuário comum não alcançaria diretamente.

---

## 💡 Exemplo fácil de entender
Um site permite que o usuário informe uma URL para buscar uma imagem ou conteúdo externo (por exemplo, um avatar).  
Se essa entrada não for validada, um invasor pode colocar uma URL que aponte para um serviço **interno** (como um serviço de administração, banco de dados interno, ou um endpoint de metadados na nuvem).  
O servidor, confiando na URL enviada, faz a requisição — e pode **vazar informações sensíveis** ou executar ações indesejadas.

Exemplo conceitual:
```html
<!-- usuário envia: url_imagem = "http://servico-interno/recursos" -->
<img src="{{ url_imagem }}" />
```

## ⚠️ Por que é perigoso
- O atacante pode acessar **recursos internos** que não são públicos.
- Pode **vazar segredos** (tokens, credenciais, metadados da nuvem).
- Pode usar o servidor como **pivot** para mapear a rede interna.
- Em casos graves, pode levar a execução remota ou divulgação de dados sensíveis.

---

## 🔍 Como o ataque funciona (visão simplificada)
1. O aplicativo aceita uma URL ou endereço e o servidor faz a requisição.
2. O atacante fornece uma URL apontando para um recurso interno (não acessível externamente).
3. O servidor busca esse recurso e retorna os dados (ou executa a ação).
4. O atacante obtém informação/efeito que deveria ser inacessível.

---

## 🛡️ Mitigações (como prevenir SSRF)

### 1. Não buscar URLs arbitrárias
- Evite permitir que usuários informem URLs que o servidor deva buscar. Sempre que possível, **não** faça fetch de endpoints passados pelo usuário.

### 2. Validação e lista branca (whitelist)
- Se for necessário aceitar URLs, **usar whitelist** de domínios/hosts permitidos (ex.: `*.meudominio.com`).
- Rejeitar IPs privados e loopback (endereços `10.*`, `192.168.*`, `127.0.0.1`, `169.254.*` etc.) — faça isso com cuidado e camadas extras.

### 3. Resolver DNS e verificar IP final
- Ao receber uma URL, resolva o nome para IP e valide que o IP pertence a uma faixa permitida **antes** de conectar.
- Cuidado com redirecionamentos: valide o IP final após todos os redirecionamentos.

### 4. Limitar o que o servidor pode acessar (networking)
- Isolar serviços críticos em sub-redes que a aplicação não precise acessar.
- Usar firewalls ou regras de saída (egress) para bloquear acessos não autorizados a rede interna/metadados.

### 5. Timeouts e tamanho de resposta
- Definir timeouts curtos e limites de tamanho para evitar abusos (flood ou exfiltração por streams longos).

### 6. Proxies de saída controlados
- Fazer requisições externas apenas através de um proxy que valida e registra todas as saídas (e aplica políticas).

### 7. Menos privilégio
- Serviços que fazem requisições externas não devem ter credenciais amplas; use credenciais de menor privilégio.

---

## 🔁 Diferença rápida entre SSRF e CSRF
- **SSRF**: o **servidor** é induzido a fazer requisições (ataque contra a infraestrutura do servidor).
- **CSRF**: o **navegador do usuário** é induzido a fazer requisições autenticadas (ataque contra a sessão do usuário).    

---

## 🧠 Resumo rápido
- 🎯 **Objetivo:** Fazer o servidor acessar recursos que não deveriam ser públicos.
- 🔎 **Risco principal:** Vazamento de dados internos/credenciais e reconhecimento da rede.
- 🛡️ **Defesa:** Evitar fetch de URLs arbitrárias, usar whitelist, validar IPs e isolar rede.