---
Curso: Segurança da Informação
Professor: Anderson Silva
Plataforma:
  - UNIP
Data início: 2025-08-14
Data término: 
tags:
  - "#pentest"
  - linux
Status: false
---
---

# 🔹Unidade I

## Apresentação
*Resumo:*

>A disciplina apresenta os conceitos essenciais para compreender a auditoria de sistemas, atividade ampla que valida **processos, métodos, ferramentas e resultados,** verificando se metas são atingidas. A auditoria identifica **erros, inconformidades, possibilita comparações, criação de novos processos e investigação de eventos**. Exige comhecimetos técnicos, entendimento das normas e visão de governança e gestão. Está fortemente ligada à segurança da informação, pois valida controles e apoia práticas de proteção.  O objetivo é incentivar o aprendizado e aplicação da auditoria no cotidiano empresarial.


---

## Introdução

A auditoria de sistemas vai além de identificar inconformidades, servindo também para implementar estratégias de governança, organizar procedimentos, testar novas medidas e controlar processos. Não se limita apenas a sistemas, abrangendo também auditoria de equipamentos, pessoas e aspectos legais. O conteúdo apresenta fundamentos teóricos, explica o funcionamento e a aplicação dos processos de auditoria para validar e atualizar controles de segurança, e mostra seu uso com diferentes ambientes empresariais. A ligação com a segurança é central, pois a auditoria contribui para a proteção dos bens e a continuidade das operações.

---

## 1 CONCEITOS SOBRE SEGURANÇA

O entendimento de um **processo de auditoria** passa pelo entendimento de alguns conceitos essenciais de **segurança**. Por isso, este primeiro tópico gira em torno das **ameaças e vulnerabilidades** às quais os ambientes tecnológicos estão sujeitos.

---

## 1.1 Ameaças e vulnerabilidades

>A segurança é um assunto gigantesco. Envolve diversas áreas, ambientes, categorizações, e requer cuidados tanto no gerenciamento quanto no aspecto técnico. *A função da segurança é justamente proteger o que tem de valor para uma empresa*, os chamados **ativos** — bens ou elementos que possuem valor para a empresa.

![[_- visual selection.png]]
- **Ameaça:** evento ou circunstância com potencial de causar dano, *mas ainda não causou o prejuízo* (ex.: funcionário insatisfeito, buraco destampado, vírus em e-mail).

- **Vulnerabilidade:** falha ou fraqueza que permite que a ameaça se concretize (ex.: sistema desatualizado, erros de programas, falta de equipamento de proteção).

- **Ataque:** quando a [[Ameaça|ameaça]] aproveita uma vulnerabilidade e causa o dano:
  Tipos:
	- **Passivo:** só observa sem alterar nada (ex.: escuta telefônica).
	- **Ativo:** altera algo ou causa prejuízo (ex.: invasor apaga arquivos).

>Um vírus enviado por e-mail é uma [[ameaça]], e a abertura do anexo por um usuário distraído é a [[vulnerabilidade]] que transforma a ameaça em prejuízo.


---

## 1.2 Controle de Segurança

↳ São mecanismos usados para **defender os ativos.** Podem ser técnicos (como [[firewall]]) ou administrativos (como regras da empresa).

- **Prevenção:** evita o problema. Ex.: criptografia, [[antivírus]], autenticidade.
- **Detecção:** identifica o problema enquanto acontece. Ex.: sistema de detecção de intrusão (IDS).
- **Recuperação:** corrige depois que o problema aconteceu. Ex.: restauração de backup.

Controles são como barreiras em camadas. O ideal é ter prevenção, mas também detecção e recuperação como plano B.

---

## 1.3 Serviços de Segurança

↳ Os serviços são os **resultados dos controles.** É o que eles garantem.

- **[[Confidencialidade]]:** só pessoas autorizadas acessam as informações.
	→ Ex.: criptografia de arquivos sigilosos.

- **[[Integridade]]:** garantia de que as informações não foi alterada.
	→ Ex.: assinatura digital, hash.

- **[[Disponibilidade]]:** sistema sempre acessível quando necessário.
	→ Ex.: servidor de banco funcionando 24/7, redundância.

- **[[Autenticação]]:** provar identidade (quem é você).
	→ Ex.: senha, biometria, token.

> Na prática, empresas precisam combinar esses serviços. Exemplo: um banco precisa de [[confidencialidade]] (sigilo dos clientes), [[integrigade]] (transações corretas), [[disponibilidade]] (site sempre online) e [[autenticação]] (login seguro).


---

## 2. Normalização

↳ É a criação e uso de **normas** para organizar e padronizar processos.

- **Funções:** proteger ativos, ensinar colaboradores e padronizar práticas.
- **Exemplos de orgãos:**
	- ABNT (Brasil)
	- ISO (Internacional)
	- NIST (EUA)


↳ **Família ISO 27000:** normas internacionais para segurança da informação.
- **ISO 27001:** requisitos para a gestão da segurança.
- **ISO 27002**: boas práticas e controles recomendados.

↳ **PSI (Política de Segurança da Informação):** documento com as regras da empresa para uso seguro de informações.
Ex.: regras sobre o uso de e-mail corporativo, senhas, redes sociais, dispositivos móveis.

🔹Contexto: seguir normas ajuda a empresa a estar dentro de padrões aceitos no mercado, evita processos legais e aumenta a confiança.

---

## 3. Conceitos sobre Auditoria

↳ **Auditoria** é verificar se processos e controles estão funcionando corretamente e de acordo com normas/PSI.

- **Tipos de auditoria**:
   - Primeira parte: feita pela própria empresa (auditoria interna).
   - Segunda parte: feita por uma empresa externa contratada.
   - Conjunta: feita por mais de uma equipe ao mesmo tempo.

- **Elementos principais**:
   - **Escopo**: o que será auditado (ex.: apenas rede, apenas software, toda TI).
   - **Evidências**: provas coletadas (logs, entrevistas, relatórios).
   - **Não conformidade**: quando algo não segue as normas ou regras.

🔹Contexto: auditoria não é só “achar erro”, mas também validar processos, indicar melhorias e dar credibilidade à empresa.

---

## 4. ABNT NBR ISO 19011 (2018)

↳ Essa norma ensina **como conduzir auditorias** de gestão.

- **7 princípios**:
   1. Integridade – ética, honestidade.
   2. Apresentação justa – reportar de forma precisa.
   3. Profissionalismo – auditor deve ser competente.
   4. Confidencialidade – manter sigilo.
   5. Independência – auditor não pode ter interesse na empresa.
   6. Evidência – basear conclusões em provas.
   7. Riscos – considerar riscos e oportunidades.

- **PDCA (ciclo de melhoria contínua)** aplicado à auditoria:
   - **Plan** → planejar objetivos e equipe.
   - **Do** → executar a auditoria.
   - **Check** → verificar resultados.
   - **Act** → propor melhorias.

🔹Contexto: a norma ISO 19011 é como um “guia de boas práticas” para que auditorias sejam organizadas, imparciais e realmente úteis.

---

# 🔹Unidade III - Auditoria da Infraestrutura
### Análise de Risco
- **Risco** = probabilidade da ameaça + impacto + controle de segurança disponível.
- **Objetivo:** identificar, avaliar e tratar riscos.

→ **Normas:**
- **ABNT NBR ISO/IEC 27005:** segue o ciclo **PDCA** (Planejar, Executar, Verificar, Atualizar).
- **NIST 800-30**: semelhante, foca em **avaliação e minimização** de riscos.

→ **Tratamento de riscos:**
- **Reduzir** (diminuir impacto/probabilidade).
- **Evitar** (mudar processo para não gerar risco).
- **Transferir** (ex: contratar seguro).
- **Aceitar** (quando o custo da solução é maior que o problema).

→ **Ferramentas:**
- **CBA (Cost-Benefit Analysis):** compara custo da segurança com benefícios.
- **ROSI (Return on Security Investment):** mostra retorno do investimento em segurança.

### Processos de TI
- Além da segurança, há **controles organizacionais/operacionais** (regras de negócio).
- **Segregação de funções:** dividir tarefa para evitar fraudes (ninguém deve incluir + alterar + aprovar sozinho).
- **Need-to-know Basis:** usuário só acessa o que precisa para o trabalho.
- **BCP (Business Continuity Plan):** plano para manter negócios funcionando após incidentes (desastres, falhas, ataques).

### Data Centers
- Ambientes críticos com servidores e redes.
- **Controles físicos:** acesso restrito (biometria, cartões, tokens), prevenção contra incêncios e desastres.
- **Climatização:** temperatura controlada, redundância de ar-condicionado.
- **Energia:** uso de geradores e redundância.
- **Virtualização:** menos máquinas  físicas, economia de energia e espaço.
- **Norma EIA/TIA 942:** define padrões de construção, topologia e disponibilidade de data centers.

---

# 🔹Unidade IV – Auditoria de Sistemas e Aplicativos
### Logs
- **Logs:** registros de atividades (usuários, acesso, falhas, alterações, privilégios, transação).
- **Importância:** usado para descobrir falhas, fraudes e ataques.
- **Integridade dos logs:**
	- Criar *hashes* para evitar adulteração.
	- Definir *somente leitura*.
	- Ter *backup e armazenamento centralizado.*
	- Atenção: atacantes tentam apagar ou gerar excessos de logs para esconder rastros.

### Análise de Logs
Classificação:
	- **VP (Verdadeiro Positivo)** → ameaça real detectada.
	- **FP (Falso Positivo)** → algo legítimo detectado como ameaçã.
	- **FN (Falso Negativo)** → ameaça real que não foi detectada.
	- **VN (Verdadeiro Negativo)** → atividade maliciosa permitida (pior caso).

### Correlação de Logs
- Cruzar informações de várias fontes (rede, SO, aplicativos).
- Necessário **sincronizar horários (NTP)**.
- Tipos:
	- **Descendente:** começa de ataque conhecido e rastreia vestígios.
	- **Ascendente:** parte de uma anomalia e busca outros registros.
- **Vantagem**: entender a sequência do ataque (ex.: antes de um **DoS**), sempre há reconhecimento de redes).

### Computação Forense
→ Tem como objetivo: encontrar, preservar e analisar **evidências digitais** para investigação de crimes.

Etapas principais:
1. **Identificação** (saber o que investigar).
2. **Isolamento** (preservar vestígios).
3. **Registro** (documentar antes de coletar).
4. **Coleta** (extrair evidências físicas e digitais).
5. **Preservação** (garantir integridade → hashes, assinaturas digitais, criptografia).

Evidências:
- **Físicas** → HD, pen drives, chips, celulares.
- **Lógicas** → arquivos apagados, mensagens, redes, conteúdos criptografados.

Legalidade:
- Métodos devem ser **reproduzíveis e legais**.
- Seguem **CPC** (Código de Processo Civil), **Marco Civil da Internet** e outras leis.
- Provas ilícitas podem ser invalidadas.

### Auditoria Forense
- Verifica se os métodos e provas estão corretos e dentro da lei.
- **Exemplos de auditoria**:
    - Sistemas de arquivos (NTFS, Ext, HFS).
    - Mídias (HD, DVDs, pen drives).
    - Redes, internet, telefonia.
    - Imagens e vídeos (identificação, manipulação, pornografia infantil, velocidade de veículos).
    - Dispositivos móveis (coleta de dados, uso de sacola de Faraday, clonagem de SIM).