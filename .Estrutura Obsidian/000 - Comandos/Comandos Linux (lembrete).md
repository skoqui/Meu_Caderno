---
tags:
  - python
  - python3
  - venv
Data: 2025-08-05
---

-----
## 🐍 Criando venv
#python #venv #bash

1. Comando para criar:
```python
python3 -m venv venv-nome/bin/activate
```

2. Comando para executar:
```bash
source /venv-nome/bin/activate
```

3. Comando para desativar:
```bash
deactivate
```

- Comando para remover:
```bash
rm -rf venv
```



----



# 🛠️ Bash – Comandos de Filtragem
#bash #grep

## 1. `grep` – Procurar padrões no texto
```bash
grep "erro" arquivo.log
```

📌 Opções úteis:

- `-i` → ignora maiúsculas/minúsculas

- `-r` → pesquisa recursivamente em pastas

- `-v` → mostra linhas que **não** correspondem ao padrão

- `-n` → mostra número da linha

Exemplo:
```bash
grep -ir "senha" /var/log
```


-------


# 😾 GitHub - Comandos 
#github #git

## 1. Configuração inicial
```bash
git config --global user.name "skoqui"
git config --global user.email "duscoqui@gmail.com"
git config --list
```

## 2. Criando repositório
```bash
cd ~/Documentos/meu-projeto

git init
```

## 3. Adicionar arquivos
```bash 
git add arquivo.py             #arquivo específico

git add .                       #adiciona todos na pasta
```

## 4. Ver status
```bash
git status
```

## 5. Salvar no histórico (commit)
```bash
git commit -m "Mensagem explicando a mudança"
```

## 6. Conectar com um repositório remoto (ex: GitHub)
- No GitHub, crie um repositório sem **README**. Depois conecte:
```bash
git remote add origin https://github.com/seuusuario/repositorio.git
```

Enviar para o remoto:
```bash
git branch -M main
git push -u origin main
```

## 7. Subindo o código
```bash
git pull
```


------
