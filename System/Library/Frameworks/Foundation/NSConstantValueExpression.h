//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSConstantValueExpression
{
    id constantValue;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000036fe9
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;	// IMP=0x00000000000375d7
- (id)expressionValueWithObject:(id)arg1;	// IMP=0x000000000003757b
- (unsigned long long)hash;	// IMP=0x0000000000037550
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000374d6
- (id)constantValue;	// IMP=0x00000000000374c5
- (id)predicateFormat;	// IMP=0x00000000000373f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000373bd
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000370f9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000036ff1
- (id)initWithObject:(id)arg1;	// IMP=0x0000000000036f72
- (void)dealloc;	// IMP=0x0000000000036f0d

@end

