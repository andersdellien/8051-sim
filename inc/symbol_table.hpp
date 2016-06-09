#ifndef _SYMBOL_TABLE_HPP
#define _SYMBOL_TABLE_HPP

#include <string>
#include <cstdint>
#include <map>

class SymbolTable
{
  private:
    std::map<std::uint16_t, std::string> addressMap;
    std::map<std::string, std::uint16_t> symbolMap;
  public:
    void ParseFile(const std::string &fileName);
    void LookupSymbol(const std::string &symbolName, std::uint16_t &address, bool &found);
    void LookupAddress(const std::uint16_t address, std::string &symbolName, bool &found);
   static SymbolTable *GetInstance();
};

#endif
