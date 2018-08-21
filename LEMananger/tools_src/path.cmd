@echo off
RMDIR /s/q "configs"
md "configs"

cd ../
del "LEMananger/configs/path.str"
cd > "LEMananger/configs/path.str"

cd "maps"
del "../LEMananger/configs/path_maps.str"
cd > "../LEMananger/configs/path_maps.str"

cd ../

cd "radiant"
del "../LEMananger/configs/path_radiant.str"
cd > "../LEMananger/configs/path_radiant.str"

cd ../

cd "lifeEngine"
del "../LEMananger/configs/path_lifeengine.str"
cd > "../LEMananger/configs/path_lifeengine.str"