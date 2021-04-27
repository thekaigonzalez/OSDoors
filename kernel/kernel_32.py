#Implement Log Methods
import doorsos


def log32_t(t):
    print("Logging to {}".format(doorsos.getcwd()))
    vrt = open("log", 'w')
    vrt.write(t)
    vrt.close()


class DoorsAssembly(object):
    def readDir(self, dir):
        doorsos.filesystem.readDirectory("./")