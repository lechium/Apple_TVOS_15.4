//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol _UISEGestureFeatureSettings;

__attribute__((visibility("hidden")))
@interface _UISEDiagonalHysteresisRecognizeGestureFeature
{
    id <_UISEGestureFeatureSettings> _settings;	// 8 = 0x8
    struct CGPoint _initialLocation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006a032c
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;	// IMP=0x00000000006a0292
- (id)initWithSettings:(id)arg1;	// IMP=0x00000000006a0212

@end

