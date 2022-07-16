//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/MPCPlayerRateCommand-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlayerRateCommand <MPCPlayerRateCommand>
{
    float _minimumValue;	// 16 = 0x10
    float _maximumValue;	// 20 = 0x14
}

@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
- (id)changeValue:(float)arg1;	// IMP=0x0000000000138a30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

