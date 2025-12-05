# dig (*Domain Information Groper*)

-> É uma ferramenta de terminal usada para **consultar informações DNS**.

---
## Principais pontos

- **Função principal:** resolver nomes de domínio, obter registros DNS e diagnosticar problemas de rede.
- **Servidores DNS:** por padrão usa os configurados no sistema, mas pode especificar qualquer servidor (ex: 8.8.8.8).

---
## Principais usos / exemplos

|Comando|Função / Observações|
|---|---|
|`dig exemplo.com`|Retorna registros A por padrão (IPv4)|
|`dig exemplo.com MX`|Consulta servidores de e-mail|
|`dig exemplo.com NS`|Lista servidores de nomes|
|`dig exemplo.com AAAA`|Consulta endereço IPv6|
|`dig -x 93.184.216.34`|Reverse DNS (PTR)|
|`dig @8.8.8.8 exemplo.com`|Consulta usando DNS do Google|
|`dig +short exemplo.com`|Retorna apenas o resultado resumido (ex: IP)|

