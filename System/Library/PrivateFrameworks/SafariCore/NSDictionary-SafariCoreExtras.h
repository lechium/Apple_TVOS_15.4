//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (SafariCoreExtras)
+ (id)safari_dictionaryWithObjectsInFastEnumerationCollection:(id)arg1 groupedUsingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002cfb1
+ (id)safari_dictionaryWithJSONOrPropertyListData:(id)arg1;	// IMP=0x000000000002cf3a
+ (id)safari_dictionaryWithJSONData:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000002cec8
+ (id)safari_dictionaryWithPropertyListData:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000002ce53
+ (id)safari_dictionaryWithPropertyListData:(id)arg1;	// IMP=0x000000000002ce3f
- (_Bool)safari_containsObject:(id)arg1;	// IMP=0x000000000002cd44
@property(readonly, copy, nonatomic) NSDictionary *safari_dictionaryByRemovingNullObjects;
- (id)safari_diffWithDictionary:(id)arg1;	// IMP=0x000000000002caed
- (id)_safari_sortedTupleArray;	// IMP=0x000000000002c87c
- (id)safari_mapAndFilterKeysUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c6e5
- (id)safari_mapAndFilterKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c54b
- (id)safari_mapTableForKey:(id)arg1;	// IMP=0x000000000002c4f4
@property(readonly, copy, nonatomic) NSDictionary *safari_dictionaryWithLowercaseKeys;
- (id)safari_dictionaryByMergingWithDictionary:(id)arg1;	// IMP=0x000000000002c028
- (id)safari_userActivityForKey:(id)arg1;	// IMP=0x000000000002bfd1
- (id)safari_setForKey:(id)arg1;	// IMP=0x000000000002bf7a
- (id)safari_UUIDForKey:(id)arg1;	// IMP=0x000000000002bf23
- (id)safari_URLForKey:(id)arg1;	// IMP=0x000000000002becc
- (id)safari_dictionaryForKey:(id)arg1;	// IMP=0x000000000002be75
- (id)safari_arrayContainingObjectsOfClass:(Class)arg1 forKey:(id)arg2;	// IMP=0x000000000002bda9
- (id)safari_arrayForKey:(id)arg1;	// IMP=0x000000000002bd52
- (id)safari_dateForKey:(id)arg1;	// IMP=0x000000000002bcfb
- (id)safari_dataForKey:(id)arg1;	// IMP=0x000000000002bca4
- (id)safari_stringForKey:(id)arg1 returningNilIfEmpty:(_Bool)arg2;	// IMP=0x000000000002bc3f
- (id)safari_numberForKey:(id)arg1;	// IMP=0x000000000002bbe8
- (id)safari_stringForKey:(id)arg1;	// IMP=0x000000000002bb91
- (_Bool)safari_boolForKey:(id)arg1;	// IMP=0x000000000002bb4d
@end
