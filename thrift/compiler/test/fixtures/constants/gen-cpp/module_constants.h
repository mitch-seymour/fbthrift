/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef  _module_CONSTANTS_H
#define  _module_CONSTANTS_H

#include "module_types.h"



struct module_constants {
  static constexpr int32_t const myInt_ = 1337;
  static constexpr int32_t const myInt() { return myInt_; }
  // consider using folly::StringPiece instead of std::string whenever possible
  // to referencing this statically allocated string constant, in order to 
  // prevent unnecessary allocations
  static constexpr char const *const name_ = "Mark Zuckerberg";
  static constexpr char const *const name() { return name_; }
  static std::vector<std::map<std::string, int32_t> >  const &states();
  static Internship const &instagram();
  static std::vector<Internship>  const &internList();
  // consider using folly::StringPiece instead of std::string whenever possible
  // to referencing this statically allocated string constant, in order to 
  // prevent unnecessary allocations
  static constexpr char const *const apostrophe_ = "'";
  static constexpr char const *const apostrophe() { return apostrophe_; }
  // consider using folly::StringPiece instead of std::string whenever possible
  // to referencing this statically allocated string constant, in order to 
  // prevent unnecessary allocations
  static constexpr char const *const tripleApostrophe_ = "'''";
  static constexpr char const *const tripleApostrophe() { return tripleApostrophe_; }
  // consider using folly::StringPiece instead of std::string whenever possible
  // to referencing this statically allocated string constant, in order to 
  // prevent unnecessary allocations
  static constexpr char const *const quotationMark_ = "\"";
  static constexpr char const *const quotationMark() { return quotationMark_; }
  // consider using folly::StringPiece instead of std::string whenever possible
  // to referencing this statically allocated string constant, in order to 
  // prevent unnecessary allocations
  static constexpr char const *const backslash_ = "\\";
  static constexpr char const *const backslash() { return backslash_; }
  // consider using folly::StringPiece instead of std::string whenever possible
  // to referencing this statically allocated string constant, in order to 
  // prevent unnecessary allocations
  static constexpr char const *const escaped_a_ = "\x61";
  static constexpr char const *const escaped_a() { return escaped_a_; }
  static std::map<std::string, int32_t>  const &char2ascii();
};

struct  __attribute__((__deprecated__("module_constants_codemod is a transitional class only intended for codemods from the deprecated moduleConstants to module_constants. Consider switching to the latter as soon as possible."))) module_constants_codemod {
  static constexpr int32_t const myInt() { return 1337; }
  static std::string const &name();
  static std::vector<std::map<std::string, int32_t> >  const &states();
  static Internship const &instagram();
  static std::vector<Internship>  const &internList();
  static std::string const &apostrophe();
  static std::string const &tripleApostrophe();
  static std::string const &quotationMark();
  static std::string const &backslash();
  static std::string const &escaped_a();
  static std::map<std::string, int32_t>  const &char2ascii();
};

class __attribute__((__deprecated__("moduleConstants suffers from the 'static initialization order fiasco' (https://isocpp.org/wiki/faq/ctors#static-init-order) and may CRASH your program. Instead, use module_constants::CONSTANT_NAME()"))) moduleConstants {
public:
  moduleConstants();

  int32_t myInt;
  std::string name;
  std::vector<std::map<std::string, int32_t> >  states;
  Internship instagram;
  std::vector<Internship>  internList;
  std::string apostrophe;
  std::string tripleApostrophe;
  std::string quotationMark;
  std::string backslash;
  std::string escaped_a;
  std::map<std::string, int32_t>  char2ascii;
};



#endif
