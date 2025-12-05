---
tags:
  - shodan
  - web
  - buscadores
---
---
## 🔎 Shodan

### **O que é?**  
Shodan é um buscador de dispositivos conectados à internet. Diferente do Google, que mostra **sites**, o Shodan mostra **aparelhos e serviços expostos**.

---

###  **O que pode aparecer no Shodan?**
- Câmeras IP 
- Roteadores e modems 
- Servidores 
- Impressoras de rede 
- Sistemas industriais 

---

### **Para que serve?**
- Analisar segurança de dispositivos.
- Descobrir se algo está exposto sem proteção.
- Pesquisar tecnologias usadas em determinados serviços.

---

### **Exemplo de uso:**  
Pesquisar servidores Apache expostos:
```nginx
apache country:"BR"
```

**Básicos por tecnologia**
```nginx
apache
nginx
microsoft-iis
```

**Por região (estado/província)**
```nginx
apache country:"BR" region:"São Paulo"
```

**Por cidade**
```nginx
apache country:"BR" city:"São Paulo"
nginx city:"New York"
```

**Combinando com ASN (PROVEDOR)**
```nginx
asn:AS262509 city:"São José do Rio Pardo"
```

