//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCLockupFetcher, NSMutableArray, NSMutableDictionary, NSString;

@interface ASCLockupViewGroup : NSObject
{
    _Bool _hasScheduledBatchRequest;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    ASCLockupFetcher *_lockupFetcher;	// 24 = 0x18
    NSMutableDictionary *_deferredRequests;	// 32 = 0x20
    NSMutableArray *_prefetchSpansIfLoaded;	// 40 = 0x28
}

+ (id)log;	// IMP=0x000000000003683f
+ (void)createConnectionWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012d46
- (void).cxx_destruct;	// IMP=0x0000000000037349
@property(retain, nonatomic) NSMutableArray *prefetchSpansIfLoaded; // @synthesize prefetchSpansIfLoaded=_prefetchSpansIfLoaded;
@property(nonatomic) _Bool hasScheduledBatchRequest; // @synthesize hasScheduledBatchRequest=_hasScheduledBatchRequest;
@property(readonly, nonatomic) NSMutableDictionary *deferredRequests; // @synthesize deferredRequests=_deferredRequests;
@property(readonly, nonatomic) ASCLockupFetcher *lockupFetcher; // @synthesize lockupFetcher=_lockupFetcher;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x0000000000037260
- (id)lockupWithRequest:(id)arg1;	// IMP=0x0000000000037095
- (void)performBatchRequests;	// IMP=0x0000000000036bb3
- (void)scheduleBatchRequestsIfNeeded;	// IMP=0x0000000000036a4a
@property(readonly, nonatomic) NSMutableArray *prefetchSpans;
- (id)init;	// IMP=0x00000000000369df
- (id)initWithName:(id)arg1;	// IMP=0x000000000003695e
- (id)initWithName:(id)arg1 lockupFetcher:(id)arg2;	// IMP=0x000000000003689b
- (void)_cacheLockupsWithCollectionRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003b881
- (void)_lockupDictionaryForRequest:(id)arg1 includingKeys:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000003b0b8
- (void)_cacheLockupsWithRequests:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003a928
- (void)_prefetchLockupsWithRequests:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003c3a4
- (void)_lockupRequestForBundleID:(id)arg1 withContext:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000047845

@end

