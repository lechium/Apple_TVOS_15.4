//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SNVGGishBuzzerModelOutput : NSObject <MLFeatureProvider>
{
    MLMultiArray *_input_1;	// 8 = 0x8
    MLMultiArray *_Confidence;	// 16 = 0x10
    MLMultiArray *_Detected;	// 24 = 0x18
    MLMultiArray *_detectedHistoryOut;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000087280
@property(retain, nonatomic) MLMultiArray *detectedHistoryOut; // @synthesize detectedHistoryOut=_detectedHistoryOut;
@property(retain, nonatomic) MLMultiArray *Detected; // @synthesize Detected=_Detected;
@property(retain, nonatomic) MLMultiArray *Confidence; // @synthesize Confidence=_Confidence;
@property(retain, nonatomic) MLMultiArray *input_1; // @synthesize input_1=_input_1;
- (id)featureValueForName:(id)arg1;	// IMP=0x0000000000087143
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithInput_1:(id)arg1 Confidence:(id)arg2 Detected:(id)arg3 detectedHistoryOut:(id)arg4;	// IMP=0x0000000000087041

@end

