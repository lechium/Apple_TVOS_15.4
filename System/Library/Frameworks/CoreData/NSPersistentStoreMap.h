//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMappedObjectStore, NSString;

__attribute__((visibility("hidden")))
@interface NSPersistentStoreMap : NSObject
{
    NSMappedObjectStore *_store;	// 8 = 0x8
    NSString *_databaseUUID;	// 16 = 0x10
    NSDictionary *_storeMetadata;	// 24 = 0x18
    unsigned long long _nextPK64;	// 32 = 0x20
    NSDictionary *_mappings;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x0000000000127434
- (unsigned long long)nextPK64;	// IMP=0x0000000000127738
- (id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2;	// IMP=0x000000000012770a
- (id)handleFetchRequest:(id)arg1;	// IMP=0x00000000001276dc
- (void)updateObject:(id)arg1 objectIDMap:(id)arg2;	// IMP=0x00000000001276b1
- (void)removeObject:(id)arg1 objectIDMap:(id)arg2;	// IMP=0x0000000000127686
- (void)addObject:(id)arg1 objectIDMap:(id)arg2;	// IMP=0x000000000012765b
- (id)dataForKey:(id)arg1;	// IMP=0x000000000012762d
- (id)configurationName;	// IMP=0x0000000000127617
- (void)dealloc;	// IMP=0x00000000001275af
- (id)initWithStore:(id)arg1;	// IMP=0x0000000000127445

@end
