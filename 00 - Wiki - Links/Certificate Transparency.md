# Certificate Transparency

-> É um mecanismo criado pelo Gooble para aumentar a segurança dos **certificados digitais TLS/SSL.**
-> Mantém **logs públicos e auditáveis** de todos os certificados emitidos por Autoridades Certificadoras (CAs).

---
# 🔹 Tem como objetivo:

- Detectar certificados **fraudulentos ou mal emitidos**.
- Aumentar a **confiança** na cadeia de certificados.
- Facilitar a **auditoria pública.**

---
# 🔹Como funciona:

- Toda vez que uma CA emite um certificado, ela deve registrá-lo em um **CT-log.**
- Navegadores (ex.: Chrome, Firefox) verificam se o certificado está nesses logs antes de aceitá-lo.
- Ferramentas podem consultar os logs para verificar domínios.


---
## 🔹Benefícios:

- Transparência contra certificados falsos.
- Melhora resposta a incidentes a segurança.
- Ajuda em investigações de pishing e spoofing.


---
## 🔹 Sites úteis para consultar CT Logs

- [crt.sh](https://crt.sh) → O mais usado, mostra todos os certificados emitidos para um domínio.
- [Google Transparency Report](https://transparencyreport.google.com/https/certificates) → Pesquisa de certificados emitidos.
- [Facebook Certificate Transparency Monitoring](https://developers.facebook.com/tools/ct/) → Monitoramento automático de domínios.
- [Censys](https://censys.io) → Busca de certificados e hosts.
- [Shodan](https://www.shodan.io) → Também lista certificados de hosts encontrados.


---
## 🔹 Ferramentas / comandos

```bash
openssl s_client -connect site.com:443 -showcerts
```
 → mostra certificado do host.

```bash
curl https://crt.sh/?q=site.com&output=json
```
→ consulta direta em JSON ao crt.sh.


- Ferramentas de pentest como `subfinder` e `amass` usam CT logs para achar **subdomínios**
