// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be/be_codegen.cpp:151

#ifndef _TAO_IDL_MIF_SCHEDULINGC_H_
#define _TAO_IDL_MIF_SCHEDULINGC_H_


#include "tao/corba.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/RTScheduling/RTScheduler.h"
#include "tao/RTCORBA/RTCORBA.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO 

#if defined (TAO_EXPORT_NESTED_CLASSES)
#  if defined (TAO_EXPORT_NESTED_MACRO)
#    undef TAO_EXPORT_NESTED_MACRO
#  endif /* defined (TAO_EXPORT_NESTED_MACRO) */
#  define TAO_EXPORT_NESTED_MACRO 
#endif /* TAO_EXPORT_NESTED_CLASSES */

#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option push -w-rvl -w-rch -w-ccc -w-inl
#endif /* __BORLANDC__ */

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:48

TAO_NAMESPACE  MIF_Scheduling
{
  
  // TAO_IDL - Generated from
  // be/be_type.cpp:254
  
  struct SchedulingParameter;
  
  typedef
    TAO_Fixed_Var_T<
        SchedulingParameter
      >
    SchedulingParameter_var;
  
  typedef
    SchedulingParameter &
    SchedulingParameter_out;
  
  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:52
  
  struct  SchedulingParameter
  {
    typedef SchedulingParameter_var _var_type;
    
    static void _tao_any_destructor (void *);
    CORBA::Long importance;
  };
  
  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:44
  
  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_SchedulingParameter;
  
  // TAO_IDL - Generated from
  // be/be_interface.cpp:584

#if !defined (_MIF_SCHEDULING_SCHEDULINGPARAMETERPOLICY__ODDS_N_ENDS_CH_)
#define _MIF_SCHEDULING_SCHEDULINGPARAMETERPOLICY__ODDS_N_ENDS_CH_
  
  class SchedulingParameterPolicy;
  typedef SchedulingParameterPolicy *SchedulingParameterPolicy_ptr;
  struct tao_SchedulingParameterPolicy_life;
  
  typedef
    TAO_Objref_Var_T<
        SchedulingParameterPolicy,
        tao_SchedulingParameterPolicy_life
      >
    SchedulingParameterPolicy_var;
  
  typedef
    TAO_Objref_Out_T<
        SchedulingParameterPolicy,
        tao_SchedulingParameterPolicy_life
      >
    SchedulingParameterPolicy_out;
  
  struct  tao_SchedulingParameterPolicy_life
  {
    static SchedulingParameterPolicy_ptr tao_duplicate (SchedulingParameterPolicy_ptr);
    static void tao_release (SchedulingParameterPolicy_ptr);
    static SchedulingParameterPolicy_ptr tao_nil (void);
    static CORBA::Boolean tao_marshal (
        SchedulingParameterPolicy_ptr,
        TAO_OutputCDR &
      );
  };
  
  struct  tao_SchedulingParameterPolicy_cast
  {
    static SchedulingParameterPolicy_ptr tao_narrow (
        CORBA::Object_ptr
        ACE_ENV_ARG_DECL
      );
    static CORBA::Object_ptr tao_upcast (void *);
  };

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:53

#if !defined (_MIF_SCHEDULING_SCHEDULINGPARAMETERPOLICY_CH_)
#define _MIF_SCHEDULING_SCHEDULINGPARAMETERPOLICY_CH_
  
  class  SchedulingParameterPolicy
    : public virtual CORBA::Policy
  {
  public:
    typedef SchedulingParameterPolicy_ptr _ptr_type;
    typedef SchedulingParameterPolicy_var _var_type;
    static int _tao_class_id;
    
    // The static operations.
    static SchedulingParameterPolicy_ptr _duplicate (SchedulingParameterPolicy_ptr obj);
    
    static SchedulingParameterPolicy_ptr _narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static SchedulingParameterPolicy_ptr _unchecked_narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static SchedulingParameterPolicy_ptr _nil (void)
      {
        return (SchedulingParameterPolicy_ptr)0;
      }
    
    static void _tao_any_destructor (void *);
    
    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46
    
    virtual ::MIF_Scheduling::SchedulingParameter value (
        ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      )) = 0;
    
    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46
    
    virtual void value (
        const MIF_Scheduling::SchedulingParameter & value
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      )) = 0;
    
    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:210
    
    virtual void *_tao_QueryInterface (ptrdiff_t type);
    
    virtual const char* _interface_repository_id (void) const;
    virtual CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    SchedulingParameterPolicy (void);
    virtual ~SchedulingParameterPolicy (void);
  
  private:
    SchedulingParameterPolicy (const SchedulingParameterPolicy &);
    void operator= (const SchedulingParameterPolicy &);
  };

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:44
  
  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_SchedulingParameterPolicy;
  
  // TAO_IDL - Generated from
  // be/be_interface.cpp:584

#if !defined (_MIF_SCHEDULING_SCHEDULER__ODDS_N_ENDS_CH_)
#define _MIF_SCHEDULING_SCHEDULER__ODDS_N_ENDS_CH_
  
  class Scheduler;
  typedef Scheduler *Scheduler_ptr;
  struct tao_Scheduler_life;
  
  typedef
    TAO_Objref_Var_T<
        Scheduler,
        tao_Scheduler_life
      >
    Scheduler_var;
  
  typedef
    TAO_Objref_Out_T<
        Scheduler,
        tao_Scheduler_life
      >
    Scheduler_out;
  
  struct  tao_Scheduler_life
  {
    static Scheduler_ptr tao_duplicate (Scheduler_ptr);
    static void tao_release (Scheduler_ptr);
    static Scheduler_ptr tao_nil (void);
    static CORBA::Boolean tao_marshal (
        Scheduler_ptr,
        TAO_OutputCDR &
      );
  };
  
  struct  tao_Scheduler_cast
  {
    static Scheduler_ptr tao_narrow (
        CORBA::Object_ptr
        ACE_ENV_ARG_DECL
      );
    static CORBA::Object_ptr tao_upcast (void *);
  };

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:53

#if !defined (_MIF_SCHEDULING_SCHEDULER_CH_)
#define _MIF_SCHEDULING_SCHEDULER_CH_
  
  class  Scheduler
    : public virtual RTScheduling::Scheduler
  {
  public:
    typedef Scheduler_ptr _ptr_type;
    typedef Scheduler_var _var_type;
    static int _tao_class_id;
    
    // The static operations.
    static Scheduler_ptr _duplicate (Scheduler_ptr obj);
    
    static Scheduler_ptr _narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static Scheduler_ptr _unchecked_narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static Scheduler_ptr _nil (void)
      {
        return (Scheduler_ptr)0;
      }
    
    static void _tao_any_destructor (void *);
    
    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46
    
    virtual ::MIF_Scheduling::SchedulingParameterPolicy_ptr create_scheduling_parameter (
        const MIF_Scheduling::SchedulingParameter & value
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      )) = 0;
    
    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:210
    
    virtual void *_tao_QueryInterface (ptrdiff_t type);
    
    virtual const char* _interface_repository_id (void) const;
    virtual CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    Scheduler (void);
    virtual ~Scheduler (void);
  
  private:
    Scheduler (const Scheduler &);
    void operator= (const Scheduler &);
  };

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:44
  
  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_Scheduler;

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

}
TAO_NAMESPACE_CLOSE // module MIF_Scheduling

// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_ch.cpp:52

 void operator<<= (CORBA::Any &, const MIF_Scheduling::SchedulingParameter &); // copying version
 void operator<<= (CORBA::Any &, MIF_Scheduling::SchedulingParameter*); // noncopying version
 CORBA::Boolean operator>>= (const CORBA::Any &, MIF_Scheduling::SchedulingParameter *&); // deprecated
 CORBA::Boolean operator>>= (const CORBA::Any &, const MIF_Scheduling::SchedulingParameter *&);

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:52

 void operator<<= (CORBA::Any &, MIF_Scheduling::SchedulingParameterPolicy_ptr); // copying
 void operator<<= (CORBA::Any &, MIF_Scheduling::SchedulingParameterPolicy_ptr *); // non-copying
 CORBA::Boolean operator>>= (const CORBA::Any &, MIF_Scheduling::SchedulingParameterPolicy_ptr &);

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:52

 void operator<<= (CORBA::Any &, MIF_Scheduling::Scheduler_ptr); // copying
 void operator<<= (CORBA::Any &, MIF_Scheduling::Scheduler_ptr *); // non-copying
 CORBA::Boolean operator>>= (const CORBA::Any &, MIF_Scheduling::Scheduler_ptr &);

// TAO_IDL - Generated from
// be/be_visitor_root/cdr_op.cpp:48

#ifndef __ACE_INLINE__

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:53

 CORBA::Boolean operator<< (TAO_OutputCDR &, const MIF_Scheduling::SchedulingParameter &);
 CORBA::Boolean operator>> (TAO_InputCDR &, MIF_Scheduling::SchedulingParameter &);

// TAO_IDL - Generated from
// be/be_visitor_root/cdr_op.cpp:64

#endif /* __ACE_INLINE__ */

// TAO_IDL - Generated from
// be/be_codegen.cpp:1059

#if defined (__ACE_INLINE__)
#include "MIF_SchedulingC.i"
#endif /* defined INLINE */

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option pop
#endif /* __BORLANDC__ */

#endif /* ifndef */

