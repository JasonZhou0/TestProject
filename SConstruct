#choose the compiler
import shutil
import os

if os.path.exists('Build'):
	shutil.rmtree('Build')

env = Environment(tools = ['gcc','gnulink'],CC='Tools\mingw64\\bin\\gcc.exe')

Export('env')

Object = SConscript(['Source\\Generic\\Platform\\CheckAccount\\SConscript']) 
Object += SConscript(['Source\\Generic\\Driver\\Display\\SConscript']) 
Object += SConscript(['Source\\Generic\\Platform\\StartUp\\SConscript']) 

TARGETNAME = 'Build\\bin\\TestCode.exe'
# LIB # = Split('jsoncpp logger ACE basetool tinyxml pthread dl rt')
FILELIST = Object #Glob('*.cpp')
HEADFILEPATH = Split('source\\')
# LIB_DIR # = Split('../../3rd/lib ../../common/lib')

env.Program(target = TARGETNAME,source = FILELIST,CPPPATH = HEADFILEPATH)#,LIBS = LIB    ,LIBPATH = LIB_DIR