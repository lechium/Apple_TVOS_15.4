//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSExpression;

@interface NSSetExpression
{
    NSExpression *_left;	// 24 = 0x18
    NSExpression *_right;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001294a4
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000129c97
- (id)_expressionWithSubstitutionVariables:(id)arg1;	// IMP=0x0000000000129bb5
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x0000000000129ab9
- (id)rightExpression;	// IMP=0x0000000000129aa8
- (id)leftExpression;	// IMP=0x0000000000129a97
- (id)predicateFormat;	// IMP=0x00000000001299de
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000129901
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000129859
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000129630
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000129534
- (void)allowEvaluation;	// IMP=0x00000000001294ac
- (void)dealloc;	// IMP=0x0000000000129416
- (id)initWithType:(unsigned long long)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;	// IMP=0x000000000012937c

@end
