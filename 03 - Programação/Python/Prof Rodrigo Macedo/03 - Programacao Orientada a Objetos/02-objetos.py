class Game:
    name = ""
    yearLaunch = 0 
    multiplayer = False
    note = 0

# Primeiro jogo
game1 = Game()
game1.name = "The Legend of Zelda: Breath of the Wild"
game1.yearLaunch = 2017
game1.multiplayer = False
game1.note = 9.5

# Segundo jogo
game2 = Game()
game2.name = "Fortnite"
game2.yearLaunch = 2017
game2.multiplayer = True
game2.note = 8.8

# Terceiro jogo
game3 = Game()
game3.name = "VALORANT"
game3.yearLaunch = 2020
game3.multiplayer = True
game3.note = 9.0

# Quarto jogo
game4 = Game()
game4.name = "Red Dead Redemption 2"
game4.yearLaunch = 2018
game4.multiplayer = False
game4.note = 9.8

print("###Dados do jogo###")
print(f"\nNome do jogo: {game1.name}\nAno de Lançamento: {game1.yearLaunch}")
print(f"\nNome do jogo: {game2.name}\nAno de Lançamento: {game2.yearLaunch}")
print(f"\nNome do jogo: {game3.name}\nAno de Lançamento: {game3.yearLaunch}")
print(f"\nNome do jogo: {game4.name}\nAno de Lançamento: {game4.yearLaunch}")