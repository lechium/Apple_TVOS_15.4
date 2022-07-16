//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCAudioPowerSpectrumBin : NSObject
{
    struct _VCRange _frequencyRange;	// 8 = 0x8
    float _powerLevel;	// 16 = 0x10
}

@property(nonatomic) float powerLevel; // @synthesize powerLevel=_powerLevel;
@property(nonatomic) struct _VCRange frequencyRange; // @synthesize frequencyRange=_frequencyRange;
- (id)initWithFrequencyRange:(struct _VCRange)arg1;	// IMP=0x0000000000303535
- (id)description;	// IMP=0x00000000003034fe

@end

