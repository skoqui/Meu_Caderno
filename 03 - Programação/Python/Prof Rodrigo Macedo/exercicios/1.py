"""
1- Escreva uma programa que 1é dois nomes e retorne uma string formatada no formato "UltimoNome, PrimeiroNome".
2- Inverta a ordem das palavras em uma string fornecida. 3-Verifique se uma string fornecida é um palindromo
(pode ser lida da mesma forma de tras para frente).
"""

# Ex1:
# primeiroNome = input("Digite o primeiro nome:\n")
# segundoNome = input('Digite o segundo nome:\n')

# nomeFormatado = f"{segundoNome} {primeiroNome}"
# print(nomeFormatado)

# Ex2:
# texto = "Python é muito interessante"
# palavras = texto.split()
# textoInvertido = " ".join(palavras[::-1])
# print(textoInvertido)

# Ex3:
texto1 = "arara"
texto2 = "python"

# Remove espaço e deixa nome em minúsculo
texto1_format = texto1.lower().replace(" ", "")
texto2_format = texto2.lower().replace(" ", "")

# Verifica se o texto original é igual ao seu inverso
palindromo1 = texto1_format == texto1[::-1]
palindromo2 = texto2_format == texto1[::-1]

print(palindromo1)
print(palindromo2)
