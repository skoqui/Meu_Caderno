# HTTP (*Hypertext Transfer Protocol*)

-> É um protocolo da camada de aplicação usado para **transferência de páginas, arquivos e dados** na web.

---
## Principais pontos

- **Porta padrão:** 80 (HTTP) e 443 (HTTPS, com criptografia TLS).
- **Função:** comunicação entre cliente (navegador ou ferramenta) e servidor web.
- **Segurança:** HTTP é texto puro; HTTPS cifra todo o tráfego usando TLS
- **Uso comum:** acessa sites, APIs, baixar arquivos.


---
## Comandos básicos

**Baixar arquivo com `curl`:**

```bash
curl -O https://exemplo.com/arquivo.zip
```
- `-O` → salva com o mesmo nome do arquivo remoto.

Salvar com nome personalizado:

```bash
curl -o meu_arquivo.zip https://exemplo.com/arquivo.zip
```

Retomar download interrompido:

```bash
curl -C - -O https://exemplo.com/arquivo.zip
```

---

**Baixar arquivo com `wget`:**

```bash
wget https://exemplo.com/arquivo.zip
```

Salvar com nome personalizado:

```bash
wget -O meu_arquivo.zip https://exemplo.com/arquivo.zip
```

Retomar download interrompido:

```bash
wget -c https://exemplo.com/arquivo.zip
```

---
**Dicas rápidas:**

- Ambos (`curl` e `wget`) funcionam com **HTTP, HTTPS, FTP e FTPS**.
- Para downloads com login:

```bash
curl -u usuario:senha -O https://exemplo.com/privado.zip
wget --user=usuario --password=senha https://exemplo.com/privado.zip
```
