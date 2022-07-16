//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/NSCopying-Protocol.h>

@class AMSSQLiteQuery, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteContainsPredicate <NSCopying>
{
    _Bool _negative;	// 16 = 0x10
    AMSSQLiteQuery *_query;	// 24 = 0x18
    NSString *_queryProperty;	// 32 = 0x20
    id _values;	// 40 = 0x28
}

+ (id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2;	// IMP=0x00000000001fee3c
+ (id)containsPredicateWithProperty:(id)arg1 query:(id)arg2 queryProperty:(id)arg3;	// IMP=0x00000000001fed49
+ (id)containsPredicateWithProperty:(id)arg1 values:(id)arg2;	// IMP=0x00000000001fec85
- (void).cxx_destruct;	// IMP=0x00000000001ff4a0
@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) NSString *queryProperty; // @synthesize queryProperty=_queryProperty;
@property(readonly, nonatomic) AMSSQLiteQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic, getter=isNegative) _Bool negative; // @synthesize negative=_negative;
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x00000000001ff283
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ff07d
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x00000000001fef0b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001fef00

@end

