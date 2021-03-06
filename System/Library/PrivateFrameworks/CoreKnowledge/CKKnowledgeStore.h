//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, NSURL;
@protocol CKKnowledgeStoreDelegate;

@interface CKKnowledgeStore : NSObject
{
    MISSING_TYPE *backingStore;	// 8 = 0x8
    MISSING_TYPE *sparqlQueue;	// 48 = 0x30
    MISSING_TYPE *location;	// 56 = 0x38
    MISSING_TYPE *delegate;	// 80 = 0x50
}

+ (id)synchedKnowledgeStoreWithName:(id)arg1;	// IMP=0x0000000000078320
+ (id)knowledgeStoreWithName:(id)arg1;	// IMP=0x0000000000078290
+ (id)userDefaultsKnowledgeStore;	// IMP=0x0000000000078240
+ (id)inMemoryKnowledgeStore;	// IMP=0x0000000000078200
+ (id)defaultSynchedKnowledgeStore;	// IMP=0x00000000000781b0
+ (id)defaultKnowledgeStore;	// IMP=0x0000000000078190
+ (id)directoryURL;	// IMP=0x0000000000077e20
- (void).cxx_destruct;	// IMP=0x0000000000078420
- (id)init;	// IMP=0x00000000000783c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000780f0
@property(nonatomic, readonly) long long hash;
@property(nonatomic, readonly) NSURL *filePathURL;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic) __weak id <CKKnowledgeStoreDelegate> delegate; // @synthesize delegate;
- (void)disableSyncAndDeleteCloudDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ea40
- (_Bool)removeAllValuesAndReturnError:(id *)arg1;	// IMP=0x000000000000e970
- (void)removeAllValuesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e540
- (_Bool)removeValuesMatching:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000e3a0
- (void)removeValuesMatching:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000dfd0
- (_Bool)removeValuesForKeys:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000dea0
- (void)removeValuesForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000da80
- (_Bool)removeValueForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000d920
- (void)removeValueForKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d4b0
- (_Bool)removeEntity:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000d420
- (void)removeEntity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d310
- (void)importTriplesFromFileAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000cfa0
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000cac0
- (void)setValue:(id)arg1 forKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000c1e0
- (id)writeBatch;	// IMP=0x000000000000bd10
- (void)sparqlResultsForQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f100
- (void)triplesMatching:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ebc0
- (id)triplesMatching:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002ea50
- (id)entitiesAndReturnError:(id *)arg1;	// IMP=0x000000000002e960
- (void)entitiesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002e3b0
- (id)entityWithIdentifier:(id)arg1;	// IMP=0x000000000002ddb0
- (id)valuesForKeysMatching:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002dc20
- (void)valuesForKeysMatching:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002db00
- (void)valuesForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d950
- (id)valueForKey:(id)arg1;	// IMP=0x000000000002d500
- (void)valueForKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d050
- (id)valuesAndReturnError:(id *)arg1;	// IMP=0x000000000002cf00
- (void)valuesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002cd20
- (id)keysMatching:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002cbb0
- (void)keysMatching:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ca90
- (id)keysAndReturnError:(id *)arg1;	// IMP=0x000000000002c950
- (void)keysWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c790
- (id)dictionaryRepresentationForKeysMatching:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002c610
- (void)dictionaryRepresentationForKeysMatching:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c4f0
- (id)dictionaryRepresentationAndReturnError:(id *)arg1;	// IMP=0x000000000002c3a0
- (void)dictionaryRepresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c200
- (void)importContentsOfJSONLDAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004eb50
- (id)subgraphWithEntities:(id)arg1;	// IMP=0x000000000004cf30
- (void)inferLinkTo:(id)arg1 withPredicate:(id)arg2 when:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000063850
- (_Bool)inferLinkTo:(id)arg1 withPredicate:(id)arg2 when:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000062ce0

@end

