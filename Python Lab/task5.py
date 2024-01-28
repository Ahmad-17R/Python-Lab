def overs(balls):
    remainover=balls%6
    bowledovers=(balls-remainover)/6
    return remainover,bowledovers

bowled=int(input("Enter the number of balls: "))
firstnum,secondnum=overs(bowled)
print(secondnum," overs and ",firstnum," balls were bowled by the bowler")