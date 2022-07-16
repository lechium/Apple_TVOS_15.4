//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SNSoundPrint100kFireAlarmModelInput : NSObject <MLFeatureProvider>
{
    MLMultiArray *_soundprint_Placeholder;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007977f
@property(retain, nonatomic) MLMultiArray *soundprint_Placeholder; // @synthesize soundprint_Placeholder=_soundprint_Placeholder;
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000007970b
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithSoundprint_Placeholder:(id)arg1;	// IMP=0x0000000000079680

@end

