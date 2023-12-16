find_package(nyu-cmake CONFIG REQUIRED)
find_package(catch2 3 CONFIG REQUIRED)
# find_package(nyu-util CONFIG REQUIRED)
nyu_add_sv(lab4
  Exercise1.sv
  Exercise2.sv 
  Exercise3.sv 
  Exercise4.sv
  Mysteries/Mystery1.sv
  Mysteries/Mystery2.sv
)
