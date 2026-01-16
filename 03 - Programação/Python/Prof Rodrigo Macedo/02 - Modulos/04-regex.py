import re

text = "Udemy - uma plataforma com muitos cursos."
# 1 - Índice inicial e final de palavras
# O 'r' significa uma raw string
match = re.search(r"muitos cursos", text)
print(f"Índice inicial: {match.start()}")
print(f"Índice final: {match.end ()}")

# 2 - Buscando o índice que possui o ponto
site = "https://udemy.com"
match = re.search(r'\.', site)
print(match)

# 3 - Buscando uma lista de caracteres dentro de uma frase
pattern = "[g-m]"
result = re.findall(pattern, text)
print(result)

# 4 - Verificando o início de uma string
rule = r"^A"
phrases = ["A casa está suja", "O dia está lindo", "Vamos passear", "A casa é verde"]
for f in phrases:
    if re.match(rule, f):
        print(f"Corresponde: {f}")
    else:
        print(f"Não corresponde: {f}")

# 5 - Verificando o final de uma string
rule_end = r'!$'
phrase2 = "O dia está lindo!"
match = re.search(rule_end, phrase2)
if match:
    print("Sim, corresponde.")
else:
    print("Não corresponde.")