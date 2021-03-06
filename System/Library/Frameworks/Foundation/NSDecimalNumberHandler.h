//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCoding-Protocol.h>
#import <Foundation/NSDecimalNumberBehaviors-Protocol.h>

@interface NSDecimalNumberHandler : NSObject <NSDecimalNumberBehaviors, NSCoding>
{
    unsigned int _scale:16;	// 8 = 0x8
    unsigned int _roundingMode:3;	// 10 = 0xa
    unsigned int _raiseOnExactness:1;	// 10 = 0xa
    unsigned int _raiseOnOverflow:1;	// 10 = 0xa
    unsigned int _raiseOnUnderflow:1;	// 10 = 0xa
    unsigned int _raiseOnDivideByZero:1;	// 10 = 0xa
    unsigned int _unused:9;	// 10 = 0xa
    void *_reserved2;	// 16 = 0x10
    void *_reserved;	// 24 = 0x18
}

+ (id)decimalNumberHandlerWithRoundingMode:(unsigned long long)arg1 scale:(short)arg2 raiseOnExactness:(_Bool)arg3 raiseOnOverflow:(_Bool)arg4 raiseOnUnderflow:(_Bool)arg5 raiseOnDivideByZero:(_Bool)arg6;	// IMP=0x000000000004c3e7
+ (id)defaultDecimalNumberHandler;	// IMP=0x000000000004c2f3
- (id)exceptionDuringOperation:(SEL)arg1 error:(unsigned long long)arg2 leftOperand:(id)arg3 rightOperand:(id)arg4;	// IMP=0x000000000004c68a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004c56a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004c46a
- (short)scale;	// IMP=0x000000000004c460
- (unsigned long long)roundingMode;	// IMP=0x000000000004c453
- (id)initWithRoundingMode:(unsigned long long)arg1 scale:(short)arg2 raiseOnExactness:(_Bool)arg3 raiseOnOverflow:(_Bool)arg4 raiseOnUnderflow:(_Bool)arg5 raiseOnDivideByZero:(_Bool)arg6;	// IMP=0x000000000004c33f

@end

