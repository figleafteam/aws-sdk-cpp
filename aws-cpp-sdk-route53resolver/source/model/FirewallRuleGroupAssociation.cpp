﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/FirewallRuleGroupAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

FirewallRuleGroupAssociation::FirewallRuleGroupAssociation() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_firewallRuleGroupIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_mutationProtection(MutationProtectionStatus::NOT_SET),
    m_mutationProtectionHasBeenSet(false),
    m_managedOwnerNameHasBeenSet(false),
    m_status(FirewallRuleGroupAssociationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_modificationTimeHasBeenSet(false)
{
}

FirewallRuleGroupAssociation::FirewallRuleGroupAssociation(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_firewallRuleGroupIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_mutationProtection(MutationProtectionStatus::NOT_SET),
    m_mutationProtectionHasBeenSet(false),
    m_managedOwnerNameHasBeenSet(false),
    m_status(FirewallRuleGroupAssociationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_modificationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

FirewallRuleGroupAssociation& FirewallRuleGroupAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirewallRuleGroupId"))
  {
    m_firewallRuleGroupId = jsonValue.GetString("FirewallRuleGroupId");

    m_firewallRuleGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MutationProtection"))
  {
    m_mutationProtection = MutationProtectionStatusMapper::GetMutationProtectionStatusForName(jsonValue.GetString("MutationProtection"));

    m_mutationProtectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManagedOwnerName"))
  {
    m_managedOwnerName = jsonValue.GetString("ManagedOwnerName");

    m_managedOwnerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = FirewallRuleGroupAssociationStatusMapper::GetFirewallRuleGroupAssociationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatorRequestId"))
  {
    m_creatorRequestId = jsonValue.GetString("CreatorRequestId");

    m_creatorRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModificationTime"))
  {
    m_modificationTime = jsonValue.GetString("ModificationTime");

    m_modificationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue FirewallRuleGroupAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_firewallRuleGroupIdHasBeenSet)
  {
   payload.WithString("FirewallRuleGroupId", m_firewallRuleGroupId);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_mutationProtectionHasBeenSet)
  {
   payload.WithString("MutationProtection", MutationProtectionStatusMapper::GetNameForMutationProtectionStatus(m_mutationProtection));
  }

  if(m_managedOwnerNameHasBeenSet)
  {
   payload.WithString("ManagedOwnerName", m_managedOwnerName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", FirewallRuleGroupAssociationStatusMapper::GetNameForFirewallRuleGroupAssociationStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("CreationTime", m_creationTime);

  }

  if(m_modificationTimeHasBeenSet)
  {
   payload.WithString("ModificationTime", m_modificationTime);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
