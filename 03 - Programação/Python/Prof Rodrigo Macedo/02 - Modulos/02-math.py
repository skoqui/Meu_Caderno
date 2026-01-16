import math

# 1 - Acessar o número PI
print(math.pi)
print(f"{math.pi:.2f}")

# 2 - Acessar o número de Euler
print(math.e)
print(f"{math.e:.2f}")

# 3 - Arrendondando números para cima e para baixo
num = 10.4
print(math.ceil(num))
print(math.floor(num))

# 4 - Fatorial de um número
num2 = int(input("Digite um número:\n"))
print(math.factorial(num2))

# 5 - Potência de Números
print(math.pow(5, 5))

# 6 - Raiz quadrada de um número
print(math.sqrt(169))

# 7 - MDC
mdc = math.gcd(20, 100)
print(mdc)

# 8 - Logarítimo
print(math.log(10))
