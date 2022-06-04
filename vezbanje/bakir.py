import pygame
import syspath


pygame.init()
display = pygame.display.set_mode((400,300,))


myfont = pygame.font.SysFont("verdana",20)

mytext = myfont.render("Pygame font and text",True,(255,0,0))

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()   
            exit()
    display.fill((0,0,0))

    display.blit(mytext,(100,120))

    pygame.display.update()
