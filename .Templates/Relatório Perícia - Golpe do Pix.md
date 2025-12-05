---
title: "Relatório Pericial Digital"
author: "Luis Scoqui"
date: "2025-09-08"
---
<p align="center">
  <img src="logo.png" width="200">
</p>

# Relatório Pericial Digital
**Processo nº:** [NÚMERO DO PROCESSO]  
**Perito:** Luis Eduardo Rodrigues Scoqui  
**Área:** Perícia Digital / Segurança da Informação  
**Solicitante:** [NOME DO ADVOGADO]  

---

## Sumário
1. Introdução
2. Metodologia Utilizada
3. Resultados Obtidos
    - Conversas / Mensagens
    - Transferência / Transações
    - Histórico da Conta
4. Conclusão
    - Explicação técnica
    - Explicação simplificada
5. Jurisprudência Relacionada
6. Fontes e Ferramentas Consultadas
7. Considerações Finais

---

## 1. Introdução
[RESUMO NÃO TÉCNICO DO CASO]  
Ex.: A vítima foi alvo de fraude digital via PIX/WhatsApp, sendo induzida a erro pelo golpista e realizando transferência para conta previamente denunciada.

---

## 2. Metodologia Utilizada
- Coleta e preservação de evidências digitais (prints, exportação de conversas, comprovantes).  
- Garantia de integridade com hash **SHA-256**.  
- Análise de metadados e conteúdo das mensagens.  
- Verificação da chave PIX e histórico de denúncias.  
- Consulta a jurisprudência no TJSP sobre responsabilidade bancária.  
- Ferramentas utilizadas: FTK Imager, Autopsy, Wireshark, VirusTotal, HashCalc.  

---

## 3. Resultados Obtidos

### 3.1. Conversas / Mensagens
**Trecho da mensagem fraudulenta:**  
> “Tio, estou com problema urgente, preciso pagar uma conta agora, pode me ajudar com R$ 3.500 via PIX?”

**Metadados coletados:**  
- Aplicativo: WhatsApp  
- Número remetente: +55 11 91234-5678  
- Data/Hora: 25/08/2025 – 18h12  
- Arquivo exportado: `ConversaCarlos.zip`  
- Hash SHA-256: `b2f5ff47436671b6e533d8dc3614845d6e8b8a37a90b2fdb5f236e5f9a1e09f3`  

### 3.2. Transferência / Transações
- Valor: R$ 3.500,00  
- Data/Hora: 25/08/2025 – 18h25  
- Destinatário: João Fictício  
- Chave PIX: CPF 123.456.789-00  
- Banco recebedor: Banco Fictício S/A (Código 999)  

### 3.3. Histórico da Conta
- Consultas em bases abertas e públicas (Reclame Aqui, fóruns) identificaram denúncias anteriores da mesma conta.  
- Data da primeira denúncia: 05/06/2025  
- O banco **não bloqueou nem restringiu a conta**, permitindo continuidade de golpes.  

---

## 4. Conclusão

### Explicação técnica
1. A vítima realizou PIX voluntariamente, induzida por engenharia social.  
2. A chave PIX utilizada já tinha histórico de fraudes.  
3. O banco não tomou medidas preventivas.  
4. Há elementos técnicos que comprovam **fraude eletrônica e falha da instituição financeira**.  

### Explicação simplificada
O golpista enganou a vítima e recebeu o dinheiro via PIX.  
A conta já tinha histórico de golpes e o banco **não bloqueou**, sendo responsável pelo prejuízo.  

---

## 5. Jurisprudência Relacionada (Simulada)
- **TJSP – Apelação Cível nº 100XXXX-45.2023.8.26.0100**  
*"As instituições financeiras respondem objetivamente pelos danos causados em decorrência de fraudes e delitos praticados por terceiros."*  

- **TJSP – Apelação Cível nº 108XXXX-92.2022.8.26.0100**  
*"Banco responde solidariamente por não ter bloqueado conta já denunciada em fraudes anteriores."*  

---

## 6. Fontes e Ferramentas Consultadas

### Fontes
- Banco Central do Brasil – consulta pública de instituições financeiras  
- TJSP – jurisprudência e decisões relacionadas  
- Reclame Aqui – histórico de denúncias da conta fraudulenta  
- OSINT Framework – informações públicas sobre chave PIX  

### Softwares / Ferramentas
- FTK Imager – criação de imagem forense e hash  
- Autopsy – análise de metadados e arquivos  
- Wireshark – análise de tráfego de rede  
- VirusTotal – verificação de anexos suspeitos  
- HashCalc – cálculo de integridade de arquivos  

---

## 7. Considerações Finais
- A fraude é caracterizada como **estelionato eletrônico** (art. 171, §2º-A, Código Penal).  
- Há **responsabilidade solidária do banco** (art. 14, CDC) por não bloquear conta previamente denunciada.  
- Recomenda-se restituição integral dos valores e eventual indenização por danos morais.  

