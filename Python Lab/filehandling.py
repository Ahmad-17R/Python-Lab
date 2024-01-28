import os.path

def main():
    if(os.path.exists("data.txt")):
        f=open("data.txt",'w')
        f.write("U are my hero!")
        f.close()
    else:
        print("File does not exist!")

if __name__=="__main__":
    main()