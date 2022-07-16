//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface AMSSQLiteComparisonPredicate <NSCopying>
{
    long long _comparisonType;	// 16 = 0x10
    id _value;	// 24 = 0x18
}

+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;	// IMP=0x00000000001fe798
+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;	// IMP=0x00000000001fe780
+ (id)predicateWithProperty:(id)arg1 equalToLongLong:(long long)arg2;	// IMP=0x00000000001fe6f0
- (void).cxx_destruct;	// IMP=0x00000000001fec72
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) long long comparisonType; // @synthesize comparisonType=_comparisonType;
- (id)_comparisonTypeString;	// IMP=0x00000000001febc6
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x00000000001feb05
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001fe9c9
- (unsigned long long)hash;	// IMP=0x00000000001fe93c
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x00000000001fe896
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001fe88b

@end

