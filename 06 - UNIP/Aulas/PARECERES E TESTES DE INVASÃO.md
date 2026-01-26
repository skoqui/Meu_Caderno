---
Curso: Segurança da Informação
Professor: Anderson Silva
Plataforma:
  - UNIP
Data início: 2025-09-11
Data término:
tags:
  - "#pentest"
  - linux
Status: false
---
---

# 🔹Unidade I
Os testes de invasão mostraram o nível de exposição de uma organização a ataques e ajudam a identificar fragilidades que precisam ser corrigidas. Nenhum sistema é totalmente imune, por isso a segurança deve ser constantemente reforçada.

O termo *hacker* surgiu nos anos 1950, inicialmente ligado à curiosidade e ao desafio de modificar sistemas eletrônicos para criar novas funções. Com o tempo, essa prática evolui de hardware para software.

No início, o hacking era movido pela **curiosidade e inovação,** mas hoje existem duas grandes motivações:

- **Profissionais éticos,** que buscam proteger sistemas;
- **Criminosos,** que exploram falhas para ganhos pessoais, espionagem, ativismo político, vingança ou terrorismo.

Os testes de invasão permitem que empresas identifiquem vulnerabilidades, entendam os possíveis impactos e adotem medidas preventivas. Como a tecnologia evolui constantemente, esses testes devem ser feitos periodicamente para garantir proteção dos ativos.


# Introdução a testes de invasão
### 1.1 Metodologia
Para fazer um ataque bem sucedido, hoje são necessários bons conhecimentos sobre tecnologias disponíveis, sobre como as estruturas funcionam, como se comunicar, suas versões e, muitas vezes, sobre arquitetura. Quanto mais informações o atacante tiver, mais realista e potencialmente valioso tende a ser o teste.

### Tipos de teste (escopos de informação)

- **White Box**
	- O testador tem *todas* as informações: IPs, diagramas, credenciais (às vezes com privilégios).
	- Permite testes muito direcionados e completos (códigos, configurações, lógica).
	- Útil para avaliar segurança interna e para testes com roteiro pré-acordado.

- **Black Box**
	- O testador recebe *mínimas* informações; o objetivo é descobrir falhas remotamente.
	- Simula um atacante externo real; maior abrangência e liberdade investigativa.
	- Bom para avaliar o que equipes internas podem não ter mapeado.

- **Gray Box**
	- Situação *intermediária*; conhecimento parcial e foco em áreas específicas.
	- Combina profundidade do White Box com realismo do Black Box.
	- objetivo: encontrar defeitos ligados à estrutura do código ou uso incorreto do aplicativo.

## Definições técnicas rápidas
- **_Gray Box_**: testar com conhecimento parcial do funcionamento interno; busca defeitos por estrutura de código inadequada ou uso incorreto. 
- **_White Box_**: testador conhece o design/estrutura interna.
- **_Black Box_**: testador desconhece a estrutura interna; testes podem ser funcionais ou não funcionais.

## Metodologias e frameworks citados
- **ISSAF (Information Systems Security Assessment Framework)**
    - Focado em infraestrutura de TI; aplicado em setores críticos (industrial, bancário).
    - Metodologia antiga, mas ainda serve como base.

- **NIST SP 800-115**
    - Guia técnico do NIST (EUA).
    - Divide o pentest em **4 etapas**: planejamento → descoberta → ataque → relatório.
    - Enfatiza registro detalhado de cada tentativa, inclusive as que falham.

- **OSSTMM (Open Source Security Testing Methodology Manual)**
    - Manual comunitário, acesso/colaboração abertos.
    - Focado em auditorias e avaliações específicas de cenário; não tenta cobrir tudo.

- **OWASP Testing Guide**
    - Voltado para **aplicações web**.
    - Projeto aberto que ajuda desenvolvedores a incorporar segurança desde o design e a orientar testes e reporting para web apps.

- **PTES (Penetration Testing Execution Standard)**
    - Documento criado por pesquisadores, especificamente para execução de pentests.
    - Fornece abordagem prática e orientações claras para profissionais e para clientes entenderem o que esperar.

## Comparação e recomendações práticas
- OSSTMM, ISSAF, PTES e NIST cobrem a maior parte dos cenários gerais; OWASP é especializado para aplicações web.
- OSSTMM, OWASP e PTES enfatizam modelagem e processos que aumentam as chances de sucesso do teste.
- NIST é valioso por revisitar resultados e orientar decisões baseadas nas evidências dos próprios testes (bom para melhoria contínua).

## Conclusão
Testes de invasão bem-feitos combinam conhecimento técnico, criatividade e escolha adequada de escopo/metodologia. A seleção entre White/Gray/Black Box altera profundamente abordagem e resultados esperados. Para procedimentos e padrão de execução, escolha metodologias reconhecidas (NIST para processo estruturado; PTES para execução prática; OWASP para web; OSSTMM/ISSAF como referências complementares), e registre detalhadamente todas as tentativas — inclusive as falhas — para retroalimentar melhorias.