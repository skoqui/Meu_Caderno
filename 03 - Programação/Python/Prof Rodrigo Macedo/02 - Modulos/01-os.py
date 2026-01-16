import os

# 1 - Retornar a pasta atual
print(os.getcwd())

# 2 - Listar arquivos e pastas
print(os.listdir())

# 3 - Versão do SO
os.system("uname -a")

# 4 - Configurações da Máquina
os.system("lspci")

# 5 - Limpar a tela do terminal
os.system("clear")

# 6 - Desligar o computador
# os.system("shutdown -now")

def turn_off_one_hour():
    os.system("sudo shutdown -h +60")

def cancel_shutdown():
    os.system("sudo shutdown -c")