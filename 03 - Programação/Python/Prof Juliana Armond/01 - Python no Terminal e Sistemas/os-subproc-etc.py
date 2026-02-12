import os, subprocess

# os.system("sudo apt update && sudo apt upgrade -yy")
# print("\n\nAtualizado com sucesso!")

# print("Diretório atual: ", os.getcwd())

# arquivos = os.listdir()
# print("Arquivos e pastas: ", arquivos)


resultado = subprocess.run(["ls", "-la"], capture_output=True, text=True)
print("Arquivos e pastas: ", resultado.stdout)
