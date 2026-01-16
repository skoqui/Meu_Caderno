num1 = int(input("Digite o primeiro número:\n"))
num2 = int(input("Digite o segundo número:\n"))
print("=="*20)

# Aritiméticos
som = num1 + num2
sub = num1 - num2
div = num1 / num2
mult = num1 * num2
mod = num1 % num2
exp = num1 ** num2

print(f"Potência do número {num1} por {num2} é {exp}")
print(f"Resto da divisão de {num1} por {num2} é {mod}")
print(f"Multiplicação do número {num1} por {num2} é {mult}")
print(f"Divisão do número {num1} por {num2} é {div}")
print(f"Subtração do número {num1} por {num2} é {sub}")
print(f"Soma do número {num1} por {num2} é {som}")

print("__"*20)

# Comparação
bigger = num1 > num2
smaller = num1 < num2
equal = num1 == num2
different = num1 != num2
bigger_equal = num1 >= num2
smaller_equal = num1 <= num2

print(f"Os números {num1} e {num2} são iguais? {equal}\n"
      f"O número {num1} é maior ou igual a {num2}? {bigger_equal}\n")

# Atribuição
num1 += 1 #num1 = num1 + 1
num1 -= 1 #num1 = num1 - 1
num1 *= 1 #num1 = num1 * 1
num1 /= 1 #num1 = num1 / 1