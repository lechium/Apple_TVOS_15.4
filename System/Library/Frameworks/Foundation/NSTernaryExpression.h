//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSExpression, NSPredicate;

@interface NSTernaryExpression
{
    NSPredicate *_predicate;	// 24 = 0x18
    NSExpression *_trueExpression;	// 32 = 0x20
    NSExpression *_falseExpression;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000018d2d7
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;	// IMP=0x000000000018dbcb
- (id)_expressionWithSubstitutionVariables:(id)arg1;	// IMP=0x000000000018dae1
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x000000000018da12
- (id)falseExpression;	// IMP=0x000000000018da01
- (id)trueExpression;	// IMP=0x000000000018d9f0
- (id)predicate;	// IMP=0x000000000018d9df
- (id)predicateFormat;	// IMP=0x000000000018d93f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018d824
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018d76c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018d494
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018d378
- (void)allowEvaluation;	// IMP=0x000000000018d2df
- (void)dealloc;	// IMP=0x000000000018d237
- (id)initWithPredicate:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3;	// IMP=0x000000000018d180

@end

