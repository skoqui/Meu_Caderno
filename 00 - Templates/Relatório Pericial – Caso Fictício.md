<p align="center">
  <img src="Proteção Digital.png" width="200">
</p>

# Relatório Pericial – Caso Fictício
**Processo nº:** 0023456-78.2025.8.26.0000  
**Perito:** Luis Scoqui
**Área:** Perícia Digital / Segurança da Informação  
**Solicitante:** Dr. [Nome do Advogado]

---

## **1. Introdução (Resumo não técnico)**

No dia **25/08/2025**, a vítima **Carlos Andrade** foi enganada por um golpista que se passou por seu sobrinho via **WhatsApp**, solicitando **transferência PIX no valor de R$ 3.500,00**.

A transferência foi realizada para a chave **CPF 123.456.789-00**, vinculada ao **Banco Fictício S/A**.  
Verificou-se que essa mesma conta já possuía **denúncias anteriores de golpes**, sem que o banco tivesse tomado medidas preventivas.

→ Em resumo: houve **fraude eletrônica** e **falha do banco**, que permitiu a continuidade do golpe mesmo após notificações anteriores.

---

## **2. Metodologia Utilizada (Técnico)**
1. Exportação da conversa no WhatsApp em formato **.ZIP**.
2. Preservação da integridade com cálculo de **SHA-256**.
3. Análise de metadados e conteúdo da conversa.
4. Verificação do comprovante bancário fornecido pela vítima.
5. Consulta a **bases públicas** e registros de denúncia da chave PIX.
6. Pesquisa de **jurisprudência no TJSP** sobre responsabilidade civil dos bancos em fraudes eletrônicas.

---

## **3. Resultados Obtidos (Técnico)**
### **3.1. Conversa no WhatsApp**
- Início: **25/08/2025 – 18h12**.
- Número do golpista: **+55 11 91234-5678**.
- Conteúdo: solicitação de ajuda financeira com PIX.
- Arquivo exportado: `ConversaCarlos.zip`
    - Hash SHA-256: `b2f5ff47436671b6e533d8dc3614845d6e8b8a37a90b2fdb5f236e5f9a1e09f3`

### **3.2. Transferência PIX**
- Valor: **R$ 3.500,00**
- Data/hora: **25/08/2025 – 18h25**
- Destinatário: **João Fictício**
- Chave PIX: **CPF 123.456.789-00**
- Banco recebedor: **Banco Fictício S/A (Código 999)**

### **3.3. Histórico da conta bancária**
- Consultas em bases abertas (Reclame Aqui, fórum público de fraudes) identificaram **denúncias anteriores da mesma conta** em junho/2025.
- O banco **não bloqueou nem restringiu a conta**, permitindo novos golpes.

---

## **4. Conclusão**
### **Explicação técnica:**
1. A vítima realizou PIX voluntário induzida por engenharia social.
2. A chave PIX utilizada já estava associada a golpes anteriores.
3. O banco recebedor, mesmo notificado, manteve a conta ativa.
4. Há elementos técnicos que comprovam fraude eletrônica e **falha da instituição financeira em prevenir danos**.

### **Explicação simplificada (para não técnicos):**
O criminoso enganou a vítima e recebeu o dinheiro via PIX.  
Essa conta já tinha histórico de golpes, mas o banco não bloqueou.  
Portanto, além do criminoso, o banco também tem responsabilidade pelo prejuízo.

---

## **5. Jurisprudência Relacionada (TJSP)**
- **TJSP – Apelação Cível nº 100XXXX-45.2023.8.26.0100**  
    _"As instituições financeiras respondem objetivamente pelos danos causados em decorrência de fraudes e delitos praticados por terceiros, quando demonstrada falha na segurança dos serviços prestados."_  
    (Relator: Des. João da Silva – Julgado em 12/09/2023)
- **TJSP – Apelação Cível nº 108XXXX-92.2022.8.26.0100**  
    _"Banco responde solidariamente por não ter bloqueado conta já denunciada em fraudes anteriores, permitindo a continuidade da prática criminosa."_  
    (Relator: Des. Maria Oliveira – Julgado em 04/05/2022)
    

---

## **6. Fontes e Ferramentas Consultadas**
### **Fontes jurídicas e abertas**
- **Banco Central do Brasil (BACEN)** – consulta pública de instituições financeiras.
- **Tribunal de Justiça de São Paulo (TJSP)** – jurisprudência pesquisada no site oficial.
- **Reclame Aqui** – registros públicos de denúncia contra a conta fraudulenta.
- **OSINT Framework** – busca de informações públicas relacionadas ao CPF da chave PIX.

### **Softwares forenses e técnicos**
- **FTK Imager** – criação de imagem e cálculo de hash.
- **Autopsy** – análise de dados e metadados.
- **Wireshark** – conferência de pacotes de rede (não identificou malware).
- **HashCalc** – verificação de integridade (SHA-256).
- **VirusTotal** – análise de eventuais anexos suspeitos (não encontrados neste caso).

---

## **7. Considerações Finais**
- A fraude é caracterizada como **estelionato eletrônico** (art. 171, §2º-A, do Código Penal).
- Há **responsabilidade solidária do banco** (art. 14, do CDC), pela omissão em não bloquear conta previamente denunciada.
- A vítima tem direito à restituição integral dos valores e eventual indenização por danos morais.
