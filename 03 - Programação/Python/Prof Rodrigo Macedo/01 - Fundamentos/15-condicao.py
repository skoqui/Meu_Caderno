# Informações sobre o filme
# name = input("Digite o nome do filme:\n")
# yearRelease = int(input("Digite o ano de lançamento:\n"))
# rating = float(input("Digite a nota de avaliação do filme:\n"))

# # Verifica se o filme é recomendado
# if rating > 8.0 and yearRelease > 2015:
#     print(f"O filme {name} é muito bom. Recomendo assisti-lo.")
# else:
#     print(f"O filme {name} ainda não atingiu uma boa nota.")

num1 = float(input("Digite o primeiro número:\n"))
num2 = float(input("Digite o segundo número:\n"))
operation = input("Digite a operação a ser realizada: (+ - * /)\n")

if operation == "+":
    result = num1 + num2

elif operation == "-":
    result = num1 - num2

elif operation == "*":
    result = num1 * num2

elif operation == "/":
    if num1 != 0:
        result = num1 / num2
    else:
        print("Erro: Divisão por Zero")
        result = 0

else:
    print("Operação inválida.")
    result = 0

print(f"Resultado da operação é: {result:.2f}")