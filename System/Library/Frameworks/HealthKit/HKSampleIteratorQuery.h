//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKSampleIteratorQueryClientInterface-Protocol.h>

@class HKSampleIteratorQueryCursor, NSMutableArray, NSString;

@interface HKSampleIteratorQuery <HKSampleIteratorQueryClientInterface>
{
    NSMutableArray *_samplesPendingDelivery;	// 8 = 0x8
    HKSampleIteratorQueryCursor *_queryCursor;	// 16 = 0x10
    unsigned long long _limit;	// 24 = 0x18
    CDUnknownBlockType _resultsHandler;	// 32 = 0x20
}

+ (void)configureClientInterface:(id)arg1;	// IMP=0x00000000001b7021
+ (id)clientInterfaceProtocol;	// IMP=0x00000000001b7010
+ (Class)configurationClass;	// IMP=0x00000000001b6fff
- (void).cxx_destruct;	// IMP=0x00000000001b75bf
@property(readonly, copy, nonatomic) CDUnknownBlockType resultsHandler; // @synthesize resultsHandler=_resultsHandler;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(copy, nonatomic) HKSampleIteratorQueryCursor *queryCursor; // @synthesize queryCursor=_queryCursor;
- (void)queue_deliverError:(id)arg1;	// IMP=0x00000000001b745f
- (void)queue_validate;	// IMP=0x00000000001b7187
- (void)queue_queryDidDeactivate:(id)arg1;	// IMP=0x00000000001b713d
- (void)queue_populateConfiguration:(id)arg1;	// IMP=0x00000000001b70a2
- (void)client_deliverSampleObjects:(id)arg1 queryCursor:(id)arg2 deliverResults:(_Bool)arg3 query:(id)arg4;	// IMP=0x00000000001b6d5b
- (id)initWithQueryCursor:(id)arg1 limit:(unsigned long long)arg2 resultsHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001b6b95
- (id)initWithQueryDescriptors:(id)arg1 sortDescriptors:(id)arg2 followingAnchor:(id)arg3 upToAndIncludingAnchor:(id)arg4 distinctByKeyPaths:(id)arg5 limit:(unsigned long long)arg6 resultsHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000001b697e
- (id)init;	// IMP=0x00000000001b6904

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

