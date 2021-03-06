//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKTaskServerProxyProvider, NSString, NSUUID;

@interface HKSharedSummaryTransactionBuilder : NSObject <_HKXPCExportable>
{
    HKTaskServerProxyProvider *_proxyProvider;	// 8 = 0x8
    NSUUID *_transactionUUID;	// 16 = 0x10
}

+ (id)serverInterface;	// IMP=0x000000000012475a
+ (id)clientInterface;	// IMP=0x000000000012473a
- (void).cxx_destruct;	// IMP=0x000000000012492c
@property(readonly, copy, nonatomic) NSUUID *transactionUUID; // @synthesize transactionUUID=_transactionUUID;
- (void)connectionInterrupted;	// IMP=0x000000000012491c
- (void)connectionInvalidated;	// IMP=0x000000000012490a
- (id)remoteInterface;	// IMP=0x00000000001248f0
- (id)exportedInterface;	// IMP=0x00000000001248d6
- (void)allAddedSummariesWithPackage:(id)arg1 resultsHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000124423
- (void)addedSummariesWithPackage:(id)arg1 names:(id)arg2 resultsHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001240dd
- (void)discardWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000123ea3
- (void)commitWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000123e8c
- (void)commitAsUrgent:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000123c20
- (void)removeAllSummariesWithPackage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000123a6a
- (void)removeSummariesWithPackage:(id)arg1 names:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000012387d
- (void)removeSummariesWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001236c7
- (void)addMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000123511
- (void)reuseAllSummariesWithPackage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000012335b
- (void)reuseSummariesWithPackage:(id)arg1 names:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000012316e
- (void)reuseSummariesWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000122fb8
- (void)addSummaries:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000122e02
- (id)initWithHealthStore:(id)arg1 transactionUUID:(id)arg2;	// IMP=0x0000000000122bc8
- (id)initWithHealthStore:(id)arg1;	// IMP=0x0000000000122bb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

