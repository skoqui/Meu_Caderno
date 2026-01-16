movieName = "Top Gun"

# string[inicio:fim] - índice começa na posição 0 / índice fina -1

# 1 - Buscar toda string a partir da primeira posição
print(movieName[0:])

# 2 - Buscar toda string até a última posição
print(movieName[:6])

# 3 - Buscar toda string da terceira até a última posição
print(movieName[2:])

"""
string[inicio:passo]
índice começa na posição 0 / índice fina -1
passo - determina o incremento. Por padrão esse é o número 1
"""

# 4 - Buscar toda a string de 2 em 2 caractere
print(movieName[::2])

# 5 - Buscar toda a string nos índices ímpares
print(movieName[1::2])

# 6 - Inverter uma string de trás para frente
print(movieName[::-1])