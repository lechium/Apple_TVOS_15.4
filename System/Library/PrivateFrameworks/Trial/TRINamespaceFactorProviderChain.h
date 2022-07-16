//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/TRINamespaceFactorProviding-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol TRINamespaceFactorProviding;

@interface TRINamespaceFactorProviderChain : NSObject <TRINamespaceFactorProviding>
{
    NSString *_namespaceName;	// 8 = 0x8
    NSArray *_providerChain;	// 16 = 0x10
    id <TRINamespaceFactorProviding> _installedProvider;	// 24 = 0x18
    id <TRINamespaceFactorProviding> _rolloutProvider;	// 32 = 0x20
    id <TRINamespaceFactorProviding> _experimentProvider;	// 40 = 0x28
    NSDictionary *_aliasMap;	// 48 = 0x30
}

+ (id)factorProviderWithPaths:(id)arg1 namespaceName:(id)arg2 resolver:(id)arg3;	// IMP=0x000000000002f8e1
+ (id)factorProviderWithPaths:(id)arg1 namespaceName:(id)arg2 excludingTreatmentLayers:(unsigned long long)arg3;	// IMP=0x000000000002f806
+ (id)factorProviderWithPaths:(id)arg1 namespaceName:(id)arg2;	// IMP=0x000000000002f760
- (void).cxx_destruct;	// IMP=0x0000000000032a86
- (unsigned int)namespaceId;	// IMP=0x0000000000032a26
- (void)dispose;	// IMP=0x00000000000328fd
- (id)factorNamesWithObfuscation:(id)arg1;	// IMP=0x00000000000327fb
- (id)factorLevels;	// IMP=0x0000000000032339
- (id)_dealiasedFactorLevelForFactorLevel:(id)arg1 unaliasedName:(id)arg2;	// IMP=0x0000000000031e68
- (id)promotableFactorPackId;	// IMP=0x0000000000031d73
- (void)computeTreatmentAssetIndexes:(id *)arg1 withAssociatedExperimentIds:(id *)arg2 andFactorPackAssetIds:(id *)arg3 withAssociatedRolloutDeployments:(id *)arg4 withExperimentFactorNames:(id *)arg5 andRolloutFactorNames:(id *)arg6 forFactors:(id)arg7 usingFilter:(CDUnknownBlockType)arg8;	// IMP=0x0000000000030d7f
- (id)levelForFactor:(id)arg1 outProvider:(id *)arg2;	// IMP=0x00000000000309f7
- (id)levelForFactor:(id)arg1;	// IMP=0x00000000000309e3
- (_Bool)hasAnyTreatmentInLayers:(unsigned long long)arg1;	// IMP=0x00000000000309b0
- (_Bool)isRegistered;	// IMP=0x00000000000309a2
- (unsigned int)namespaceCompatibilityVersion;	// IMP=0x000000000003095a
- (id)providerForTreatmentLayer:(unsigned long long)arg1;	// IMP=0x00000000000308a7
- (id)rolloutId;	// IMP=0x0000000000030891
- (id)treatmentId;	// IMP=0x000000000003083d
- (int)deploymentId;	// IMP=0x00000000000307f5
- (id)experimentId;	// IMP=0x00000000000307a1
- (id)namespaceName;	// IMP=0x0000000000030793
- (id)initWithNamespaceName:(id)arg1 typedProviderChain:(id)arg2 paths:(id)arg3 excludingTreatmentLayers:(unsigned long long)arg4;	// IMP=0x000000000002f9a0
- (id)initWithNamespaceName:(id)arg1 typedProviderChain:(id)arg2 paths:(id)arg3;	// IMP=0x000000000002f98b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

