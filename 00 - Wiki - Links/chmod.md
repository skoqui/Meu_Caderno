---
tags:
  - chmod
  - linux/comandos
---
---

# 🛠️ Permissões no Linux – chmod

## Estrutura
- **Categorias:**
  - `u` → dono (*user*)
  - `g` → grupo (*group*)
  - `o` → outros (*others*)
  - `a` → todos (*all*)

- **Permissões:**
  - `r` → leitura (4)
  - `w` → escrita (2)
  - `x` → execução (1)

## Representação Numérica
| Valor | Permissão | Significado            |
|-------|-----------|------------------------|
| 0     | ---       | Nenhuma permissão      |
| 1     | --x       | Execução               |
| 2     | -w-       | Escrita                |
| 3     | -wx       | Escrita + Execução     |
| 4     | r--       | Leitura                |
| 5     | r-x       | Leitura + Execução     |
| 6     | rw-       | Leitura + Escrita      |
| 7     | rwx       | Leitura + Escrita + Execução |

## Exemplos Comuns
- `chmod 777 arquivo` → todos podem tudo (⚠️ inseguro)  
- `chmod 755 script.sh` → dono tudo, outros leem/executam  
- `chmod 700 pasta` → apenas dono tem acesso total  
- `chmod 644 arquivo.txt` → dono escreve/lê, outros só leem  
- `chmod 600 chave.pem` → dono escreve/lê, outros nada  

## Modo Simbólico
- `chmod u+x script.sh` → adiciona execução ao dono  
- `chmod g-w arquivo.txt` → remove escrita do grupo  
- `chmod o+r arquivo.txt` → adiciona leitura para outros  

---
✅ Dica: use `ls -l` para verificar permissões.
