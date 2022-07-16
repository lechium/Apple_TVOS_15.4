//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class NSString, PMLMutableDenseVector;

@interface PMLModelWeights : NSObject <PMLPlistAndChunksSerializableProtocol>
{
    PMLMutableDenseVector *_data;	// 8 = 0x8
}

+ (id)weightsFromNumbers:(id)arg1;	// IMP=0x000000000001f9a6
+ (id)constWeightsOfLength:(int)arg1 value:(float)arg2;	// IMP=0x000000000001f8b6
+ (id)zeroWeightsOfLength:(int)arg1;	// IMP=0x000000000001f84e
+ (id)modelWeightsOfLength:(int)arg1 rngSeed:(unsigned long long)arg2;	// IMP=0x000000000001f7dd
+ (id)modelWeightsOfLength:(int)arg1;	// IMP=0x000000000001f7c9
+ (id)modelWeightsOfLength:(int)arg1 rng:(id)arg2;	// IMP=0x000000000001f54d
+ (id)modelWeightsFromFloats:(id)arg1;	// IMP=0x000000000001f500
- (void).cxx_destruct;	// IMP=0x000000000001f4f0
- (id)copy;	// IMP=0x000000000001f4b7
- (id)sliceFrom:(int)arg1 to:(int)arg2;	// IMP=0x000000000001f45c
- (id)weightsByAppendingWeights:(id)arg1;	// IMP=0x000000000001f3fd
- (void)processValuesInPlaceWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f3e7
@property(readonly, nonatomic) int length;
- (id)asMutableDenseVector;	// IMP=0x000000000001f3c3
- (float *)values;	// IMP=0x000000000001f3ad
- (id)initWithCount:(int)arg1;	// IMP=0x000000000001f34e
- (id)initModelWeightsFromFloats:(id)arg1;	// IMP=0x000000000001f2e3
- (id)toDictionary;	// IMP=0x000000000000e4ea
- (id)initFromDictionary:(id)arg1;	// IMP=0x000000000000e232
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;	// IMP=0x000000000000dfbd
- (id)migrateDenseDoubleVectorToDenseFloatVector:(id)arg1;	// IMP=0x000000000000de6b
- (id)toPlistWithChunks:(id)arg1;	// IMP=0x000000000000ddbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

