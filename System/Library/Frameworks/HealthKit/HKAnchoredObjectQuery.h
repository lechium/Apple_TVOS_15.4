//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKAnchoredObjectQueryClientInterface-Protocol.h>

@class HKQueryAnchor, NSMutableArray, NSString;

@interface HKAnchoredObjectQuery <HKAnchoredObjectQueryClientInterface>
{
    _Bool _initialHandlerCalled;	// 8 = 0x8
    NSMutableArray *_samplesPendingDelivery;	// 16 = 0x10
    NSMutableArray *_deletedObjectsPendingDelivery;	// 24 = 0x18
    _Atomic _Bool _includeDeletedObjects;	// 32 = 0x20
    HKQueryAnchor *_currentAnchor;	// 40 = 0x28
    _Bool _includeAutomaticTimeZones;	// 48 = 0x30
    _Bool _includeContributorInformation;	// 49 = 0x31
    CDUnknownBlockType _updateHandler;	// 56 = 0x38
    double _collectionInterval;	// 64 = 0x40
    CDUnknownBlockType _completionHandler;	// 72 = 0x48
    HKQueryAnchor *_anchor;	// 80 = 0x50
    unsigned long long _limit;	// 88 = 0x58
}

+ (void)configureClientInterface:(id)arg1;	// IMP=0x00000000000d06ad
+ (id)clientInterfaceProtocol;	// IMP=0x00000000000d069c
+ (Class)configurationClass;	// IMP=0x00000000000d068b
- (void).cxx_destruct;	// IMP=0x00000000000d0f99
@property(nonatomic) _Bool includeContributorInformation; // @synthesize includeContributorInformation=_includeContributorInformation;
@property(nonatomic) _Bool includeAutomaticTimeZones; // @synthesize includeAutomaticTimeZones=_includeAutomaticTimeZones;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(copy, nonatomic) HKQueryAnchor *anchor; // @synthesize anchor=_anchor;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) double collectionInterval; // @synthesize collectionInterval=_collectionInterval;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
- (_Bool)queue_shouldDeactivateAfterInitialResults;	// IMP=0x00000000000d0eba
- (void)queue_deliverError:(id)arg1;	// IMP=0x00000000000d0dac
- (void)queue_validate;	// IMP=0x00000000000d0920
- (void)queue_queryDidDeactivate:(id)arg1;	// IMP=0x00000000000d08ae
- (void)queue_populateConfiguration:(id)arg1;	// IMP=0x00000000000d076c
- (void)client_deliverSampleObjects:(id)arg1 deletedObjects:(id)arg2 anchor:(id)arg3 clearPendingSamples:(_Bool)arg4 deliverResults:(_Bool)arg5 query:(id)arg6;	// IMP=0x00000000000d014b
@property(nonatomic) _Bool ignoreDeletedObjects;
- (id)initWithQueryDescriptors:(id)arg1 anchor:(id)arg2 limit:(long long)arg3 resultsHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cfe8f
- (id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(id)arg3 limit:(unsigned long long)arg4 resultsHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000cfd5e
- (id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(unsigned long long)arg3 limit:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000cfba7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
