# File Transfer Protocol 

**O que é:** FTP é um protocolo antigo para **enviar/baixar arquivos** para cliente e servidor.

---
## Pontos importantes

- **Porta padrão:** TCP 21 (controle) + porta separa para dados.
- **Modos: Ativo** (servidor conecta no cliente para dados) **Passivo** (cliente abre conexão de dados no servidor; mais usado).
- **Segurança:** não cifra dados; credenciais e arquivos vão em texto puro.
- **Alternativas seguras**: FTP com TLS ou SSH
- **Uso comum**: envio/recebimento de arquivos em servidores, integrações legadas.

---
## Comandos Básicos

**Conectar**:

```bash
ftp servidor.com
```


**Principais comandos dentro do FTP**:

```bash
ls       # listar arquivos
cd dir   # entrar em diretório
get arq  # baixar arquivo
put arq  # enviar arquivo
mget *   # baixar vários arquivos
mput *   # enviar vários arquivos
bye      # sair
```
