//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/TRIPurgeableFactorPacksEnumerating-Protocol.h>

@class NSString;
@protocol TRINamespaceResolving, TRIPaths;

@interface TRIPurgeableFactorPacksEnumerator : NSObject <TRIPurgeableFactorPacksEnumerating>
{
    id <TRIPaths> _paths;	// 8 = 0x8
    id <TRINamespaceResolving> _namespaceResolver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001041ac
- (void)_enumerateRolloutFactorPackOnDemandFactorsForNamespace:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000103a6d
- (void)enumerateRolloutFactorPackPurgeCandidatesFromNamespaceNames:(id)arg1 purgeableFactorFilterBlock:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000103287
- (id)initWithPaths:(id)arg1 namespaceResolver:(id)arg2;	// IMP=0x00000000001031ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
