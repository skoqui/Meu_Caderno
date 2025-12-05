---
tags:
  - curl
  - web
---
---
# Comando `curl`

O `curl` serve para fazer **requisições HTTP, HTTPS, FTP** e outros protocolos direto no terminal.
Ele pode **baixar, enviar, testar e inspecionar** dados de servidores.

Ele é um comando [[Bash]]

---

## 📌 Sintaxe básica

```bash
curl [opções] [URL]
```


----

## 🚀 Funções mais usadas

### 1. **Testar se um link responde**

```bash
curl -I https://example.com
```
- `-I` → mostra apenas o **header HTTP** (status, tipo, server, etc.).
- Bom para ver se está `200`, `301`, `404`, etc.


---

### 2. **Seguir redirecionamentos**

```bash
curl -L https://example.com
```
- `-L` → segue redirecionamentos (`301`, `302`).

---

### 3. **Salvar em arquivo**

```bash
curl -o arquivo.html https://example.com
```
- `-o` → salva a saída em um arquivo.

---

### 4. **Ver cabeçalhos + corpo**

```bash
curl -i https://example.com
```
- `-i` → mostra cabeçalhos **e** conteúdo.

---

### 5. **Modo silencioso**

```bash
curl -s https://example.com
```
- `-s` → sem barra de progresso, só a resposta.

---

### 6. **Definir User-Agent**

```bash
curl -A "Mozilla/5.0" https://example.com
```
- `-A` → define o User-Agent, útil para simular navegador.

---

### 7. **Salvar apenas código HTTP**

```bash
curl -o /dev/null -s -w "%{http_code}\n" https://example.com
```

Saída:
```
200
```

---

### 8. **Requisição POST (enviar dados)**

```bash
curl -X POST -d "usuario=test&senha=123" https://example.com/login
```
- `-X` → define método (POST, GET, PUT, DELETE).
- `-d` → envia dados no corpo da requisição.

---

## 📌 Exemplo para criar/testar links Wayback

Pegando snapshot e vendo status:

```bash
curl -I "http://web.archive.org/web/20200101120000/http://dominio.com/"
```

Listando só status HTTP:

```bash
curl -o /dev/null -s -w "%{http_code}\n" "http://web.archive.org/web/20200101120000/http://dominio.com/"
```

---

👉 Resumindo:

- **Explorar headers** → `-I`, `-i`.
- **Filtrar status** → `-w "%{http_code}"`.
- **Salvar links** → `-o`.
- **Automatizar testes em massa** → com `grep`, `sed`, `awk`.