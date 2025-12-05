---
tags:
---
---

## DIRB

→ DIRB é uma ferramenta para **enumerar diretórios e arquivos web**, usando listas de palavras (wordlists).  

Funciona de forma similar ao [[fuff|FFUF]], mas é mais simples e focado em **diretórios e arquivos HTTP**.

### → **Como funciona**
- Envia requisições [[HTTP]] substituindo partes da URL pelos itens da wordlist.
- Verifica o **status code** e mostra resultados que existem no servidor.

### → **Comandos comuns**
- Teste básico:
```nginx
dirb http://example.com
```

- Usando uma wordlist específica:
```rb
dirb http://example.com /usr/share/wordlists/dirb/common.txt
```

- Testando HTTPS:
```nginx
dirb https://example.com
```

- Ignorando códigos de erro específicos (ex.: 403):
```nginx
dirb http://example.com -X 403
```

### → **Para que serve**
- Encontrar diretórios e arquivos ocultos.
- Auxiliar na enumeração de aplicações web antes de testes de vulnerabilidade.
- Fácil e rápido para testes iniciais de reconhecimento.