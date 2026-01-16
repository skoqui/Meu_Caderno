movieName = "Top Gun"
movieDescription = """
    Top Gun Maverick, é um filme de aviação e aventura,
muito consagrado na indústria
"""
print(movieName.upper()) # Tudo maiúsculo
print(movieName.lower()) # Tudo minúsculo
print(movieName.capitalize()) # Primeira letra maiúscula
print(movieName.title()) # Primeira letra maiúscula
print(movieName.center(10, "-")) # Retorna string centralizada com caractere de preenchimento
print(movieName.find("u")) # Retorna a posição ou índice de um determinado caractere
print(movieName.find("o")) # Conta caractere
print(movieName.replace("Top", "Matrix")) # Altera elemento por outro
print(movieDescription.split(","))