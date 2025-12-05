---
title: "Relatório Pericial Digital – Golpe do Falso Boleto"
author: "Luis Scoqui – Perícia Digital"
date: "2025-09-08"
---
<p align="center">
  <img src="logo.png" width="200">
</p>

# Relatório Pericial Digital
**Processo nº:** [xxx-xxx-xxx-xxx-xx]  
**Perito responsável:** Luis Eduardo Rodrigues Scoqui
**CNPJ/CPF:** 424.195.838-92
**Área:** Forense Digital / Segurança da Informação  
**Solicitante:** [NOME DO ADVOGADO OU ESCRITÓRIO]  

---

## Sumário
1. Objetivo do Relatório  
2. Metodologia Utilizada  
3. Evidências Coletadas  
	   - Boleto recebido  
	   - Boleto original (comparação)  
	   - Metadados e análise  
4. Análise Técnica  
	   - Validação de código de barras  
	   - Rastreamento da conta recebedora  
	   - Falha do sistema bancário  
5. Conclusão  
	   - Explicação técnica  
	   - Explicação simplificada  
6. Jurisprudência Relacionada  
7. Fontes e Ferramentas Utilizadas  
8. Considerações Finais  

---

## 1. Objetivo do Relatório
Analisar tecnicamente a ocorrência de fraude via **boleto bancário adulterado**, onde a vítima efetuou pagamento acreditando ser cobrança legítima, mas os valores foram desviados a conta de terceiro fraudador.  

---

## 2. Metodologia Utilizada
- Coleta do **boleto pago** e **boleto original** enviado pela empresa.  
- Preservação das evidências com hash SHA-256.  
- Registro em **Verifact** para validade jurídica das capturas.  
- Validação do **código de barras** via Bacen e ferramentas públicas.  
- Análise de destinatário e instituição financeira recebedora.  
- Consulta a jurisprudência no TJSP.  
- Ferramentas utilizadas: **Verifact, HashCalc, Bacen Validador, Autopsy**.  

---

## 3. Evidências Coletadas
### 3.1. Boleto Recebido (Falso)
- Linha digitável: `34191.23456 78901.234567 89012.345678 9 8765000004500`  
- Valor: R$ 4.500,00  
- Favorecido: "Empresa Fictícia Serviços LTDA" (fraudulento)  
- Banco emissor (indicado no código): Banco Fictício S/A  

### 3.2. Boleto Original (Legítimo)
- Linha digitável: `34191.23456 78901.234567 89012.345678 9 8765000004500`  
- Valor: R$ 4.500,00  
- Favorecido: "Empresa Real Ltda" (verdadeira credora)  
- Banco emissor: Itaú Unibanco S/A  

### 3.3. Metadados e Registro
- Ambos os boletos preservados em **Verifact** (ID: VRF-20250908-00456).  
- Hash SHA-256 (boleto fraudulento):  
  `72e48b3c5930b9afc92e3b25af24c2718c7bafcf0c2a3d4a6e9c1d9b572a93e0`  

---

## 4. Análise Técnica
### 4.1. Validação do Código de Barras
- O código do boleto falso direcionava o pagamento para conta de terceiro não relacionado à empresa original.  
- A análise mostra **divergência entre o CNPJ do cedente real e o indicado no boleto fraudulento**.  

### 4.2. Rastreamento da Conta Receptora
- Banco recebedor: Banco Fictício S/A (Cód. 999).  
- Agência/Conta: [0001/123456-7]  
- Consultas públicas (Reclame Aqui, consumidor.gov.br) indicam **múltiplos registros de fraude** associados a essa conta.  

### 4.3. Falha do Sistema Bancário
- O banco emissor **não validou corretamente o beneficiário**.  
- Houve falha na checagem de segurança do boleto, prática que já gerou condenações em casos semelhantes.  

---

## 5. Conclusão
### 5.1. Explicação Técnica
1. A vítima recebeu boleto adulterado por meio eletrônico.  
2. O código de barras direcionou o valor para terceiro fraudador.  
3. O banco emissor não implementou mecanismos de validação de favorecido.  
4. Ferramenta **Verifact** comprova autenticidade dos boletos analisados.  

### 5.2. Explicação Simplificada
O boleto estava adulterado: a vítima pagou acreditando ser legítimo, mas o dinheiro foi parar em conta de golpista. O banco falhou em validar os dados e deve responder pelo prejuízo.  

---

## 6. Jurisprudência Relacionada
- **TJSP – Apelação Cível nº 102XXXX-11.2023.8.26.0100**  
*"A instituição financeira responde por falha na validação de boleto adulterado, sendo responsável pela restituição integral do valor pago pelo consumidor."*  

- **TJSP – Apelação Cível nº 108XXXX-22.2022.8.26.0100**  
*"Comprovado que o boleto fraudulento foi compensado por banco sem verificação de autenticidade, incide a responsabilidade objetiva prevista no CDC."*  

---

## 7. Fontes e Ferramentas Utilizadas
### Fontes
- Banco Central do Brasil – Validador de Boletos.  
- TJSP – Jurisprudência.  
- Reclame Aqui / consumidor.gov.br – histórico de denúncias.  
- Verifact – registro probatório.  

### Softwares
- Verifact (registro e certificação).  
- HashCalc (hashes de integridade).  
- Autopsy (análise de arquivos).  
- Bacen Validador (códigos de barras).  

---

## 8. Considerações Finais
- Trata-se de fraude do tipo **falso boleto**, com desvio de valores.  
- A instituição financeira falhou em seu dever de segurança (art. 14, CDC).  
- Recomenda-se restituição integral dos valores à vítima, além de indenização moral.  
- Evidências preservadas em conformidade com padrões forenses e registradas via **Verifact**.