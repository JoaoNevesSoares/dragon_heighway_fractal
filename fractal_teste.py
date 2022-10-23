import turtle
from itertools import cycle
import dragon

interations = int(input("Enter number of iterations: "))
dragon_grammar= dragon.dragon(interations)
angulo = 90
turtle.ht()
turtle.speed(0)
turtle.bgcolor('WHITE')
COLORS = ['BLUE','RED','BLACK']
iter_color = cycle(COLORS)
i =0
for regra in dragon_grammar:
    if(i%410 == 0):
        turtle.color(next(iter_color))
    if(regra == 'H' or regra == 'F'):
        turtle.forward(10)
    elif(regra == '-'):
        turtle.right(angulo)
    elif(regra == '+'):
        turtle.left(angulo)
    i +=1
turtle.exitonclick()