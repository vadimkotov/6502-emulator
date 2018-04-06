#include <stdio.h>
#include <stdint.h>

#include "RAM.h"
#include "CPU.h"

#define ROM_ADDRESS 0x8000



void print_cpu_state_json(CPU* cpu) {
  //d::cout << cpu->PC << '\n';
  printf("{\n");
  printf("  \"%s\": \"%d\",\n", "A" , cpu->A);
  printf("  \"%s\": \"%d\",\n", "X" , cpu->X);
  printf("  \"%s\": \"%d\",\n", "Y" , cpu->Y);
  printf("  \"%s\": \"%d\",\n", "SP" , cpu->SP);
  printf("  \"%s\": \"%d\",\n", "PC" , cpu->PC);
  printf("  \"%s\": \"%d\"\n", "FLAGS" , cpu->getFlags());
  printf("}\n"); 
}


int main(int argc, char* argv[]) {
  RAM* ram = new RAM();
  CPU* cpu = new CPU(ram);

  cpu->reset();
  print_cpu_state_json(cpu);

  delete cpu;
  delete ram;
  return 0;
}
