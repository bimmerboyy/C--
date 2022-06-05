import pygame


pygame.init()


white = (255, 255, 255)
yellow = (255, 255, 0)
#green = (0, 255, 0)
blue = (0, 0, 128)


X = 600
Y = 600


display_surface = pygame.display.set_mode((X, Y))


pygame.display.set_caption('Show Text')


font = pygame.font.Font('freesansbold.ttf', 45)


text = font.render('Bakir Kučević VII-3', True, yellow, blue)


textRect = text.get_rect()


textRect.center = (X // 2, Y // 2)


while True:

	
	display_surface.fill(white)

	
	display_surface.blit(text, textRect)

	
	for event in pygame.event.get():

		
		if event.type == pygame.QUIT:

			
			pygame.quit()

			
			quit()

		
		pygame.display.update()
