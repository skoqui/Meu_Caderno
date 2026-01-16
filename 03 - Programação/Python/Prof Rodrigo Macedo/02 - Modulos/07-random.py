import random

# 1 - Seleciona valor aleatório de uma lista
list1 = [7,6,4,3,2,1]
list2 = ["Teste", "Olá Mundo", 3, 5.4]
print(random.choice(list1))

# 2 - Gera um número aleatório em um intervalo de valores
r1 = random.randint(5, 15)
print(r1)

# 3 - Seleciona um caractere aleatório de uma string
name = "Curso Python"
r2 = random.choice(name)
print(r2)

# 4 - Seleciona mais de um valor aleatório
# random.sample(sequencia, tamanho)
print(random.sample(list1, 2))
print(random.sample(list2, 2))

# 5 - Programa de adivinha
done = False
while not done:
    print("O que você deseja fazer?")
    print("1. Adivinhar o número.")
    print("2. Sair")

    choice = input(">")

    if choice == "1":
        print("============Adivinhe um número de 1 a 10============\n")
        number = int(input("Digite um número:\n"))
        result = random.randint(1, 10)
        if number == result:
            print("Parabéns. Você acertou!!!")
        else:
            print(f"Você perdeu. \nVocê digitou: {number} \nNúmero correto: {result}")
    elif choice == "2":
        print("Programa encerrado.")
        done = True
    else:
        print("Opção Inválida.")
