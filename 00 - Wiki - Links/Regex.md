### **Para que serve?**  
Encontrar, validar e extrair padrões em strings — muito usado em OSINT, parsing de logs, scraping, análise forense.

**Principais metacaracteres:**

|Símbolo|Significado|Exemplo|
|---|---|---|
|`.`|qualquer caractere|`a.b` → “aab”, “acb”|
|`^`|início da string|`^GET`|
|`$`|fim da string|`txt$`|
|`[]`|conjunto|`[a-zA-Z]`|
|`()`|grupo|`(admin|
|`*`|0+ vezes|`a*`|
|`+`|1+ vezes|`a+`|
|`?`|0 ou 1 vez|`https?`|
|`{n,m}`|repetição específica|`\d{3,5}`|
|`\d`|dígito|`\d+`|
|`\w`|palavra|`\w+`|
|`\s`|espaço|`\s+`|

**Exemplos úteis em SI:**

- **Emails**: `[\w.-]+@[\w.-]+\.\w+`
- **IPv4**: `\b\d{1,3}(\.\d{1,3}){3}\b`
- **Hash MD5**: `^[a-fA-F0-9]{32}$`