// $Id$

// ============================================================================
//
// = LIBRARY
//     TAO/tests/Param_Test
//
// = FILENAME
//     complex_any.h
//
// = DESCRIPTION
//     Tests complex Anys
//
// = AUTHORS
//     Aniruddha Gokhale, Jeff Parsons, Frank Buschmann
//
// ============================================================================

#ifndef PARAM_TEST_COMPLEX_ANY_H
#define PARAM_TEST_COMPLEX_ANY_H

#include "param_testC.h"

// =*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
//                        test complex Anys
// =*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
class Test_Complex_Any
{
public:
  Test_Complex_Any (void);
  // ctor

  ~Test_Complex_Any (void);
  // dtor

  int run_sii_test (Param_Test_ptr objref);
  // run the SII test

  const char *opname (void) const;
  // return operation name

  int init_parameters (Param_Test_ptr objref);
  // set values for parameters

  int reset_parameters (void);
  // reset values for CORBA

  CORBA::Boolean check_validity (void);
  // check if results are valid

  CORBA::Boolean check_validity (CORBA::Request_ptr req);
  // check if results are valid. This is used for DII results

  void print_values (void);
  // print all the values

  void dii_req_invoke (CORBA::Request *);
  // invoke DII request with appropriate exception handling.

private:
  char *opname_;
  // operation name

  static size_t counter;
  // test counter.

  CORBA::Any in_;
  // in parameter

  CORBA::Any inout_;
  // inout parameter

  CORBA::Any_var out_;
  // out parameter

  CORBA::Any_var ret_;
  // return value

  CORBA::Boolean comp_engine (const CORBA::AnySeq *in_seq,
                              const CORBA::AnySeq *comp_seq);
  // Compares the sequence extracted from in_ to one of the others.
};

#endif /* PARAM_TEST_COMPLEX_ANY_H */
