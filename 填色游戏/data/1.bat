for /L %%i in (0,1,36) do (
ren game%%i.in game.in
1.exe
ren game.in game%%i.in
ren game.out game%%i.out
)