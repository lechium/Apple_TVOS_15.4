//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AVCaptureManualExposureBracketedStillImageSettings
{
    CDStruct_1b6d18a9 _exposureDuration;	// 8 = 0x8
    float _ISO;	// 32 = 0x20
}

+ (id)manualExposureSettingsWithExposureDuration:(CDStruct_1b6d18a9)arg1 ISO:(float)arg2;	// IMP=0x0000000000077bb5
+ (void)initialize;	// IMP=0x0000000000077ba4
@property(readonly) float ISO; // @synthesize ISO=_ISO;
@property(readonly) CDStruct_1b6d18a9 exposureDuration; // @synthesize exposureDuration=_exposureDuration;
- (id)description;	// IMP=0x0000000000077cdd
- (id)debugDescription;	// IMP=0x0000000000077c67
- (id)_initManualExposureSettingsWithExposureDuration:(CDStruct_1b6d18a9)arg1 ISO:(float)arg2;	// IMP=0x0000000000077c02

@end

