---
tags:
  - googlehacking
  - googledocks
  - buscadores
---
---
# 🔍 Google Hacking

## O que é?
**Google Hacking** é a prática de usar operadores avançados de busca no Google para **encontrar informações sensíveis ou não indexadas facilmente**, como arquivos, páginas de administração, e-mails expostos e vulnerabilidades em sites.

---

## Principais operadores

| Operador      | Descrição                                                | Exemplo                                     |
|---------------|----------------------------------------------------------|--------------------------------------------|
| `site:`       | Limita a busca a um domínio específico                  | `site:dominio.com`                          |
| `filetype:`   | Busca por tipos específicos de arquivo                  | `filetype:pdf site:dominio.com`            |
| `inurl:`      | Busca palavras dentro da URL                             | `inurl:admin site:dominio.com`             |
| `intitle:`    | Busca palavras no título da página                       | `intitle:"login" site:dominio.com`         |
| `cache:`      | Mostra a versão em cache de uma página                  | `cache:dominio.com`                         |
| `ext:`        | Similar a `filetype`, busca pela extensão do arquivo    | `ext:sql site:dominio.com`                 |
| `-`           | Exclui palavras ou termos da busca                       | `site:dominio.com -www`                     |
| `*`           | Wildcard, substitui qualquer termo                       | `site:*.dominio.com`                        |

---

## Casos de uso
- Encontrar **subdomínios** indexados: `site:*.dominio.com -www`  
- Buscar **arquivos sensíveis**: `filetype:env site:dominio.com`  
- Descobrir **páginas de login/admin**: `inurl:admin site:dominio.com`  
- Localizar **e-mails expostos**: `site:dominio.com "@dominio.com"`  
- Pesquisar **vulnerabilidades conhecidas** em arquivos públicos: `filetype:sql site:dominio.com`  

---

## Observações importantes
- Ferramenta para **OSINT e auditoria**; **não deve ser usada para invadir sistemas** sem autorização.  
- Muitos resultados podem ser **falsos positivos** ou arquivos já antigos.  
- Pode ser combinada com outras técnicas de **DFIR, pentest e investigação digital**.  

---

## Referência
- [Google Hacking Database (GHDB) Oficial](https://www.exploit-db.com/google-hacking-database)
