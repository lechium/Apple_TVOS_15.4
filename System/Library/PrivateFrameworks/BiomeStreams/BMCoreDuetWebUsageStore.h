//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMCoreDuetWebUsageStore-Protocol.h>

@class _CDClientContext;
@protocol _DKKnowledgeSaving;

@interface BMCoreDuetWebUsageStore : NSObject <BMCoreDuetWebUsageStore>
{
    id <_DKKnowledgeSaving> _knowledgeStore;	// 8 = 0x8
    _CDClientContext *_contextStore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000062a51
@property(readonly, nonatomic) _CDClientContext *contextStore; // @synthesize contextStore=_contextStore;
@property(readonly, nonatomic) id <_DKKnowledgeSaving> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
- (_Bool)saveKnowledgeEvent:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006296c
- (id)removeObjectsMatchingPredicate:(id)arg1 fromArrayAtKeyPath:(id)arg2;	// IMP=0x00000000000628d5
- (void)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 responseQueue:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x000000000006280e
- (void)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 responseQueue:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x000000000006272b
- (_Bool)addContextValue:(id)arg1 toArrayAtKeyPath:(id)arg2;	// IMP=0x000000000006264a
- (id)init;	// IMP=0x00000000000625ae

@end

