import os
class File:
    def __init__(self, name):
        self.name = name

class Folder:
    def __init__(self, name):
        self.name = name
        self.folders = []
        self.files = []
        dirs = os.listdir(name)
        for _dir in dirs:
            if _dir[0] == '.' or _dir[0]=='_': continue
            if _dir.find(".") == -1:
                # this is a folder
                f = Folder(name+"/"+_dir)
                self.folders.append(f)
            else:
                self.files.append(File(name+"/"+_dir))

f_base = Folder(".")
def main_loop():
    display = '''
1 : display experiment list
3 : exit'''
    print(display)
    choice = int(input())
    if choice==1:
        print("haha")
        for fol in f_base.folders:
            print(f_base.folders.index(fol), (fol.name))
        ch=int(input())
        experiment_loop(f_base.folders[ch])
    elif choice == 3: return
    else:main_loop()

def experiment_loop(exp_folder):
    display = '''
1 : display experiment list
2 : display experimants
3 : exit'''
    print(exp_folder.name)
    cppfiles = []
    for file in exp_folder.files:
        # print(exp_folder.files.index(file), file.name)
        if file.name.find(".cpp") == -1: continue
        f = open(file.name)
        print(exp_folder.files.index(file), f.readline()[2:], end="")
        cppfiles.append(file)
        f.close()
    choice = int(input())
    fil = exp_folder.files[choice]
    os.system("gedit "+fil.name)

main_loop()



        

