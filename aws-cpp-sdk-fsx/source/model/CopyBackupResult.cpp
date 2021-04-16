﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/CopyBackupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CopyBackupResult::CopyBackupResult()
{
}

CopyBackupResult::CopyBackupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CopyBackupResult& CopyBackupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Backup"))
  {
    m_backup = jsonValue.GetObject("Backup");

  }



  return *this;
}
