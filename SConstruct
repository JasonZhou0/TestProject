#choose the compiler
import shutil
import os

print('scons: Reading SConscript files completed!\n')

env = Environment(tools = ['gcc','gnulink'],CC='Tools\mingw64\\bin\\gcc.exe',SOURCE_DIRS=[os.getcwd()+'Source'],WorkSpace=os.getcwd())

Export('env')

if os.path.exists('Build'):
	shutil.rmtree('Build')

def FindSConscriptPath(dir_name):
	firt = 0
	Scon_Object = []
	for dirpath, dirnames, filenames in os.walk(dir_name):
		#for filename in filenames:
			if ("SConscript" in filenames):
				SConscript_path_file = os.path.join(dirpath,"SConscript")
				#print(SConscript_path_file)
				Scon_Object += SConscript([SConscript_path_file])
				#print(Scon_Object)
				#break
	return Scon_Object

print('Call SConscript files...')
Object = FindSConscriptPath(os.getcwd()+'\Source')
print('Call SConscript files completed!\n')

TARGETNAME = 'Build\\bin\\TestCode.exe'
# LIB # = Split('jsoncpp logger ACE basetool tinyxml pthread dl rt')
FILELIST = Object #Glob('*.cpp')
HEADFILEPATH = Split('source\\')
# LIB_DIR # = Split('../../3rd/lib ../../common/lib')

print('Linking...')

env.Program(target = TARGETNAME,source = FILELIST)#,CPPPATH = HEADFILEPATH)#,LIBS = LIB    ,LIBPATH = LIB_DIR