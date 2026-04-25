# Cria o executável exclusivo para a atividade 01
add_executable(app_produto
    src/main.cpp
)

# Avisa o compilador que os cabeçalhos (.hpp) desta atividade estão na pasta include/
target_include_directories(app_produto PRIVATE include)