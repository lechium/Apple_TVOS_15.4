//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface VNVideoProcessorFrameRateCadence
{
    long long _frameRate;	// 8 = 0x8
}

@property(readonly) long long frameRate; // @synthesize frameRate=_frameRate;
- (void)populateVCPVideoProcessorRequestConfiguration:(id)arg1;	// IMP=0x00000000000e8855
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e87b5
- (unsigned long long)hash;	// IMP=0x00000000000e87a3
- (id)initWithFrameRate:(long long)arg1;	// IMP=0x00000000000e875f

@end

