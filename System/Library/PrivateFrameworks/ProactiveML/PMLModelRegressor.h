//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class NSString, PMLDenseVector;

@interface PMLModelRegressor : NSObject <PMLPlistAndChunksSerializableProtocol>
{
    PMLDenseVector *_data;	// 8 = 0x8
}

+ (id)regressorVectorFrom:(id)arg1;	// IMP=0x0000000000017a4d
+ (id)modelRegressorFromFloat:(float)arg1;	// IMP=0x0000000000017a12
+ (id)modelRegressorFromFloats:(id)arg1;	// IMP=0x00000000000179c5
- (void).cxx_destruct;	// IMP=0x00000000000179b5
@property(readonly, nonatomic) int count;
- (const float *)inverseValues;	// IMP=0x0000000000017989
- (const float *)values;	// IMP=0x0000000000017973
- (id)regressorFor:(int)arg1;	// IMP=0x0000000000017932
- (id)init;	// IMP=0x000000000001792c
- (id)initWithRegressorFromFloat:(float)arg1;	// IMP=0x00000000000178ba
- (id)initModelRegressorFromFloats:(id)arg1;	// IMP=0x000000000001784f
- (id)denseVector;	// IMP=0x0000000000017841
- (id)toDictionary;	// IMP=0x000000000000ed96
- (id)initFromDictionary:(id)arg1;	// IMP=0x000000000000eba5
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;	// IMP=0x000000000000e9bb
- (id)migrateDenseDoubleVectorToDenseFloatVector:(id)arg1;	// IMP=0x000000000000e869
- (id)toPlistWithChunks:(id)arg1;	// IMP=0x000000000000e7ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

