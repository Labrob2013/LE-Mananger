@echo off
if %1 == "map" (
copy "..\lifeEngine\*.bsp" "..\lifeEngine\maps" /Y
del "../lifeEngine/*.lin"
del "../lifeEngine/*.map"
del "../lifeEngine/*.srf"
del "../lifeEngine/*.prt"
del "../lifeEngine/*.bsp"
)