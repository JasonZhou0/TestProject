#choose the compiler
import shutil
import os

if os.path.exists('Build'):
	shutil.rmtree('Build')

env = Environment(tools = ['gcc','gnulink'],CC='Tools\mingw64\\bin\\gcc.exe')

Export('env')

def find_dir(dir_name):
	firt = 0
	for dirpath, dirnames, filenames in os.walk(dir_name):
		for filename in filenames:
			if ("SConscript" in filenames):
				SConscript_path_file = os.path.join(dirpath,"SConscript")
				if firt == 0:
					Object = SConscript([SConscript_path_file])
					firt = 1
				else:
					Object += SConscript([SConscript_path_file])
				print(SConscript_path_file)
				break

find_dir(os.getcwd()+'\Source')

TARGETNAME = 'Build\\bin\\TestCode.exe'
# LIB # = Split('jsoncpp logger ACE basetool tinyxml pthread dl rt')
FILELIST = Object #Glob('*.cpp')
HEADFILEPATH = Split('source\\')
# LIB_DIR # = Split('../../3rd/lib ../../common/lib')

env.Program(target = TARGETNAME,source = FILELIST,CPPPATH = HEADFILEPATH)#,LIBS = LIB    ,LIBPATH = LIB_DIR