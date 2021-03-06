//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/NSCopying-Protocol.h>

@class NSArray, NSString, SSSQLiteQuery;

@interface SSSQLiteContainsPredicate <NSCopying>
{
    _Bool _negative;	// 16 = 0x10
    SSSQLiteQuery *_query;	// 24 = 0x18
    NSString *_queryProperty;	// 32 = 0x20
    id _values;	// 40 = 0x28
}

+ (id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2;	// IMP=0x000000000010fbd9
+ (id)containsPredicateWithProperty:(id)arg1 query:(id)arg2 queryProperty:(id)arg3;	// IMP=0x000000000010fb47
+ (id)containsPredicateWithProperty:(id)arg1 values:(id)arg2;	// IMP=0x000000000010facc
@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) NSString *queryProperty; // @synthesize queryProperty=_queryProperty;
@property(readonly, nonatomic) SSSQLiteQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic, getter=isNegative) _Bool negative; // @synthesize negative=_negative;
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x000000000010fecd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010fdbf
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;	// IMP=0x000000000010fc5f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010fc54
- (void)dealloc;	// IMP=0x000000000010fa66

@end

