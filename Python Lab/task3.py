def calculated(country,area):
    result=area/148940000*100

    return result


country=input("Enter the name of the country: ")
area=int(input("Enter the area of the area: "))

print(country," is ",calculated(country,area),"% of the total world's landmass")