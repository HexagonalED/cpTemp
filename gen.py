import random as rand


def gen(n) :
    size = rand.randrange(1,101);

    for total in range(0,n):
        fin = open("./input_2/{}.in".format(total+1),'w')
        fout = open("./output_2/{}.out".format(total+1),'w')
        result_name = []
        result_price = []
        fin.write(str(size)+"\n")
        for i in range(0,size):
            name = ""
            length = rand.randrange(1,101);
            for _ in range(0,length):
                name+=chr(rand.randrange(33,126))
            price = rand.randrange(0,100000)
            result_name.append(name)
            result_price.append(price)
            fin.write(name+" "+str(price)+"\n")
        fin.close()
        for i in range(0,size):
            fout.write(result_name[i]+"\n")
        for i in range(0,size):
            fout.write(str(result_price[i])+"\n")

if __name__ == "__main__":
    n = int(input())
    gen(n)
