//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@interface NSPredicateOperator : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _operatorType;	// 8 = 0x8
    unsigned long long _modifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ffb2c
+ (id)operatorWithCustomSelector:(SEL)arg1 modifier:(unsigned long long)arg2;	// IMP=0x00000000000ffa60
+ (id)_newOperatorWithType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3;	// IMP=0x00000000000ff746
+ (id)operatorWithType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3;	// IMP=0x00000000000ff72c
+ (SEL)_getSelectorForType:(unsigned long long)arg1;	// IMP=0x00000000000ff678
+ (id)_getSymbolForType:(unsigned long long)arg1;	// IMP=0x00000000000ff574
- (void)_setModifier:(unsigned long long)arg1;	// IMP=0x00000000001001dd
- (unsigned long long)options;	// IMP=0x00000000001001d5
- (void)_setOptions:(unsigned long long)arg1;	// IMP=0x00000000001001aa
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x0000000000100188
- (_Bool)performOperationUsingObject:(id)arg1 andObject:(id)arg2;	// IMP=0x00000000000ffe2d
- (_Bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;	// IMP=0x00000000000ffdff
- (unsigned long long)hash;	// IMP=0x00000000000ffda8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ffd24
- (unsigned long long)modifier;	// IMP=0x00000000000ffd1a
- (id)symbol;	// IMP=0x00000000000ffcfa
- (unsigned long long)operatorType;	// IMP=0x00000000000ffcf0
- (SEL)selector;	// IMP=0x00000000000ffcd0
- (id)description;	// IMP=0x00000000000ffcbe
- (id)predicateFormat;	// IMP=0x00000000000ffcac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ffc7e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ffbc9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ffb34
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3;	// IMP=0x00000000000ffb1a
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2;	// IMP=0x00000000000ffaaf
- (id)initWithOperatorType:(unsigned long long)arg1;	// IMP=0x00000000000ffa9b

@end

