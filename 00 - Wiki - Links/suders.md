---
tags:
---
---
## Permissões Linux

### Conceito básico

No Linux, **permissões** controlam quem pode **ler**, **escrever** ou **executar** arquivos e diretórios.

Existem **3 tipos de permissões**:

- **r** (read / leitura)
- **w** (write / escrita)
- **x** (execute / execução)

E **3 classes de usuários**:

- **u** → user (dono)
- **g** → group (grupo)
- **o** → others (outros)

---

### Visualização com `ls -l`

Exemplo:

```
-rwxr-xr--
```

Quebra:

```
-   rwx   r-x   r--
|    |     |     |
|    |     |     └─ others
|    |     └────── group
|    └──────────── user
└─ tipo do arquivo
```

Tipos de arquivo:
- `-` arquivo comum
- `d` diretório
- `l` link simbólico

---

### Significado das permissões

|Permissão|Arquivo|Diretório|
|---|---|---|
|r|Ler conteúdo|Listar arquivos (`ls`)|
|w|Modificar arquivo|Criar/remover arquivos|
|x|Executar arquivo|Acessar (`cd`)|

==Diretórios **precisam de `x`** para serem acessados.==

---

### Representação numérica (Octal)

Cada permissão tem um valor:
- r = 4
- w = 2
- x = 1

Soma por classe:
- `7` → rwx
- `6` → rw-
- `5` → r-x
- `4` → r--

Exemplo:

```
chmod 755 script.sh
```

Equivale a:

```
user  = rwx (7)
group = r-x (5)
others= r-x (5)
```

---

### Comando `chmod`

Forma numérica:

```
chmod 644 arquivo.txt
```

Forma simbólica:

```
chmod u+x arquivo.sh
chmod g-w arquivo.txt
chmod o+r arquivo.txt
chmod a+x script.sh
```

Símbolos:

- `+` adiciona
- `-` remove
- = - define exatamente

---

### Dono e grupo

Visualização:

```
ls -l
```

Alterar dono:

```
chown usuario arquivo
```

Alterar grupo:

```
chown :grupo arquivo
```

Ambos:

```
chown usuario:grupo arquivo
```

---

### Permissões especiais

#### SUID (4)

Executa com permissão do dono

```
chmod 4755 arquivo
```

Representação:

```
-rwsr-xr-x
```

#### SGID (2)

Executa com permissão do grupo

```
chmod 2755 arquivo
```

#### Sticky Bit (1)

Comum em `/tmp`  
Só o dono pode apagar arquivos

```
chmod 1777 /tmp
```

---

### Boas práticas
- Nunca use `777` sem necessidade
- Use permissões mínimas necessárias
- Scripts precisam de `x` para rodar
- Diretórios precisam de `x` para acesso

---

**Resumo rápido**

```
r = ler
w = escrever
x = executar
u/g/o = user/group/others
chmod = permissões
chown = dono/grupo
```