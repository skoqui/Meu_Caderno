---
title: "Relatório Pericial Digital"
author: "Luis Scoqui – Perícia Digital"
date: "2025-09-08"
---
<p align="center">
  <img src="logo.png" width="200">
</p>

# Relatório Pericial Digital (Fictício)
**Processo nº:** [xxxxx-xxxxx-xxxx-xxxx]  
**Perito responsável:** Luis Eduardo Rodrigues Scoqui  
**CPF/CNPJ Responsável:** 424.195.838-92
**Área:** Forense Digital / Segurança da Informação  
**Solicitante:** [NOME DO ADVOGADO OU ESCRITÓRIO]  

---

## Sumário
1. Objetivo do Relatório
2. Metodologia Utilizada
3. Evidências Coletadas
	   - Mensagens e Conversas
	   - Transferência PIX
	   - Histórico da Conta
	   - Prints e Capturas
4. Análise Técnica
	   - Integridade das Evidências
	   - Cruzamento de Dados
	   - Responsabilidade da Instituição Financeira
5. Conclusão
	   - Explicação Técnica
	   - Explicação Simplificada
6. Jurisprudência Relacionada
7. Fontes e Ferramentas Utilizadas
8. Considerações Finais

---

## 1. Objetivo do Relatório
O presente relatório tem como objetivo analisar tecnicamente uma fraude digital do tipo **golpe do PIX via aplicativo de mensagens**, onde a vítima foi induzida a transferir valores ao golpista.  

---

## 2. Metodologia Utilizada
- **Coleta e preservação das evidências digitais**:
	  - Prints de conversas exportados do WhatsApp.
	  - Comprovante de transação bancária.
	  - Verificação da chave PIX em registros públicos.
- **Garantia de integridade**:
	  - Hash **SHA-256** de cada arquivo coletado.
	  - Registro em ferramenta de preservação forense: **Verifact** (plataforma certificada de coleta de evidências digitais).
- **Análise forense**:
	  - Extração de metadados das mensagens.
	  - Cruzamento da chave PIX com bases abertas (BACEN, Reclame Aqui).
	  - Consulta à jurisprudência do TJSP em casos semelhantes.
- **Ferramentas utilizadas**:
	  - **FTK Imager** – imagem forense e hash.
	  - **Autopsy** – análise de metadados.
	  - **Wireshark** – análise de rede (se necessário).
	  - **Verifact** – coleta validada juridicamente de prints e links.
	  - **HashCalc** – cálculo de integridade.
	  - **OSINT Framework** – pesquisa em fontes abertas.

---

## 3. Evidências Coletadas
### 3.1. Mensagens e Conversas
Trecho da mensagem fraudulenta:  
> “Tio, estou com problema urgente, preciso pagar uma conta agora, pode me ajudar com R$ 3.500 via PIX?”

**Metadados:**  
- Aplicativo: WhatsApp  
- Número: +55 11 91234-5678  
- Data/Hora: 25/08/2025 – 18h12  
- Arquivo exportado: `ConversaCarlos.zip`  
- Hash SHA-256: `b2f5ff47436671b6e533d8dc3614845d6e8b8a37a90b2fdb5f236e5f9a1e09f3`  
- Registro Verifact ID: `VRF-20250908-00123`  

### 3.2. Transferência PIX
- Valor: R$ 3.500,00  
- Data/Hora: 25/08/2025 – 18h25  
- Chave PIX: CPF 123.456.789-00  
- Banco: Banco Fictício S/A (Cód. 999)  
- Status: Concluída  

### 3.3. Histórico da Conta
- Denúncias anteriores registradas em:  
- Reclame Aqui (05/06/2025, 12/07/2025).  
- Fórum consumidor.gov.br (15/07/2025).  
- O banco **não bloqueou a conta**, permitindo continuidade da prática criminosa.  

### 3.4. Prints e Capturas
- Capturas preservadas em **Verifact**, assegurando autenticidade.  
- Prints numerados como **Anexo 1 a 4**.  

---

## 4. Análise Técnica
### 4.1. Integridade das Evidências
Todos os arquivos tiveram hash **SHA-256** calculado e registrado em ata no Verifact, garantindo sua imutabilidade e validade jurídica.  

### 4.2. Cruzamento de Dados
- Mensagem fraudulenta confirma indução ao erro.  
- Conta receptora já denunciada previamente.  
- Banco falhou em prevenir novos golpes.  

### 4.3. Responsabilidade da Instituição Financeira
Com base no **Código de Defesa do Consumidor (art. 14)**, o banco é responsável objetivamente pelos danos, sobretudo por manter conta denunciada.  

---

## 5. Conclusão
### 5.1. Explicação Técnica
1. Evidências confirmam ocorrência de fraude eletrônica por engenharia social.  
2. Chave PIX associada a múltiplos golpes anteriores.  
3. Banco negligenciou medidas preventivas.  
4. Ferramenta **Verifact** assegura validade probatória dos registros.  

### 5.2. Explicação Simplificada
O golpista enganou a vítima, recebeu o valor por PIX em conta já denunciada e o banco nada fez para bloquear a movimentação. Assim, a instituição deve responder pelo prejuízo.  

---

## 6. Jurisprudência Relacionada
- **TJSP – Apelação Cível nº 100XXXX-45.2023.8.26.0100**  
*"As instituições financeiras respondem objetivamente pelos danos causados em decorrência de fraudes praticadas por terceiros quando não adotam medidas preventivas."*  

- **TJSP – Apelação Cível nº 108XXXX-92.2022.8.26.0100**  
*"Configura falha de serviço a manutenção de conta bancária denunciada reiteradamente em fraudes, gerando responsabilidade solidária do banco."*  

---

## 7. Fontes e Ferramentas Utilizadas
### Fontes
- **Banco Central do Brasil** – consulta pública de instituições financeiras.  
- **TJSP** – jurisprudência.  
- **Reclame Aqui / consumidor.gov.br** – histórico de denúncias.  
- **Verifact** – preservação e registro de provas digitais.  
- **OSINT Framework** – coleta em fontes abertas.  

### Softwares
- FTK Imager  
- Autopsy  
- Wireshark  
- HashCalc  
- Verifact (registro certificado)  

---

## 8. Considerações Finais
- A fraude caracteriza **estelionato eletrônico** (art. 171, §2º-A, CP).  
- A instituição financeira responde solidariamente pelo dano (art. 14, CDC).  
- Recomenda-se restituição integral + indenização moral.  
- Evidências estão preservadas em conformidade com **padrões forenses e validadas via Verifact**. 