//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreAutoLayout/NSFastEnumeration-Protocol.h>

@class NSISEngine;

@interface NSISLinearExpression : NSObject <NSFastEnumeration>
{
    NSISEngine *engine;	// 8 = 0x8
    CDStruct_9ac54d62 linExp;	// 16 = 0x10
}

+ (id)acquireFromPoolForUseCase:(long long)arg1 engine:(id)arg2;	// IMP=0x000000000002040a
+ (id)acquireFromPoolForUseCase:(long long)arg1;	// IMP=0x00000000000203a8
+ (id)newExpressionWithCapacity:(unsigned long long)arg1 engine:(id)arg2;	// IMP=0x00000000000200c4
+ (id)newExpressionWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000020062
+ (void)initialize;	// IMP=0x000000000001c68b
- (id)copyContentsAndReturnToPool;	// IMP=0x0000000000020226
- (void)returnToPool;	// IMP=0x0000000000020194
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000002014f
- (void)verifyInternalIntegrity;	// IMP=0x000000000001fd5f
- (void)scaleBy:(double)arg1;	// IMP=0x000000000001fd4a
- (id)variablesArray;	// IMP=0x000000000001fb1e
- (unsigned long long)variableCount;	// IMP=0x000000000001fb15
- (_Bool)enumerateVariablesAndCoefficientsUntil:(CDUnknownBlockType)arg1;	// IMP=0x000000000001fa83
- (void)enumerateVariables:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f8e4
- (void)enumerateVariablesAndCoefficients:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f85b
- (id)description;	// IMP=0x000000000001f7d8
- (void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;	// IMP=0x000000000001f43b
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(CDUnknownBlockType)arg4 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg5;	// IMP=0x000000000001f06a
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2;	// IMP=0x000000000001ef12
- (_Bool)isConstant;	// IMP=0x000000000001eedf
@property double constant;
- (double)incrementConstant:(double)arg1;	// IMP=0x000000000001eeae
- (void)addVariable:(id)arg1 coefficient:(double)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;	// IMP=0x000000000001ecba
- (void)addVariable:(id)arg1 coefficient:(double)arg2;	// IMP=0x000000000001e906
- (void)addExpression:(id)arg1 times:(double)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;	// IMP=0x000000000001e6a5
- (void)addExpression:(id)arg1 times:(double)arg2;	// IMP=0x000000000001e5ab
- (void)dealloc;	// IMP=0x000000000001d9ba
- (void)replaceVariable:(id)arg1 withVariable:(id)arg2 coefficient:(double)arg3;	// IMP=0x000000000001d7a7
- (void)setCoefficient:(double)arg1 forVariable:(id)arg2;	// IMP=0x000000000001d418
- (double)coefficientForVariable:(id)arg1;	// IMP=0x000000000001cfe4
- (void)removeVariable:(id)arg1;	// IMP=0x000000000001cdee
@property(readonly) NSISEngine *engine;
- (unsigned long long)hash;	// IMP=0x000000000001c9fd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c8ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c89b
- (id)initWithEngine:(id)arg1;	// IMP=0x000000000001c789
- (id)init;	// IMP=0x000000000001c727

@end

