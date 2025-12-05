---
tags:
  - idor
  - vulnerabilidade
  - hacking
  - pentest
---
---
# IDOR (Insecure Direct Object Reference)

IDOR (Referência Direta Insegura a Objeto) é uma falha de segurança em que o sistema **exibe ou permite acessar recursos internos apenas pelo identificador (ID, número, nome de arquivo, etc.) sem validar se o usuário realmente tem permissão**.

Ou seja: o app confia demais no **input do usuário** e não verifica se aquele recurso realmente pertence a ele.

---

### Exemplo simples
Um site permite acessar o perfil do usuário via URL:
```rb
https://site.com/perfil?id=123
```
- O usuário autenticado deveria ver **apenas o seu próprio perfil (id=123)**.
- Mas, se ele alterar para `id=124`, pode ver o perfil de outra pessoa!
- Isso é um IDOR.

---

### Exemplo mais real
Um sistema de tickets de suporte:
```rb
https://site.com/ticket/1001
```
- O usuário deveria ver **apenas seus tickets**.
- Porém, ao mudar para `/ticket/1002`, ele acessa o ticket de outro cliente (contendo informações sigilosas).

---

### Impactos de um IDOR
- **Vazamento de dados pessoais** (CPF, endereço, e-mails, documentos).
- **Alteração de informações de outros usuários** (mudança de senha, edição de pedidos).
- **Escalada de privilégios** (usuário comum acessando recursos de administrador).

---
### Como prevenir

1. **Não confiar em IDs fornecidos pelo cliente** (URL, form, API).
2. **Validar a autorização do usuário** antes de retornar qualquer recurso.
    - Exemplo: verificar se o `id` requisitado realmente pertence ao usuário logado.
3. **Usar referências indiretas** em vez de IDs diretos.
    - Exemplo: tokens, UUIDs ou hashes temporários no lugar de números sequenciais.
4. **Implementar controle de acesso centralizado** → regras claras de quem pode acessar o quê.

---

### Resumão
- **IDOR = acesso indevido a recursos só trocando o identificador.**
- **Problema:** falta de validação de autorização.
- **Solução:** validar sempre as permissões, usar referências seguras.