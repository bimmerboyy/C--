import math
import pygame as pg
import pygamebg

(sirina, visina) = (400, 400) # otvaramo prozor
prozor = pygamebg.open_window(sirina, visina, "Паткица")

# bojimo pozadinu u zeleno
prozor.fill(pg.Color("green"))

# crtamo glavu
pg.draw.ellipse(prozor, pg.Color("yellow"), (40, 50, 200, 100))
pg.draw.ellipse(prozor, pg.Color("black"), (100, 40, 50, 100), 1)
# crtamo usta
pg.draw.ellipse(prozor, pg.Color("red"), (70, 100, 50, 30))
pg.draw.ellipse(prozor, pg.Color("black"), (200, 20, 100, 40), 1)
# crtamo oči

# prikazujemo prozor i čekamo da ga korisnik isključi
pygamebg.wait_loop()
