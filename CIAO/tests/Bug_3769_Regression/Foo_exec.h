// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.7.4
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 *       http://doc.ece.uci.edu/
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// .\be\be_codegen.cpp:1217

#ifndef CIAO_FOO_EXEC_H_
#define CIAO_FOO_EXEC_H_


#include "FooEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "Foo_exec_export.h"
#include "tao/LocalObject.h"


namespace CIAO_Foo_Impl
{
  class FOO_EXEC_Export Foo_exec_i
    : public virtual Foo_Exec,
      public virtual ::CORBA::LocalObject
  {
  public:
    Foo_exec_i (void);
    virtual ~Foo_exec_i (void);
    
    //@{
    /** Supported operations and attributes. */
    
    //@}
    
    //@{
    /** Component attributes and port operations. */
    
    
    // TAO_IDL - Generated from
    // c:\middleware\ace_devo\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:42
    
    virtual ::CORBA::Short
    my_short (void);
    
    // TAO_IDL - Generated from
    // c:\middleware\ace_devo\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:42
    
    virtual void
    my_short (
      ::CORBA::Short my_short);
    
    // TAO_IDL - Generated from
    // c:\middleware\ace_devo\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:42
    
    virtual ::CORBA::Long
    my_long (void);
    
    // TAO_IDL - Generated from
    // c:\middleware\ace_devo\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:42
    
    virtual void
    my_long (
      ::CORBA::Long my_long);
    
    // TAO_IDL - Generated from
    // c:\middleware\ace_devo\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:42
    
    virtual ::CORBA::Float
    my_float (void);
    
    // TAO_IDL - Generated from
    // c:\middleware\ace_devo\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:42
    
    virtual void
    my_float (
      ::CORBA::Float my_float);
    
    // TAO_IDL - Generated from
    // c:\middleware\ace_devo\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:42
    
    virtual ::CORBA::Double
    my_double (void);
    
    // TAO_IDL - Generated from
    // c:\middleware\ace_devo\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:42
    
    virtual void
    my_double (
      ::CORBA::Double my_double);
    
    // TAO_IDL - Generated from
    // c:\middleware\ace_devo\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:42
    
    virtual ::short_sequence *
    my_short_sequence (void);
    
    // TAO_IDL - Generated from
    // c:\middleware\ace_devo\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:42
    
    virtual void
    my_short_sequence (
      const ::short_sequence & my_short_sequence);
    
    // TAO_IDL - Generated from
    // c:\middleware\ace_devo\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:42
    
    virtual ::long_sequence *
    my_long_sequence (void);
    
    // TAO_IDL - Generated from
    // c:\middleware\ace_devo\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:42
    
    virtual void
    my_long_sequence (
      const ::long_sequence & my_long_sequence);
    
    // TAO_IDL - Generated from
    // c:\middleware\ace_devo\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:42
    
    virtual ::float_sequence *
    my_float_sequence (void);
    
    // TAO_IDL - Generated from
    // c:\middleware\ace_devo\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:42
    
    virtual void
    my_float_sequence (
      const ::float_sequence & my_float_sequence);
    
    // TAO_IDL - Generated from
    // c:\middleware\ace_devo\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:42
    
    virtual ::double_sequence *
    my_double_sequence (void);
    
    // TAO_IDL - Generated from
    // c:\middleware\ace_devo\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:42
    
    virtual void
    my_double_sequence (
      const ::double_sequence & my_double_sequence);
    
    // TAO_IDL - Generated from
    // c:\middleware\ace_devo\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:42
    
    virtual ::Bar
    my_bar_struct (void);
    
    // TAO_IDL - Generated from
    // c:\middleware\ace_devo\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:42
    
    virtual void
    my_bar_struct (
      const ::Bar & my_bar_struct);
    //@}
    
    //@{
    /** Operations from Components::SessionComponent. */
    
    virtual void
    set_session_context (
      ::Components::SessionContext_ptr ctx);
    
    virtual void configuration_complete (void);
    
    virtual void ccm_activate (void);
    virtual void ccm_passivate (void);
    virtual void ccm_remove (void);
    //@}
    
  
  private:
    ::CCM_Foo_Context_var context_;
  };
  
  extern "C" FOO_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_Foo_Impl (void);
}

#endif /* ifndef */

