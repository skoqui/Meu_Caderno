from github import Github
import openai
import os

openai.api_key = os.getenv("OPENAI_API_KEY")

...



prompt = f"""
Você é um revisor de código sênior especializado em boas práticas, segurança e performance.

Analise as mudanças a seguir:


{all_diffs}

Retorne:
- Problemas encontrados
- Sugestões claras
- Possíveis vulnerabilidades
- Regras de estilo violadas
- Código de exemplo corrigido quando necessário
"""


