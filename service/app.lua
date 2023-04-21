local ltask = require "ltask"
local lapp = require "lapp"

local S = {}

print("App init :", ...)
print("App hello", lapp.hello())



function S.ping(...)
	return "PING", ...
end



return S
