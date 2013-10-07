#! /usr/bin/python

import sys

fringe = []
values = []
visited = []
side = 0 

def expand(x,y):
  global fringe
  global values
  global visited 

  if x-1 >= 0 :
    values[y][x] += values[y][x-1] 
  if y-1 >= 0 :
    values[y][x] += values[y-1][x] 

  if x+1 <= side  and not ([x+1,y] in fringe):
    fringe.append([x+1,y])
  
  if y+1 <= side and not ([x,y+1] in fringe):
    fringe.append([x,y+1])

  if len(fringe) > 0:
    point = fringe.pop(0)
    expand(point[0],point[1])
  else:
    for i in values:
      print i



if __name__ == "__main__":
  side = int(sys.argv[1])
  values = [[0 for i in range(side+1)] for x in range(side+1)]
  values[0][0] = 1 
  expand(0,0)
