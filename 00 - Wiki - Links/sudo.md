---
tags:
  - sudo
  - linux/comandos
---
---

# Sudo, su e Gerenciamento de Privilégios no Linux

## 📌 Principais Comandos

### `sudo`
- Executa comandos como **superusuário (root)** ou outro usuário.
- Requer estar no arquivo `/etc/sudoers`.
- Formato:
  ```bash
  sudo comando
```

- Exemplos:
```bash
sudo apt update          # executa com privilégios de root
sudo reboot              # reinicia o sistema
sudo -u usuario comando  # executa como outro usuário
```

### `su` (Substitute User / Switch User)
- Troca de usuário no terminal.
- Se nenhum for especificado, assume `root`.
- Formato:
```bash
su [usuario]
```

- Exemplos:
```bash
su -                   # login como root (carrega ambiente)
su usuario             # troca para "usuario"
su -c "comando" user   # executa um comando como "user"
```

### `sudo su`
- Usa o `sudo` para rodar o `su`, virando **root** com senha do próprio usuário.
- Exemplo:
```bash
sudo su -
```

## Diferença entre `su` e `sudo`
- `su` → troca de usuário (precisa da senha do usuário alvo).
- `sudo` → executa um comando como root ou outro usuário (precisa da senha **do seu próprio usuário**, se autorizado no `sudoers`).


### Arquivo `sudoers`
- Editado com:
```bash
sudo visudo
```

- Exemplos de configuração:
```bash
usuario ALL=(ALL) ALL         # usuario pode usar sudo em tudo
grupo   ALL=(ALL) NOPASSWD:ALL # grupo pode usar sudo sem senha
```
