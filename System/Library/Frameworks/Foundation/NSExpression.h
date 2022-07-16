//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSArray, NSPredicate, NSString;

@interface NSExpression : NSObject <NSSecureCoding, NSCopying>
{
    struct _expressionFlags {
        unsigned int _evaluationBlocked:1;
        unsigned int _reservedExpressionFlags:31;
    } _expressionFlags;	// 8 = 0x8
    unsigned int reserved;	// 12 = 0xc
    unsigned long long _expressionType;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000059b56
+ (id)expressionForAnyKey;	// IMP=0x0000000000059add
+ (id)expressionForBlock:(CDUnknownBlockType)arg1 arguments:(id)arg2;	// IMP=0x0000000000059a9d
+ (id)expressionForMinusSet:(id)arg1 with:(id)arg2;	// IMP=0x0000000000059a5d
+ (id)expressionForIntersectSet:(id)arg1 with:(id)arg2;	// IMP=0x0000000000059a1d
+ (id)expressionForUnionSet:(id)arg1 with:(id)arg2;	// IMP=0x00000000000599dd
+ (id)expressionForFunction:(id)arg1 arguments:(id)arg2;	// IMP=0x0000000000059929
+ (id)expressionForKeyPath:(id)arg1;	// IMP=0x00000000000598d8
+ (id)_newKeyPathExpressionForString:(id)arg1;	// IMP=0x00000000000598aa
+ (id)expressionForConditional:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3;	// IMP=0x0000000000059898
+ (id)expressionForTernaryWithPredicate:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3;	// IMP=0x000000000005984e
+ (id)expressionForVariableNameAssignment:(id)arg1 expression:(id)arg2;	// IMP=0x0000000000059813
+ (id)expressionForFunction:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3;	// IMP=0x00000000000597c9
+ (id)expressionForSubquery:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3;	// IMP=0x000000000005977f
+ (id)expressionForAggregate:(id)arg1;	// IMP=0x0000000000059749
+ (id)expressionForSymbolicString:(id)arg1;	// IMP=0x0000000000059713
+ (id)expressionForVariable:(id)arg1;	// IMP=0x00000000000596dd
+ (id)expressionForEvaluatedObject;	// IMP=0x00000000000596c4
+ (id)expressionForConstantValue:(id)arg1;	// IMP=0x000000000005968e
+ (id)expressionWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;	// IMP=0x0000000000059636
+ (id)expressionWithFormat:(id)arg1;	// IMP=0x0000000000059598
+ (id)expressionWithFormat:(id)arg1 argumentArray:(id)arg2;	// IMP=0x0000000000059540
- (id)_expressionWithSubstitutionVariables:(id)arg1;	// IMP=0x000000000005a037
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x000000000005a015
- (_Bool)_shouldUseParensWithDescription;	// IMP=0x000000000005a00d
@property(readonly, copy) CDUnknownBlockType expressionBlock;
@property(readonly, copy) NSExpression *falseExpression;
@property(readonly, copy) NSExpression *trueExpression;
- (id)subexpression;	// IMP=0x0000000000059f55
@property(readonly, retain) id collection;
@property(readonly, copy) NSPredicate *predicate;
@property(readonly, copy) NSExpression *rightExpression;
@property(readonly, copy) NSExpression *leftExpression;
@property(readonly, copy) NSArray *arguments;
- (SEL)selector;	// IMP=0x0000000000059e40
@property(readonly, copy) NSExpression *operand;
@property(readonly, copy) NSString *function;
@property(readonly, copy) NSString *variable;
@property(readonly, retain) id constantValue;
@property(readonly, copy) NSString *keyPath;
@property(readonly) unsigned long long expressionType;
- (id)predicateFormat;	// IMP=0x0000000000059d22
- (id)description;	// IMP=0x0000000000059d10
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000059ce2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000059cb4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000059c00
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000059b75
- (void)allowEvaluation;	// IMP=0x0000000000059b6b
- (_Bool)_allowsEvaluation;	// IMP=0x0000000000059b5e
- (id)initWithExpressionType:(unsigned long long)arg1;	// IMP=0x0000000000059af6

@end
