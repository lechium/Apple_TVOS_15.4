//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet, SDConnectionConfiguration;

@interface CSSearchClientConnection : NSObject
{
    _Atomic unsigned int _outBatchCount;	// 8 = 0x8
    NSMutableDictionary *_queryTasks;	// 16 = 0x10
    SDConnectionConfiguration *_configuration;	// 24 = 0x18
    NSMutableOrderedSet *_pausedTasks;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003d920
@property(retain, nonatomic) NSMutableOrderedSet *pausedTasks; // @synthesize pausedTasks=_pausedTasks;
@property(retain, nonatomic) SDConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSMutableDictionary *queryTasks; // @synthesize queryTasks=_queryTasks;
- (id)allowedBundleIDs;	// IMP=0x000000000003d8b9
- (id)protectionClass;	// IMP=0x000000000003d8a3
- (_Bool)searchInternal;	// IMP=0x000000000003d88d
- (void)overrideMailHitCounts:(id)arg1;	// IMP=0x000000000003d887
- (id)bundleID;	// IMP=0x000000000003d871
- (void)_didReceiveResultsBatchCompletion;	// IMP=0x000000000003d59c
- (void)_willSendResultsBatch:(id)arg1 qid:(long long)arg2;	// IMP=0x000000000003d401
- (void)dealloc;	// IMP=0x000000000003d3c3
- (void)cancelQueryTasks;	// IMP=0x000000000003d1c3
- (void)setQueryTask:(id)arg1 forQueryID:(long long)arg2;	// IMP=0x000000000003d10b
- (id)queryTask:(long long)arg1;	// IMP=0x000000000003d06b
- (void)cancelQueryTask:(long long)arg1;	// IMP=0x000000000003cf97
- (id)initWithConnection:(id)arg1;	// IMP=0x000000000003cf12
- (id)initWithConnectionConfiguration:(id)arg1;	// IMP=0x000000000003ce18
@property(readonly, nonatomic) unsigned int outBatchCount;

@end

