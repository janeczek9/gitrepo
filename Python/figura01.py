#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  figura01.py
#  

import turtle


def main(args):
    turtle.setup(800, 600)
    turtle.penup()
    turtle.setpos(-100, 100)
    turtle.pendown()
    for i in range (4):
        turtle.forward(200)
        turtle.right(90)
    turtle.done()
    return 

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
