﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/CodeArtifactRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/PackageFormat.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeArtifact
{
namespace Model
{

  /**
   */
  class AWS_CODEARTIFACT_API ListPackageVersionDependenciesRequest : public CodeArtifactRequest
  {
  public:
    ListPackageVersionDependenciesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPackageVersionDependencies"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The name of the domain that contains the repository that contains the
     * requested package version dependencies. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p> The name of the domain that contains the repository that contains the
     * requested package version dependencies. </p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p> The name of the domain that contains the repository that contains the
     * requested package version dependencies. </p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p> The name of the domain that contains the repository that contains the
     * requested package version dependencies. </p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p> The name of the domain that contains the repository that contains the
     * requested package version dependencies. </p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p> The name of the domain that contains the repository that contains the
     * requested package version dependencies. </p>
     */
    inline ListPackageVersionDependenciesRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p> The name of the domain that contains the repository that contains the
     * requested package version dependencies. </p>
     */
    inline ListPackageVersionDependenciesRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p> The name of the domain that contains the repository that contains the
     * requested package version dependencies. </p>
     */
    inline ListPackageVersionDependenciesRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const{ return m_domainOwner; }

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const Aws::String& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = value; }

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(Aws::String&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::move(value); }

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const char* value) { m_domainOwnerHasBeenSet = true; m_domainOwner.assign(value); }

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline ListPackageVersionDependenciesRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline ListPackageVersionDependenciesRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline ListPackageVersionDependenciesRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}


    /**
     * <p> The name of the repository that contains the requested package version. </p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }

    /**
     * <p> The name of the repository that contains the requested package version. </p>
     */
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }

    /**
     * <p> The name of the repository that contains the requested package version. </p>
     */
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    /**
     * <p> The name of the repository that contains the requested package version. </p>
     */
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }

    /**
     * <p> The name of the repository that contains the requested package version. </p>
     */
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }

    /**
     * <p> The name of the repository that contains the requested package version. </p>
     */
    inline ListPackageVersionDependenciesRequest& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}

    /**
     * <p> The name of the repository that contains the requested package version. </p>
     */
    inline ListPackageVersionDependenciesRequest& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}

    /**
     * <p> The name of the repository that contains the requested package version. </p>
     */
    inline ListPackageVersionDependenciesRequest& WithRepository(const char* value) { SetRepository(value); return *this;}


    /**
     * <p> The format of the package with the requested dependencies. The valid package
     * types are: </p> <ul> <li> <p> <code>npm</code>: A Node Package Manager (npm)
     * package. </p> </li> <li> <p> <code>pypi</code>: A Python Package Index (PyPI)
     * package. </p> </li> <li> <p> <code>maven</code>: A Maven package that contains
     * compiled code in a distributable format, such as a JAR file. </p> </li> </ul>
     */
    inline const PackageFormat& GetFormat() const{ return m_format; }

    /**
     * <p> The format of the package with the requested dependencies. The valid package
     * types are: </p> <ul> <li> <p> <code>npm</code>: A Node Package Manager (npm)
     * package. </p> </li> <li> <p> <code>pypi</code>: A Python Package Index (PyPI)
     * package. </p> </li> <li> <p> <code>maven</code>: A Maven package that contains
     * compiled code in a distributable format, such as a JAR file. </p> </li> </ul>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p> The format of the package with the requested dependencies. The valid package
     * types are: </p> <ul> <li> <p> <code>npm</code>: A Node Package Manager (npm)
     * package. </p> </li> <li> <p> <code>pypi</code>: A Python Package Index (PyPI)
     * package. </p> </li> <li> <p> <code>maven</code>: A Maven package that contains
     * compiled code in a distributable format, such as a JAR file. </p> </li> </ul>
     */
    inline void SetFormat(const PackageFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p> The format of the package with the requested dependencies. The valid package
     * types are: </p> <ul> <li> <p> <code>npm</code>: A Node Package Manager (npm)
     * package. </p> </li> <li> <p> <code>pypi</code>: A Python Package Index (PyPI)
     * package. </p> </li> <li> <p> <code>maven</code>: A Maven package that contains
     * compiled code in a distributable format, such as a JAR file. </p> </li> </ul>
     */
    inline void SetFormat(PackageFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p> The format of the package with the requested dependencies. The valid package
     * types are: </p> <ul> <li> <p> <code>npm</code>: A Node Package Manager (npm)
     * package. </p> </li> <li> <p> <code>pypi</code>: A Python Package Index (PyPI)
     * package. </p> </li> <li> <p> <code>maven</code>: A Maven package that contains
     * compiled code in a distributable format, such as a JAR file. </p> </li> </ul>
     */
    inline ListPackageVersionDependenciesRequest& WithFormat(const PackageFormat& value) { SetFormat(value); return *this;}

    /**
     * <p> The format of the package with the requested dependencies. The valid package
     * types are: </p> <ul> <li> <p> <code>npm</code>: A Node Package Manager (npm)
     * package. </p> </li> <li> <p> <code>pypi</code>: A Python Package Index (PyPI)
     * package. </p> </li> <li> <p> <code>maven</code>: A Maven package that contains
     * compiled code in a distributable format, such as a JAR file. </p> </li> </ul>
     */
    inline ListPackageVersionDependenciesRequest& WithFormat(PackageFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> </ul>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> </ul>
     */
    inline ListPackageVersionDependenciesRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> </ul>
     */
    inline ListPackageVersionDependenciesRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> </ul>
     */
    inline ListPackageVersionDependenciesRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p> The name of the package versions' package. </p>
     */
    inline const Aws::String& GetPackage() const{ return m_package; }

    /**
     * <p> The name of the package versions' package. </p>
     */
    inline bool PackageHasBeenSet() const { return m_packageHasBeenSet; }

    /**
     * <p> The name of the package versions' package. </p>
     */
    inline void SetPackage(const Aws::String& value) { m_packageHasBeenSet = true; m_package = value; }

    /**
     * <p> The name of the package versions' package. </p>
     */
    inline void SetPackage(Aws::String&& value) { m_packageHasBeenSet = true; m_package = std::move(value); }

    /**
     * <p> The name of the package versions' package. </p>
     */
    inline void SetPackage(const char* value) { m_packageHasBeenSet = true; m_package.assign(value); }

    /**
     * <p> The name of the package versions' package. </p>
     */
    inline ListPackageVersionDependenciesRequest& WithPackage(const Aws::String& value) { SetPackage(value); return *this;}

    /**
     * <p> The name of the package versions' package. </p>
     */
    inline ListPackageVersionDependenciesRequest& WithPackage(Aws::String&& value) { SetPackage(std::move(value)); return *this;}

    /**
     * <p> The name of the package versions' package. </p>
     */
    inline ListPackageVersionDependenciesRequest& WithPackage(const char* value) { SetPackage(value); return *this;}


    /**
     * <p> A string that contains the package version (for example,
     * <code>3.5.2</code>). </p>
     */
    inline const Aws::String& GetPackageVersion() const{ return m_packageVersion; }

    /**
     * <p> A string that contains the package version (for example,
     * <code>3.5.2</code>). </p>
     */
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }

    /**
     * <p> A string that contains the package version (for example,
     * <code>3.5.2</code>). </p>
     */
    inline void SetPackageVersion(const Aws::String& value) { m_packageVersionHasBeenSet = true; m_packageVersion = value; }

    /**
     * <p> A string that contains the package version (for example,
     * <code>3.5.2</code>). </p>
     */
    inline void SetPackageVersion(Aws::String&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::move(value); }

    /**
     * <p> A string that contains the package version (for example,
     * <code>3.5.2</code>). </p>
     */
    inline void SetPackageVersion(const char* value) { m_packageVersionHasBeenSet = true; m_packageVersion.assign(value); }

    /**
     * <p> A string that contains the package version (for example,
     * <code>3.5.2</code>). </p>
     */
    inline ListPackageVersionDependenciesRequest& WithPackageVersion(const Aws::String& value) { SetPackageVersion(value); return *this;}

    /**
     * <p> A string that contains the package version (for example,
     * <code>3.5.2</code>). </p>
     */
    inline ListPackageVersionDependenciesRequest& WithPackageVersion(Aws::String&& value) { SetPackageVersion(std::move(value)); return *this;}

    /**
     * <p> A string that contains the package version (for example,
     * <code>3.5.2</code>). </p>
     */
    inline ListPackageVersionDependenciesRequest& WithPackageVersion(const char* value) { SetPackageVersion(value); return *this;}


    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline ListPackageVersionDependenciesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline ListPackageVersionDependenciesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline ListPackageVersionDependenciesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet;

    PackageFormat m_format;
    bool m_formatHasBeenSet;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;

    Aws::String m_package;
    bool m_packageHasBeenSet;

    Aws::String m_packageVersion;
    bool m_packageVersionHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
