/*=========================================================================

Library:   TubeTK

Copyright 2010 Kitware Inc. 28 Corporate Drive,
Clifton Park, NY, 12065, USA.

All rights reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

=========================================================================*/
#ifndef __itkBoolArrayValue_h
#define __itkBoolArrayValue_h

#include "itkParameterValue.h"

#include <vector>

namespace itk
{

/**
 * \class BoolArrayValue
 *
 * \brief Holds the value of a BOOL_ARRAY ParameterValueType.
 *
 * \sa ParameterValue
 * */
class BoolArrayValue: public ParameterValue
{
public:
  typedef std::vector< bool > BoolArrayType;

  BoolArrayValue()
    {
    this->m_ValueType = BOOL_ARRAY;
    }

  const BoolArrayType & GetValue() const
    {
    return m_BoolArray;
    }

  BoolArrayType & GetModifiableValue()
    {
    return m_BoolArray;
    }

  void SetValue( const BoolArrayType & value )
    {
    m_BoolArray = value;
    }

private:
  BoolArrayType m_BoolArray;
};

} // end namespace itk

#endif
