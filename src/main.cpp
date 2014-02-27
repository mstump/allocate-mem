// This is free and unencumbered software released into the public domain.

// Anyone is free to copy, modify, publish, use, compile, sell, or
// distribute this software, either in source code form or as a compiled
// binary, for any purpose, commercial or non-commercial, and by any
// means.

// In jurisdictions that recognize copyright laws, the author or authors
// of this software dedicate any and all copyright interest in the
// software to the public domain. We make this dedication for the benefit
// of the public at large and to the detriment of our heirs and
// successors. We intend this dedication to be an overt act of
// relinquishment in perpetuity of all present and future rights to this
// software under copyright law.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
// OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
// OTHER DEALINGS IN THE SOFTWARE.

// For more information, please refer to <http://unlicense.org/>

#include <chrono>
#include <iostream>
#include <thread>
#include <vector>

int
main(
   int   argc,
   char* argv[])
{
   if ( argc != 2 ) {
      std::cerr << "Only 1 argument supported, the amount of memory to allocate in GB" << std::endl;
      std::cerr << "Example: " << argv[0] << " 4" << std::endl;
      return -1;
   }

   long int gigs = strtol(argv[1], NULL, 10);

   std::vector<unsigned char> mem(gigs * 1073741824, 0);

   for (;;) {
      std::this_thread::sleep_for(std::chrono::seconds(1));
   }

   return 0;
}
