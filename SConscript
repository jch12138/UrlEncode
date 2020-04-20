
from building import *

cwd  = GetCurrentDir()
path = [cwd + '/inc']

src  = Glob('src/UrlEncode.c')

if GetDepend(['URLENCODE_USING_SAMPLES']):
    src += Glob('examples/*.c')

group = DefineGroup('UrlEncode', src, depend = ['PKG_USING_URLENCODE'], CPPPATH = path)

Return('group')