﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/accessanalyzer/model/FindingChangeType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/FindingStatus.h>
#include <aws/accessanalyzer/model/ResourceType.h>
#include <aws/accessanalyzer/model/FindingSource.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>An access preview finding generated by the access preview.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/AccessPreviewFinding">AWS
   * API Reference</a></p>
   */
  class AWS_ACCESSANALYZER_API AccessPreviewFinding
  {
  public:
    AccessPreviewFinding();
    AccessPreviewFinding(Aws::Utils::Json::JsonView jsonValue);
    AccessPreviewFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to perform.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAction() const{ return m_action; }

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to perform.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to perform.</p>
     */
    inline void SetAction(const Aws::Vector<Aws::String>& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to perform.</p>
     */
    inline void SetAction(Aws::Vector<Aws::String>&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to perform.</p>
     */
    inline AccessPreviewFinding& WithAction(const Aws::Vector<Aws::String>& value) { SetAction(value); return *this;}

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to perform.</p>
     */
    inline AccessPreviewFinding& WithAction(Aws::Vector<Aws::String>&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to perform.</p>
     */
    inline AccessPreviewFinding& AddAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action.push_back(value); return *this; }

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to perform.</p>
     */
    inline AccessPreviewFinding& AddAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action.push_back(std::move(value)); return *this; }

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to perform.</p>
     */
    inline AccessPreviewFinding& AddAction(const char* value) { m_actionHasBeenSet = true; m_action.push_back(value); return *this; }


    /**
     * <p>Provides context on how the access preview finding compares to existing
     * access identified in Access Analyzer.</p> <ul> <li> <p> <code>New</code> - The
     * finding is for newly-introduced access.</p> </li> <li> <p>
     * <code>Unchanged</code> - The preview finding is an existing finding that would
     * remain unchanged.</p> </li> <li> <p> <code>Changed</code> - The preview finding
     * is an existing finding with a change in status.</p> </li> </ul> <p>For example,
     * a <code>Changed</code> finding with preview status <code>Resolved</code> and
     * existing status <code>Active</code> indicates the existing <code>Active</code>
     * finding would become <code>Resolved</code> as a result of the proposed
     * permissions change.</p>
     */
    inline const FindingChangeType& GetChangeType() const{ return m_changeType; }

    /**
     * <p>Provides context on how the access preview finding compares to existing
     * access identified in Access Analyzer.</p> <ul> <li> <p> <code>New</code> - The
     * finding is for newly-introduced access.</p> </li> <li> <p>
     * <code>Unchanged</code> - The preview finding is an existing finding that would
     * remain unchanged.</p> </li> <li> <p> <code>Changed</code> - The preview finding
     * is an existing finding with a change in status.</p> </li> </ul> <p>For example,
     * a <code>Changed</code> finding with preview status <code>Resolved</code> and
     * existing status <code>Active</code> indicates the existing <code>Active</code>
     * finding would become <code>Resolved</code> as a result of the proposed
     * permissions change.</p>
     */
    inline bool ChangeTypeHasBeenSet() const { return m_changeTypeHasBeenSet; }

    /**
     * <p>Provides context on how the access preview finding compares to existing
     * access identified in Access Analyzer.</p> <ul> <li> <p> <code>New</code> - The
     * finding is for newly-introduced access.</p> </li> <li> <p>
     * <code>Unchanged</code> - The preview finding is an existing finding that would
     * remain unchanged.</p> </li> <li> <p> <code>Changed</code> - The preview finding
     * is an existing finding with a change in status.</p> </li> </ul> <p>For example,
     * a <code>Changed</code> finding with preview status <code>Resolved</code> and
     * existing status <code>Active</code> indicates the existing <code>Active</code>
     * finding would become <code>Resolved</code> as a result of the proposed
     * permissions change.</p>
     */
    inline void SetChangeType(const FindingChangeType& value) { m_changeTypeHasBeenSet = true; m_changeType = value; }

    /**
     * <p>Provides context on how the access preview finding compares to existing
     * access identified in Access Analyzer.</p> <ul> <li> <p> <code>New</code> - The
     * finding is for newly-introduced access.</p> </li> <li> <p>
     * <code>Unchanged</code> - The preview finding is an existing finding that would
     * remain unchanged.</p> </li> <li> <p> <code>Changed</code> - The preview finding
     * is an existing finding with a change in status.</p> </li> </ul> <p>For example,
     * a <code>Changed</code> finding with preview status <code>Resolved</code> and
     * existing status <code>Active</code> indicates the existing <code>Active</code>
     * finding would become <code>Resolved</code> as a result of the proposed
     * permissions change.</p>
     */
    inline void SetChangeType(FindingChangeType&& value) { m_changeTypeHasBeenSet = true; m_changeType = std::move(value); }

    /**
     * <p>Provides context on how the access preview finding compares to existing
     * access identified in Access Analyzer.</p> <ul> <li> <p> <code>New</code> - The
     * finding is for newly-introduced access.</p> </li> <li> <p>
     * <code>Unchanged</code> - The preview finding is an existing finding that would
     * remain unchanged.</p> </li> <li> <p> <code>Changed</code> - The preview finding
     * is an existing finding with a change in status.</p> </li> </ul> <p>For example,
     * a <code>Changed</code> finding with preview status <code>Resolved</code> and
     * existing status <code>Active</code> indicates the existing <code>Active</code>
     * finding would become <code>Resolved</code> as a result of the proposed
     * permissions change.</p>
     */
    inline AccessPreviewFinding& WithChangeType(const FindingChangeType& value) { SetChangeType(value); return *this;}

    /**
     * <p>Provides context on how the access preview finding compares to existing
     * access identified in Access Analyzer.</p> <ul> <li> <p> <code>New</code> - The
     * finding is for newly-introduced access.</p> </li> <li> <p>
     * <code>Unchanged</code> - The preview finding is an existing finding that would
     * remain unchanged.</p> </li> <li> <p> <code>Changed</code> - The preview finding
     * is an existing finding with a change in status.</p> </li> </ul> <p>For example,
     * a <code>Changed</code> finding with preview status <code>Resolved</code> and
     * existing status <code>Active</code> indicates the existing <code>Active</code>
     * finding would become <code>Resolved</code> as a result of the proposed
     * permissions change.</p>
     */
    inline AccessPreviewFinding& WithChangeType(FindingChangeType&& value) { SetChangeType(std::move(value)); return *this;}


    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCondition() const{ return m_condition; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline void SetCondition(const Aws::Map<Aws::String, Aws::String>& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline void SetCondition(Aws::Map<Aws::String, Aws::String>&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline AccessPreviewFinding& WithCondition(const Aws::Map<Aws::String, Aws::String>& value) { SetCondition(value); return *this;}

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline AccessPreviewFinding& WithCondition(Aws::Map<Aws::String, Aws::String>&& value) { SetCondition(std::move(value)); return *this;}

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline AccessPreviewFinding& AddCondition(const Aws::String& key, const Aws::String& value) { m_conditionHasBeenSet = true; m_condition.emplace(key, value); return *this; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline AccessPreviewFinding& AddCondition(Aws::String&& key, const Aws::String& value) { m_conditionHasBeenSet = true; m_condition.emplace(std::move(key), value); return *this; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline AccessPreviewFinding& AddCondition(const Aws::String& key, Aws::String&& value) { m_conditionHasBeenSet = true; m_condition.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline AccessPreviewFinding& AddCondition(Aws::String&& key, Aws::String&& value) { m_conditionHasBeenSet = true; m_condition.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline AccessPreviewFinding& AddCondition(const char* key, Aws::String&& value) { m_conditionHasBeenSet = true; m_condition.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline AccessPreviewFinding& AddCondition(Aws::String&& key, const char* value) { m_conditionHasBeenSet = true; m_condition.emplace(std::move(key), value); return *this; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline AccessPreviewFinding& AddCondition(const char* key, const char* value) { m_conditionHasBeenSet = true; m_condition.emplace(key, value); return *this; }


    /**
     * <p>The time at which the access preview finding was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the access preview finding was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time at which the access preview finding was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time at which the access preview finding was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time at which the access preview finding was created.</p>
     */
    inline AccessPreviewFinding& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the access preview finding was created.</p>
     */
    inline AccessPreviewFinding& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>An error.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>An error.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>An error.</p>
     */
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>An error.</p>
     */
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>An error.</p>
     */
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }

    /**
     * <p>An error.</p>
     */
    inline AccessPreviewFinding& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>An error.</p>
     */
    inline AccessPreviewFinding& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>An error.</p>
     */
    inline AccessPreviewFinding& WithError(const char* value) { SetError(value); return *this;}


    /**
     * <p>The existing ID of the finding in Access Analyzer, provided only for existing
     * findings.</p>
     */
    inline const Aws::String& GetExistingFindingId() const{ return m_existingFindingId; }

    /**
     * <p>The existing ID of the finding in Access Analyzer, provided only for existing
     * findings.</p>
     */
    inline bool ExistingFindingIdHasBeenSet() const { return m_existingFindingIdHasBeenSet; }

    /**
     * <p>The existing ID of the finding in Access Analyzer, provided only for existing
     * findings.</p>
     */
    inline void SetExistingFindingId(const Aws::String& value) { m_existingFindingIdHasBeenSet = true; m_existingFindingId = value; }

    /**
     * <p>The existing ID of the finding in Access Analyzer, provided only for existing
     * findings.</p>
     */
    inline void SetExistingFindingId(Aws::String&& value) { m_existingFindingIdHasBeenSet = true; m_existingFindingId = std::move(value); }

    /**
     * <p>The existing ID of the finding in Access Analyzer, provided only for existing
     * findings.</p>
     */
    inline void SetExistingFindingId(const char* value) { m_existingFindingIdHasBeenSet = true; m_existingFindingId.assign(value); }

    /**
     * <p>The existing ID of the finding in Access Analyzer, provided only for existing
     * findings.</p>
     */
    inline AccessPreviewFinding& WithExistingFindingId(const Aws::String& value) { SetExistingFindingId(value); return *this;}

    /**
     * <p>The existing ID of the finding in Access Analyzer, provided only for existing
     * findings.</p>
     */
    inline AccessPreviewFinding& WithExistingFindingId(Aws::String&& value) { SetExistingFindingId(std::move(value)); return *this;}

    /**
     * <p>The existing ID of the finding in Access Analyzer, provided only for existing
     * findings.</p>
     */
    inline AccessPreviewFinding& WithExistingFindingId(const char* value) { SetExistingFindingId(value); return *this;}


    /**
     * <p>The existing status of the finding, provided only for existing findings.</p>
     */
    inline const FindingStatus& GetExistingFindingStatus() const{ return m_existingFindingStatus; }

    /**
     * <p>The existing status of the finding, provided only for existing findings.</p>
     */
    inline bool ExistingFindingStatusHasBeenSet() const { return m_existingFindingStatusHasBeenSet; }

    /**
     * <p>The existing status of the finding, provided only for existing findings.</p>
     */
    inline void SetExistingFindingStatus(const FindingStatus& value) { m_existingFindingStatusHasBeenSet = true; m_existingFindingStatus = value; }

    /**
     * <p>The existing status of the finding, provided only for existing findings.</p>
     */
    inline void SetExistingFindingStatus(FindingStatus&& value) { m_existingFindingStatusHasBeenSet = true; m_existingFindingStatus = std::move(value); }

    /**
     * <p>The existing status of the finding, provided only for existing findings.</p>
     */
    inline AccessPreviewFinding& WithExistingFindingStatus(const FindingStatus& value) { SetExistingFindingStatus(value); return *this;}

    /**
     * <p>The existing status of the finding, provided only for existing findings.</p>
     */
    inline AccessPreviewFinding& WithExistingFindingStatus(FindingStatus&& value) { SetExistingFindingStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of the access preview finding. This ID uniquely identifies the element
     * in the list of access preview findings and is not related to the finding ID in
     * Access Analyzer.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the access preview finding. This ID uniquely identifies the element
     * in the list of access preview findings and is not related to the finding ID in
     * Access Analyzer.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the access preview finding. This ID uniquely identifies the element
     * in the list of access preview findings and is not related to the finding ID in
     * Access Analyzer.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the access preview finding. This ID uniquely identifies the element
     * in the list of access preview findings and is not related to the finding ID in
     * Access Analyzer.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the access preview finding. This ID uniquely identifies the element
     * in the list of access preview findings and is not related to the finding ID in
     * Access Analyzer.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the access preview finding. This ID uniquely identifies the element
     * in the list of access preview findings and is not related to the finding ID in
     * Access Analyzer.</p>
     */
    inline AccessPreviewFinding& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the access preview finding. This ID uniquely identifies the element
     * in the list of access preview findings and is not related to the finding ID in
     * Access Analyzer.</p>
     */
    inline AccessPreviewFinding& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the access preview finding. This ID uniquely identifies the element
     * in the list of access preview findings and is not related to the finding ID in
     * Access Analyzer.</p>
     */
    inline AccessPreviewFinding& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Indicates whether the policy that generated the finding allows public access
     * to the resource.</p>
     */
    inline bool GetIsPublic() const{ return m_isPublic; }

    /**
     * <p>Indicates whether the policy that generated the finding allows public access
     * to the resource.</p>
     */
    inline bool IsPublicHasBeenSet() const { return m_isPublicHasBeenSet; }

    /**
     * <p>Indicates whether the policy that generated the finding allows public access
     * to the resource.</p>
     */
    inline void SetIsPublic(bool value) { m_isPublicHasBeenSet = true; m_isPublic = value; }

    /**
     * <p>Indicates whether the policy that generated the finding allows public access
     * to the resource.</p>
     */
    inline AccessPreviewFinding& WithIsPublic(bool value) { SetIsPublic(value); return *this;}


    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline void SetPrincipal(const Aws::Map<Aws::String, Aws::String>& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline void SetPrincipal(Aws::Map<Aws::String, Aws::String>&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline AccessPreviewFinding& WithPrincipal(const Aws::Map<Aws::String, Aws::String>& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline AccessPreviewFinding& WithPrincipal(Aws::Map<Aws::String, Aws::String>&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline AccessPreviewFinding& AddPrincipal(const Aws::String& key, const Aws::String& value) { m_principalHasBeenSet = true; m_principal.emplace(key, value); return *this; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline AccessPreviewFinding& AddPrincipal(Aws::String&& key, const Aws::String& value) { m_principalHasBeenSet = true; m_principal.emplace(std::move(key), value); return *this; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline AccessPreviewFinding& AddPrincipal(const Aws::String& key, Aws::String&& value) { m_principalHasBeenSet = true; m_principal.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline AccessPreviewFinding& AddPrincipal(Aws::String&& key, Aws::String&& value) { m_principalHasBeenSet = true; m_principal.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline AccessPreviewFinding& AddPrincipal(const char* key, Aws::String&& value) { m_principalHasBeenSet = true; m_principal.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline AccessPreviewFinding& AddPrincipal(Aws::String&& key, const char* value) { m_principalHasBeenSet = true; m_principal.emplace(std::move(key), value); return *this; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline AccessPreviewFinding& AddPrincipal(const char* key, const char* value) { m_principalHasBeenSet = true; m_principal.emplace(key, value); return *this; }


    /**
     * <p>The resource that an external principal has access to. This is the resource
     * associated with the access preview.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The resource that an external principal has access to. This is the resource
     * associated with the access preview.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The resource that an external principal has access to. This is the resource
     * associated with the access preview.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The resource that an external principal has access to. This is the resource
     * associated with the access preview.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The resource that an external principal has access to. This is the resource
     * associated with the access preview.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The resource that an external principal has access to. This is the resource
     * associated with the access preview.</p>
     */
    inline AccessPreviewFinding& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The resource that an external principal has access to. This is the resource
     * associated with the access preview.</p>
     */
    inline AccessPreviewFinding& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The resource that an external principal has access to. This is the resource
     * associated with the access preview.</p>
     */
    inline AccessPreviewFinding& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p>The AWS account ID that owns the resource. For most AWS resources, the owning
     * account is the account in which the resource was created.</p>
     */
    inline const Aws::String& GetResourceOwnerAccount() const{ return m_resourceOwnerAccount; }

    /**
     * <p>The AWS account ID that owns the resource. For most AWS resources, the owning
     * account is the account in which the resource was created.</p>
     */
    inline bool ResourceOwnerAccountHasBeenSet() const { return m_resourceOwnerAccountHasBeenSet; }

    /**
     * <p>The AWS account ID that owns the resource. For most AWS resources, the owning
     * account is the account in which the resource was created.</p>
     */
    inline void SetResourceOwnerAccount(const Aws::String& value) { m_resourceOwnerAccountHasBeenSet = true; m_resourceOwnerAccount = value; }

    /**
     * <p>The AWS account ID that owns the resource. For most AWS resources, the owning
     * account is the account in which the resource was created.</p>
     */
    inline void SetResourceOwnerAccount(Aws::String&& value) { m_resourceOwnerAccountHasBeenSet = true; m_resourceOwnerAccount = std::move(value); }

    /**
     * <p>The AWS account ID that owns the resource. For most AWS resources, the owning
     * account is the account in which the resource was created.</p>
     */
    inline void SetResourceOwnerAccount(const char* value) { m_resourceOwnerAccountHasBeenSet = true; m_resourceOwnerAccount.assign(value); }

    /**
     * <p>The AWS account ID that owns the resource. For most AWS resources, the owning
     * account is the account in which the resource was created.</p>
     */
    inline AccessPreviewFinding& WithResourceOwnerAccount(const Aws::String& value) { SetResourceOwnerAccount(value); return *this;}

    /**
     * <p>The AWS account ID that owns the resource. For most AWS resources, the owning
     * account is the account in which the resource was created.</p>
     */
    inline AccessPreviewFinding& WithResourceOwnerAccount(Aws::String&& value) { SetResourceOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID that owns the resource. For most AWS resources, the owning
     * account is the account in which the resource was created.</p>
     */
    inline AccessPreviewFinding& WithResourceOwnerAccount(const char* value) { SetResourceOwnerAccount(value); return *this;}


    /**
     * <p>The type of the resource that can be accessed in the finding.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the resource that can be accessed in the finding.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the resource that can be accessed in the finding.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the resource that can be accessed in the finding.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the resource that can be accessed in the finding.</p>
     */
    inline AccessPreviewFinding& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the resource that can be accessed in the finding.</p>
     */
    inline AccessPreviewFinding& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The sources of the finding. This indicates how the access that generated the
     * finding is granted. It is populated for Amazon S3 bucket findings.</p>
     */
    inline const Aws::Vector<FindingSource>& GetSources() const{ return m_sources; }

    /**
     * <p>The sources of the finding. This indicates how the access that generated the
     * finding is granted. It is populated for Amazon S3 bucket findings.</p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>The sources of the finding. This indicates how the access that generated the
     * finding is granted. It is populated for Amazon S3 bucket findings.</p>
     */
    inline void SetSources(const Aws::Vector<FindingSource>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>The sources of the finding. This indicates how the access that generated the
     * finding is granted. It is populated for Amazon S3 bucket findings.</p>
     */
    inline void SetSources(Aws::Vector<FindingSource>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>The sources of the finding. This indicates how the access that generated the
     * finding is granted. It is populated for Amazon S3 bucket findings.</p>
     */
    inline AccessPreviewFinding& WithSources(const Aws::Vector<FindingSource>& value) { SetSources(value); return *this;}

    /**
     * <p>The sources of the finding. This indicates how the access that generated the
     * finding is granted. It is populated for Amazon S3 bucket findings.</p>
     */
    inline AccessPreviewFinding& WithSources(Aws::Vector<FindingSource>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The sources of the finding. This indicates how the access that generated the
     * finding is granted. It is populated for Amazon S3 bucket findings.</p>
     */
    inline AccessPreviewFinding& AddSources(const FindingSource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>The sources of the finding. This indicates how the access that generated the
     * finding is granted. It is populated for Amazon S3 bucket findings.</p>
     */
    inline AccessPreviewFinding& AddSources(FindingSource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }


    /**
     * <p>The preview status of the finding. This is what the status of the finding
     * would be after permissions deployment. For example, a <code>Changed</code>
     * finding with preview status <code>Resolved</code> and existing status
     * <code>Active</code> indicates the existing <code>Active</code> finding would
     * become <code>Resolved</code> as a result of the proposed permissions change.</p>
     */
    inline const FindingStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The preview status of the finding. This is what the status of the finding
     * would be after permissions deployment. For example, a <code>Changed</code>
     * finding with preview status <code>Resolved</code> and existing status
     * <code>Active</code> indicates the existing <code>Active</code> finding would
     * become <code>Resolved</code> as a result of the proposed permissions change.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The preview status of the finding. This is what the status of the finding
     * would be after permissions deployment. For example, a <code>Changed</code>
     * finding with preview status <code>Resolved</code> and existing status
     * <code>Active</code> indicates the existing <code>Active</code> finding would
     * become <code>Resolved</code> as a result of the proposed permissions change.</p>
     */
    inline void SetStatus(const FindingStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The preview status of the finding. This is what the status of the finding
     * would be after permissions deployment. For example, a <code>Changed</code>
     * finding with preview status <code>Resolved</code> and existing status
     * <code>Active</code> indicates the existing <code>Active</code> finding would
     * become <code>Resolved</code> as a result of the proposed permissions change.</p>
     */
    inline void SetStatus(FindingStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The preview status of the finding. This is what the status of the finding
     * would be after permissions deployment. For example, a <code>Changed</code>
     * finding with preview status <code>Resolved</code> and existing status
     * <code>Active</code> indicates the existing <code>Active</code> finding would
     * become <code>Resolved</code> as a result of the proposed permissions change.</p>
     */
    inline AccessPreviewFinding& WithStatus(const FindingStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The preview status of the finding. This is what the status of the finding
     * would be after permissions deployment. For example, a <code>Changed</code>
     * finding with preview status <code>Resolved</code> and existing status
     * <code>Active</code> indicates the existing <code>Active</code> finding would
     * become <code>Resolved</code> as a result of the proposed permissions change.</p>
     */
    inline AccessPreviewFinding& WithStatus(FindingStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_action;
    bool m_actionHasBeenSet;

    FindingChangeType m_changeType;
    bool m_changeTypeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_condition;
    bool m_conditionHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_error;
    bool m_errorHasBeenSet;

    Aws::String m_existingFindingId;
    bool m_existingFindingIdHasBeenSet;

    FindingStatus m_existingFindingStatus;
    bool m_existingFindingStatusHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    bool m_isPublic;
    bool m_isPublicHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_principal;
    bool m_principalHasBeenSet;

    Aws::String m_resource;
    bool m_resourceHasBeenSet;

    Aws::String m_resourceOwnerAccount;
    bool m_resourceOwnerAccountHasBeenSet;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::Vector<FindingSource> m_sources;
    bool m_sourcesHasBeenSet;

    FindingStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
