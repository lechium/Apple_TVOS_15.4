//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMIDESMutableFloatArray, NSArray;

@interface HMIDESTrainingResult : HMFObject
{
    float _preTrainingLoss;	// 8 = 0x8
    float _postTrainingLoss;	// 12 = 0xc
    NSArray *_layerParameters;	// 16 = 0x10
    NSArray *_losses;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000087520
@property(readonly) float postTrainingLoss; // @synthesize postTrainingLoss=_postTrainingLoss;
@property(readonly) float preTrainingLoss; // @synthesize preTrainingLoss=_preTrainingLoss;
@property(readonly) NSArray *losses; // @synthesize losses=_losses;
@property(readonly) NSArray *layerParameters; // @synthesize layerParameters=_layerParameters;
@property(readonly) float l2Norm;
@property(readonly) HMIDESMutableFloatArray *flattedTrainingResult;
- (id)initWithLayerParameters:(id)arg1 losses:(id)arg2 preTrainingLoss:(float)arg3 postTrainingLoss:(float)arg4;	// IMP=0x00000000000871fc

@end

