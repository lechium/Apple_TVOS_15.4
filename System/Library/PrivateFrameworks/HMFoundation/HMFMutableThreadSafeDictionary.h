//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HMFoundation/HMFMutableAssociativeCollection-Protocol.h>
#import <HMFoundation/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface HMFMutableThreadSafeDictionary : NSObject <HMFMutableAssociativeCollection, NSCopying>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

+ (id)threadSafeDictionary;	// IMP=0x0000000000016648
- (void).cxx_destruct;	// IMP=0x0000000000016d7a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016d15
- (id)description;	// IMP=0x0000000000016d0b
@property(readonly, copy) NSDictionary *rawDictionarySnapshot;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016c37
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016c20
- (id)objectEnumerator;	// IMP=0x0000000000016bd0
- (id)keyEnumerator;	// IMP=0x0000000000016b80
- (void)removeObjectsForKeys:(id)arg1;	// IMP=0x0000000000016b17
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000000016aae
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x0000000000016a28
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000169a2
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;	// IMP=0x0000000000016903
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000000016888
- (id)objectForKey:(id)arg1;	// IMP=0x000000000001680d
@property(readonly, copy) NSArray *allValues;
@property(readonly, copy) NSArray *allKeys;
@property(readonly) unsigned long long count;
- (id)init;	// IMP=0x00000000000166d4
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000001665a

@end
