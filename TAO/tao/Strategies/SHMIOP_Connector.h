// This may look like C, but it's really -*- C++ -*-
// $Id$

// ============================================================================
//
// = LIBRARY
//    TAO
//
// = FILENAME
//    SHMIOP_Connector.h
//
// = DESCRIPTION
//    IIOP specific connector processing
//
// = AUTHOR
//    Nanbor Wang <nanbor@cs.wustl.edu>
//
// ============================================================================

#ifndef TAO_SHMIOP_CONNECTOR_H
#define TAO_SHMIOP_CONNECTOR_H
#include "ace/pre.h"

#include "tao/corbafwd.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#if defined (TAO_HAS_SHMIOP) && (TAO_HAS_SHMIOP != 0)

#include "ace/Connector.h"
#include "ace/MEM_Connector.h"
#include "tao/Pluggable.h"
#include "SHMIOP_Connect.h"
#include "tao/Resource_Factory.h"

// ****************************************************************

class TAO_Strategies_Export TAO_SHMIOP_Connect_Creation_Strategy : public ACE_Creation_Strategy<TAO_SHMIOP_Client_Connection_Handler>
{
  // = TITLE
  //   Helper creation strategy
  //
  // = DESCRIPTION
  //   Creates SHMIOP_Client_Connection_Handler objects but satisfies
  //   the interface required by the
  //   ACE_Creation_Strategy<TAO_SHMIOP_Client_Connection_Handler>
  //
public:
  TAO_SHMIOP_Connect_Creation_Strategy (ACE_Thread_Manager * = 0,
                                        TAO_ORB_Core* orb_core = 0,
                                        CORBA::Boolean flag = 0);

  ~TAO_SHMIOP_Connect_Creation_Strategy (void);
  // Default destructor

  virtual int make_svc_handler (TAO_SHMIOP_Client_Connection_Handler *&sh);
  // Makes TAO_SHMIOP_Client_Connection_Handlers

private:
  TAO_ORB_Core* orb_core_;
  // The ORB

  CORBA::Boolean lite_flag_;
  // Are we using lite?
};

// ****************************************************************

class TAO_Strategies_Export TAO_SHMIOP_Connector : public TAO_Connector
{
  // = TITLE
  //   SHMIOP-specific Connector bridge for pluggable protocols.
  //
  // = DESCRIPTION
  //   Concrete instance of the TAO_Connector class.  Responsible
  //   for establishing a connection with a server and is called from the
  //   Connector_Registory.
  //
public:
  // = Initialization and termination methods.
  TAO_SHMIOP_Connector (CORBA::Boolean flag = 0);
  // Constructor.

  ~TAO_SHMIOP_Connector (void);
  // Default destructor

  // = The TAO_Connector methods, please check the documentation on
  // Pluggable.h
  int open (TAO_ORB_Core *orb_core);
  int close (void);
  int connect (TAO_Base_Connection_Property *prop,
               TAO_Transport *&transport,
               ACE_Time_Value *max_wait_time,
               CORBA::Environment &ACE_TRY_ENV);
  int preconnect (const char *preconnections);
  TAO_Profile *create_profile (TAO_InputCDR& cdr);

  virtual int check_prefix (const char *endpoint);

  virtual char object_key_delimiter (void) const;

protected:
  // = More TAO_Connector methods, please check the documentation on
  //   Pluggable.h
  virtual void make_profile (const char *endpoint,
                             TAO_Profile *&,
                             CORBA::Environment &ACE_TRY_ENV = TAO_default_environment ());

public:

  typedef ACE_NOOP_Concurrency_Strategy<TAO_SHMIOP_Client_Connection_Handler>
          TAO_NULL_ACTIVATION_STRATEGY;

  typedef ACE_Connect_Strategy<TAO_SHMIOP_Client_Connection_Handler,
                               ACE_MEM_CONNECTOR>
          TAO_CONNECT_STRATEGY ;

  typedef ACE_Strategy_Connector<TAO_SHMIOP_Client_Connection_Handler,
                                 ACE_MEM_CONNECTOR>
          TAO_SHMIOP_BASE_CONNECTOR;

private:
  ACE_MEM_Addr address_;
  // local address

  TAO_NULL_ACTIVATION_STRATEGY null_activation_strategy_;
  // Our activation strategy

  TAO_CONNECT_STRATEGY connect_strategy_;
  // Our connect strategy

  TAO_SHMIOP_BASE_CONNECTOR base_connector_;
  // The connector initiating connection requests for IIOP.

  TAO_SHMIOP_Connect_Creation_Strategy creation_strategy_;
  // Our creation strategy

  CORBA::Boolean lite_flag_;
  // Do we need to use a GIOP_Lite for sending messages?
};

#endif /* TAO_HAS_SHMIOP && TAO_HAS_SHMIOP != 0 */

#include "ace/post.h"
#endif  /* TAO_SHMIOP_CONNECTOR_H */
