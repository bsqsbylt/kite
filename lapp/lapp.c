#define LUA_LIB

#include <lua.h>
#include <lauxlib.h>

static int
lhello(lua_State *L) {
    lua_pushstring(L, "world");
	return 1;
}


LUAMOD_API int
luaopen_lapp(lua_State *L) {
	luaL_checkversion(L);
	luaL_Reg l[] = {
		{ "hello", lhello },
		{ NULL, NULL },
	};
	
	luaL_newlib(L, l);
	return 1;
}
