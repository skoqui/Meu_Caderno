# STFP (*SSH File Transfer Protocol ou Secure File Transfer Protocol*)

**O que é:** SFTP é um protocolo de **transferência segura de arquivos** que funciona sobre o [[SSH]]

---
## Pontos importantes

- **Porta padrão:** TCP 22
- **Segurança:** todos os dados e credenciais são criptografados.
- **Autenticação:** mesma do SSH (senha ou chave pública/privada).
- **Diferença do FTP/FTPS**: não usa porta 21 nem conexões separadas; mais simples e seguro.
- **Uso comum:** envio/recebimento de arquivos em servidores de forma segura, substituindo FTP/FTPS

---
## Comandos Básicos

**Conectar**:

```bash
sftp usuario@servidor.com
```


**Principais comandos dentro do SFTP:**

```bash
ls        # listar arquivos no servidor
cd dir    # entrar em diretório remoto
lcd dir   # mudar diretório local
get arq   # baixar arquivo
put arq   # enviar arquivo
mget *    # baixar vários
mput *    # enviar vários
bye       # sair
```


