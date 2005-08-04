/*
 * FILE          $Id: frpcdouble.cc,v 1.1 2005-07-19 13:02:53 vasek Exp $
 *
 * DESCRIPTION   
 *
 * AUTHOR        
 *              Miroslav Talasek <miroslav.talasek@firma.seznam.cz>
 *
 * Copyright (C) Seznam.cz a.s. 2005
 * All Rights Reserved
 *
 * HISTORY
 *       
 */
#include "frpcdouble.h"
#include "frpcpool.h"

namespace FRPC
{


Double_t::~Double_t()
{}


Value_t& FRPC::Double_t::clone(Pool_t &newPool) const
{
 return newPool.Double(value);   
}
}