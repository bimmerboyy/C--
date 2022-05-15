import math
import pygame as pg
import pygamebg

(sirina, visina) = (400, 400) # otvaramo prozor
prozor = pygamebg.open_window(sirina, visina, "Паткица")

# bojimo pozadinu u zeleno
prozor.fill(pg.Color("green"))

# crtamo glavu
pg.draw.ellipse(prozor, pg.Color("yellow"), (50, 50, 300, 300))
pg.draw.ellipse(prozor, pg.Color("black"), (130, 150, 40, 40))
# crtamo usta
pg.draw.ellipse(prozor, pg.Color("red"), (200, 200, 100, 120))
pg.draw.ellipse(prozor, pg.Color("black"), (270, 150, 40, 40))
# crtamo oči

# prikazujemo prozor i čekamo da ga korisnik isključi
pygamebg.wait_loop()