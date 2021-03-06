// -*- C++ -*-

//=============================================================================
/**
 *  @file    Session_Context_T.h
 *
 *  This file contains the declaration of a mixin base class for
 *  the generated context class.
 *
 *  @author Jeff Parsons <j.parsons@vanderbilt.edu>
 */
//=============================================================================

#ifndef CIAO_SESSION_CONTEXT_IMPL_T_H
#define CIAO_SESSION_CONTEXT_IMPL_T_H

#include /**/ "ace/pre.h"

#include "ciao/Contexts/Context_Impl_Base_T.h"
#include "ciao/Containers/Session/Session_ContainerC.h"
#include "tao/LocalObject.h"
#include "tao/PortableServer/PS_ForwardC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

namespace CIAO
{
  /**
   * @class Session_Context_Impl_T
   *
   * @brief Mixin base class for generated context.
   *
   * This class implements operations and contains parameterized
   * members common to all generated servants.
   */
  template <typename BASE_CTX,
            typename COMP>
  class Session_Context_Impl_T : public virtual BASE_CTX,
                               public virtual Context_Impl_Base_T< ::CIAO::Session_Container>,
                               public virtual ::CORBA::LocalObject
  {
  public:
    /// Type definition of the context type.
    typedef BASE_CTX context_type;

    /// Type definition of the var type for the context.
    typedef typename context_type::_var_type _var_type;

    /// Type definition of the component type.
    typedef COMP component_type;

    Session_Context_Impl_T (Components::CCMHome_ptr the_home,
                          ::CIAO::Session_Container_ptr c,
                          PortableServer::Servant sv,
                          const char* id);

    virtual ~Session_Context_Impl_T (void);

    /// Operation from ::Components::SessionContext.
    virtual CORBA::Object_ptr get_CCM_object ();

  private:
    PortableServer::Servant servant_;
  };
}

#if defined (ACE_TEMPLATES_REQUIRE_SOURCE)
#include "ciao/Contexts/Session/Session_Context_T.cpp"
#endif /* ACE_TEMPLATES_REQUIRE_SOURCE */

#if defined (ACE_TEMPLATES_REQUIRE_PRAGMA)
#pragma implementation ("ciao/Contexts/Session/Session_Context_T.cpp")
#endif /* ACE_TEMPLATES_REQUIRE_PRAGMA */

#include /**/ "ace/post.h"

#endif /* CIAO_SESSION_CONTEXT_IMPL_T_H */
