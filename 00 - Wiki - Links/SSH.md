# Secure Shell

**O que é:** é um protocolo para *acesso remoto seguro* e transferência de arquivos, usando **criptografia** para proteger dados e autenticação.

---
## Pontos importantes

- **Porta padrão:** TCP 22.
- **Funções principais:** login remoto seguro, execução de comandos, tunelamento e cópia de arquivos (SCP/SFTP).
- **Segurança:** cifra dados e senha (usa criptografia simétrica + assimétrica + hashing).
- **Uso comum:** administração de servidores, acesso a dispositivo de rede, automações seguras.


---
## Comandos Básicos

**Conectar**:

```bash
ssh usuario@servidor.com
```


**Opções úteis:**

```bash
ssh -p 2222 usuario@servidor.com  # especificar porta
ssh -i chave.pem usuario@host     # usar chave privada
```


**Copiar arquivos com SCP (via SSH):**

```bash
scp arquivo.txt usuario@host:/destino/
scp usuario@host:/remoto/arq.txt ./local/
```
