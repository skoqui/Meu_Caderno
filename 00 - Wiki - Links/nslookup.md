# nslookup

-> É uma ferramenta de terminal para **consultar registros DNS,** mais antiga e simples que o [[dig]].

---
## Principais pontos

- **Função principal:** resolução de nomes e troubleshooting de DNS.


---

| Comando                         | Função / Observações                        |
| ------------------------------- | ------------------------------------------- |
| `nslookup exemplo.com`          | Retorna IP padrão (A) e servidor consultado |
| `nslookup -type=MX exemplo.com` | Consulta servidores de e-mail               |
| `nslookup -type=NS exemplo.com` | Lista servidores de nomes                   |
| `nslookup 93.184.216.34`        | Reverse DNS (PTR)                           |
| `nslookup exemplo.com 8.8.8.8`  | Consulta usando DNS do Google               |


---
**Dicas rápidas**

- `dig` → mais completo, detalhado e moderno, ideal para pentest e troubleshooting.
- `nslookup` → rápido, mais simples, útil para testes básicos.
- Sempre combine **consultas diretas e reversas** (A/AAAA e PTR) para mapeamento de rede.
- Use servidores públicos (Google 8.8.8.8, Cloudflare 1.1.1.1) para testar como a internet vê o domínio.