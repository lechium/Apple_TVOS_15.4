//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSExpression;

@interface NSFunctionExpression
{
    NSExpression *_operand;	// 24 = 0x18
    SEL _selector;	// 32 = 0x20
    NSArray *_arguments;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006b246
- (id)_expressionWithSubstitutionVariables:(id)arg1;	// IMP=0x000000000006d35f
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x000000000006d1dc
- (_Bool)_shouldUseParensWithDescription;	// IMP=0x000000000006d1a1
- (id)predicateFormat;	// IMP=0x000000000006c8fa
- (id)binaryOperatorForSelector;	// IMP=0x000000000006c81c
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;	// IMP=0x000000000006bced
- (unsigned long long)hash;	// IMP=0x000000000006bc6c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006bb8f
- (id)arguments;	// IMP=0x000000000006bb7e
- (SEL)selector;	// IMP=0x000000000006bb6d
- (id)operand;	// IMP=0x000000000006bb5c
- (id)function;	// IMP=0x000000000006bb42
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006b91b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006b4fd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006b3d9
- (_Bool)_allowsEvaluation;	// IMP=0x000000000006b387
- (void)allowEvaluation;	// IMP=0x000000000006b24e
- (id)initWithTarget:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3;	// IMP=0x000000000006b137
- (id)initWithExpressionType:(unsigned long long)arg1 operand:(id)arg2 selector:(SEL)arg3 argumentArray:(id)arg4;	// IMP=0x000000000006b090
- (id)initWithSelector:(SEL)arg1 argumentArray:(id)arg2;	// IMP=0x000000000006b00b
- (void)dealloc;	// IMP=0x000000000006af90

@end
