//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSStringPredicateOperator
{
    unsigned long long _flags;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000013b510
- (unsigned long long)options;	// IMP=0x000000000013b8e0
- (void)_setOptions:(unsigned long long)arg1;	// IMP=0x000000000013b8cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013b86a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013b7c5
- (unsigned long long)flags;	// IMP=0x000000000013b7b4
- (id)_modifierString;	// IMP=0x000000000013b6b4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013b5dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013b518
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3;	// IMP=0x000000000013b497

@end

