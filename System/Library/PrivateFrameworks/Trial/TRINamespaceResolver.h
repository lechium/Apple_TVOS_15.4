//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/TRINamespaceResolving-Protocol.h>

@class NSSet, NSString, TRIExperimentDeployment, TRIRolloutDeployment, _PASLock;
@protocol TRIPaths;

@interface TRINamespaceResolver : NSObject <TRINamespaceResolving>
{
    id <TRIPaths> _paths;	// 8 = 0x8
    _PASLock *_lock;	// 16 = 0x10
    NSSet *_namespacesInFactorsState;	// 24 = 0x18
    TRIRolloutDeployment *_rolloutDeploymentForFactorsState;	// 32 = 0x20
    TRIExperimentDeployment *_experimentDeploymentForFactorsState;	// 40 = 0x28
}

+ (id)preferredPathForFactorDataWithCandidatePaths:(id)arg1;	// IMP=0x0000000000016e4a
+ (id)_namespacePathComponentsFromEntitlements;	// IMP=0x0000000000016c48
+ (id)promotionDirForNamespaceName:(id)arg1 withPaths:(id)arg2;	// IMP=0x0000000000014920
- (void).cxx_destruct;	// IMP=0x0000000000017705
@property(readonly, nonatomic) TRIExperimentDeployment *experimentDeploymentForFactorsState; // @synthesize experimentDeploymentForFactorsState=_experimentDeploymentForFactorsState;
@property(readonly, nonatomic) TRIRolloutDeployment *rolloutDeploymentForFactorsState; // @synthesize rolloutDeploymentForFactorsState=_rolloutDeploymentForFactorsState;
@property(readonly, nonatomic) NSSet *namespacesInFactorsState; // @synthesize namespacesInFactorsState=_namespacesInFactorsState;
- (void)dispose;	// IMP=0x0000000000016bce
- (id)resolveFactorProviderChainForNamespaceName:(id)arg1 faultOnMissingInstalledFactors:(_Bool)arg2 installedFactorsAccessible:(_Bool *)arg3;	// IMP=0x00000000000163d4
- (id)_resolvePropertyListFactorProviderChainForNamespaceName:(id)arg1;	// IMP=0x0000000000015b30
- (id)_factorProviderForNamespaceName:(id)arg1 fromNamespaceDescriptorSetWithDir:(id)arg2 resolvedPath:(id *)arg3;	// IMP=0x00000000000159ab
- (id)_factorProviderForNamespaceName:(id)arg1 parentId:(id)arg2 deploymentId:(int)arg3 fromFactorPackSetWithDir:(id)arg4 resolvedPath:(id *)arg5;	// IMP=0x000000000001558a
- (id)_getFactorPackPathForNamespaceName:(id)arg1 withCandidatePath:(id)arg2 parentId:(id)arg3 deploymentId:(int)arg4 promotable:(_Bool *)arg5;	// IMP=0x00000000000149d8
- (id)_resolverPropertyListWithResolvedPath:(id *)arg1;	// IMP=0x000000000001453e
- (id)_resolveTargetedNamespaceDescriptorSetForExperimentDeployment:(id)arg1;	// IMP=0x000000000001407c
- (id)_resolveTargetedFactorPackSetForRolloutDeployment:(id)arg1;	// IMP=0x0000000000013b95
- (void)_faultOnceWithMessage:(id)arg1;	// IMP=0x0000000000013a90
- (_Bool)_hasExperimentFactorsState;	// IMP=0x0000000000013a22
- (_Bool)_hasRolloutFactorsState;	// IMP=0x00000000000139b4
- (void)dealloc;	// IMP=0x0000000000013976
- (_Bool)_prepareFactorsState:(id)arg1;	// IMP=0x00000000000131f1
- (id)initWithPaths:(id)arg1 factorsState:(id)arg2;	// IMP=0x0000000000013096
- (id)initWithPaths:(id)arg1;	// IMP=0x0000000000012fee
- (id)init;	// IMP=0x0000000000012fe8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

