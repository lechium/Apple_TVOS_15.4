//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PMLSparseVector : NSObject
{
    unsigned long long _length;	// 8 = 0x8
    unsigned long long _numberOfNonZeroValues;	// 16 = 0x10
    long long *_sparseIndices;	// 24 = 0x18
    float *_sparseValues;	// 32 = 0x20
}

+ (id)sparseVectorFromNumbers:(id)arg1 indices:(id)arg2 length:(unsigned long long)arg3;	// IMP=0x000000000002247f
+ (id)sparseVectorFromNumbers:(id)arg1;	// IMP=0x000000000002231d
+ (void)sparseVectorWithLength:(unsigned long long)arg1 numberOfNonZeroValues:(unsigned long long)arg2 isSparseIndexInt64:(_Bool)arg3 sparseIndices:(const void *)arg4 sparseValues:(const float *)arg5 toDenseValues:(float *)arg6 withLength:(unsigned long long)arg7;	// IMP=0x00000000000221cf
+ (id)sparseVectorWithLength:(unsigned long long)arg1 numberOfNonZeroValues:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000022112
+ (id)sparseVectorEmptyWithLength:(unsigned long long)arg1;	// IMP=0x00000000000220db
+ (id)sparseVectorFromDense:(id)arg1;	// IMP=0x0000000000022060
+ (id)sparseVectorFromDense:(const float *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000021f79
@property(nonatomic) float *sparseValues; // @synthesize sparseValues=_sparseValues;
@property(nonatomic) long long *sparseIndices; // @synthesize sparseIndices=_sparseIndices;
@property(nonatomic) unsigned long long numberOfNonZeroValues; // @synthesize numberOfNonZeroValues=_numberOfNonZeroValues;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
- (id)vectorWithConstantColumn;	// IMP=0x0000000000021e1a
- (float)valueAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000021d7a
- (void)addEndId:(long long)arg1 paddingId:(long long)arg2 withMaxVectorLength:(unsigned long long)arg3;	// IMP=0x0000000000021bfa
- (void)convertToBagOfIds;	// IMP=0x0000000000021bc3
- (void)sparseVectorToDense:(float *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000021b7f
- (void)processNonZeroValuesInPlaceWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000021b31
- (void)enumerateNonZeroValuesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000021aec
- (void)setLength:(unsigned long long)arg1;	// IMP=0x0000000000021840
- (void)scaleWithVectorNormalization:(long long)arg1;	// IMP=0x0000000000021733
- (void)applyOneHotNormalization;	// IMP=0x00000000000216f9
- (void)scaleInPlaceWithInversedFactor:(float)arg1;	// IMP=0x00000000000216c9
- (float)maxAbsValue;	// IMP=0x0000000000021675
- (float)l2norm;	// IMP=0x000000000002165d
- (float)l1norm;	// IMP=0x0000000000021645
- (float)maxValue;	// IMP=0x000000000002160a
- (float)minValue;	// IMP=0x00000000000215d6
- (id)quantizedValuesAsUInt8DataWithMin:(float)arg1 max:(float)arg2;	// IMP=0x00000000000214bc
- (id)indicesAsUInt16Data;	// IMP=0x0000000000021379
- (id)valuesData;	// IMP=0x00000000000212f8
- (id)indicesData;	// IMP=0x0000000000021239
- (void)dealloc;	// IMP=0x00000000000211f6
- (id)initWithLength:(unsigned long long)arg1 numberOfNonZeroValues:(unsigned long long)arg2 indices:(long long *)arg3 values:(float *)arg4;	// IMP=0x0000000000021090
- (id)initWithLength:(unsigned long long)arg1 numberOfNonZeroValues:(unsigned long long)arg2 indicesData:(id)arg3 valuesData:(id)arg4;	// IMP=0x0000000000020ff3
- (id)init;	// IMP=0x0000000000020fed

@end

