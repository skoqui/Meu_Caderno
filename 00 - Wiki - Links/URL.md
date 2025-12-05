---
tags:
  - url
  - web
  - site
---
---
# 🌐 URL (Uniform Resource Locator)

## O que é?
Uma **URL** é o **endereço completo de um recurso na internet**, usado para localizar páginas, arquivos, imagens ou qualquer serviço online.  
Ela funciona como um **mapa que indica onde o recurso está e como acessá-lo**.

---

## Estrutura básica de uma URL

```ruby
protocolo://dominio:porta/caminho?query#fragmento
```

| Componente     | Descrição                                                                 | Exemplo                                    |
|----------------|---------------------------------------------------------------------------|--------------------------------------------|
| `protocolo`    | Define o tipo de acesso ao recurso                                        | `http`, `https`, `ftp`                     |
| `dominio`      | Nome do site ou endereço IP                                               | `www.exemplo.com`                           |
| `porta`        | Porta do serviço (opcional, padrão 80 para HTTP, 443 para HTTPS)         | `:8080`                                     |
| `caminho`      | Localização do recurso dentro do site                                     | `/pasta/arquivo.html`                       |
| `query`        | Parâmetros passados para o servidor (opcional)                            | `?id=123&user=admin`                        |
| `fragmento`    | Parte específica de uma página (opcional)                                 | `#secao2`                                   |

---

## Exemplos de URL
- `https://www.exemplo.com/` → página inicial segura (HTTPS, usa o [[TLS]])  
- `http://www.exemplo.com:8080/docs?versao=2#topo` → acesso detalhado com porta, query e fragmento  

---

## Importância
- Localiza **recursos na internet**.  
- Permite **acesso direto a arquivos, APIs e páginas**.  
- Essencial em **OSINT, pentest e DFIR** para mapear sites, subdomínios e endpoints.  

---

## Dicas de análise de URLs
- URLs podem revelar **diretórios, parâmetros e versões de software**.  
- Em investigação de segurança, analisar URLs ajuda a **identificar vulnerabilidades** ou endpoints sensíveis.  
- Ferramentas como **curl, Burp Suite e Wayback Machine** podem testar ou recuperar URLs históricas.
