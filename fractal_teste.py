import turtle
import dragon

interations = int(input("Enter number of iterations: "))
dragon_grammar= dragon.dragon(interations)
angulo = 90
turtle.ht()
turtle.speed(0) 
turtle.color('RED') 
turtle.bgcolor('WHITE') 
#turtle.forward(25)
for regra in dragon_grammar:

    if(regra == 'H' or regra == 'F'):
        turtle.forward(10)
    elif(regra == '-'):
        turtle.right(angulo)
    elif(regra == '+'):
        turtle.left(angulo)
turtle.exitonclick()