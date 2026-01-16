class Game:
    def __init__(self, name="", yearLaunch=0, multiplayer=0, note=0):
        self.name = name
        self.yearLaunch = yearLaunch
        self.multiplayer = multiplayer
        self.note = note

    def __str__(self):
        return f"Game: {self.name}"

game1 = Game("The Legend of Zelda", 2017, False, 9.5)
game2 = Game("Fortnite", 2017, True, 8.0)


print("###Dados do jogo###")
print(f"\nNome do jogo: {game1.name}\nAno de Lançamento: {game1.yearLaunch}")
print(f"\nNome do jogo: {game2.name}\nAno de Lançamento: {game2.yearLaunch}")
# print(f"\nNome do jogo: {game3.name}\nAno de Lançamento: {game3.yearLaunch}")
# print(f"\nNome do jogo: {game4.name}\nAno de Lançamento: {game4.yearLaunch}")