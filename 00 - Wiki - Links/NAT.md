---
tags:
  - NAT
  - rede
---
---

# NAT (Network Address Translation)
-> NAT é um mecanismo que traduz endereços IP privados em IP públicos (e vice-versa), permitindo que múltiplos dispositivos em uma rede interna acessem a internet usando um único IP público.

**Principais funções:**
- Conservação de endereços IPs.
- Ocultação da estrutura da rede.
- Permite acesso à internet para redes privadas.

**Tipos de NAT:**
- **Static NAT:** mapeamento fixo entre IP privado e público.
- **Dynamic NAT:** mapeamento temporário a partir de um pool de IPs.
- **PAT (NAT Overload):** múltiplos IPs privados usam um único IP público via portas.

**Observação de Segurança:**  
O NAT **não é um mecanismo de segurança**, mas dificulta acessos diretos à rede interna quando combinado com firewall.