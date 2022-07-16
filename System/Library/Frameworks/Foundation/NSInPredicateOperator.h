//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSubstringPredicateOperator;

@interface NSInPredicateOperator
{
    unsigned long long _flags;	// 24 = 0x18
    NSSubstringPredicateOperator *_stringVersion;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007d56b
- (unsigned long long)options;	// IMP=0x000000000007db5b
- (void)_setOptions:(unsigned long long)arg1;	// IMP=0x000000000007db47
- (_Bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;	// IMP=0x000000000007d911
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007d8af
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007d80a
- (unsigned long long)flags;	// IMP=0x000000000007d7f9
- (id)symbol;	// IMP=0x000000000007d678
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007d5f0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007d573
- (void)dealloc;	// IMP=0x000000000007d4fa
- (id)stringVersion;	// IMP=0x000000000007d451
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000007d3d8

@end

