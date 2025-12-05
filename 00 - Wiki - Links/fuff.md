---
tags:
  - ffuf
  - fuzzing
  - web
---
---

# FFUF (Fuzz Faster U Fool)
 É uma ferramenta para **fuzzing web**, ou seja, testar URLs, diretórios, arquivos, parâmetros e subdomínios automaticamente usando **wordlists**.

### → **Como funciona**

- Substitui a palavra `FUZZ` em URLs ou headers por itens da wordlist.
- Faz requisições HTTP e analisa as respostas.
- Permite filtrar resultados por **status code**, **tamanho da resposta**, ou **palavras-chave**.

### → **Comandos comuns**
- Testar diretórios/arquivos:
```nginx
ffuf -u http://example.com/FUZZ -w /usr/share/wordlists/common.txt
```

- Filtrar respostas com tamanho padrão (ex.: páginas de erro):
```nginx
ffuf -u http://example.com/FUZZ -w wordlist.txt -fs 1495
```

- Testar subdomínios com header Host:
```nginx
ffuf -w subdomains.txt -H "Host: FUZZ.example.com" -u http://example.com
```

### → **Para que serve**
- Descobrir diretórios e arquivos ocultos.
- Encontrar subdomínios.
- Identificar páginas administrativas e endpoints sensíveis.
