//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol _UISEGestureFeatureSettings, _UISETouchedEdgesProvider;

__attribute__((visibility("hidden")))
@interface _UISEOrthogonalHysteresisGestureFeature
{
    id <_UISEGestureFeatureSettings> _settings;	// 8 = 0x8
    id <_UISETouchedEdgesProvider> _provider;	// 16 = 0x10
    struct CGPoint _initialLocation;	// 24 = 0x18
    double _initialTimestamp;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000006a8eeb
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;	// IMP=0x00000000006a8c45
- (id)initWithSettings:(id)arg1 touchedEdgesProvider:(id)arg2;	// IMP=0x00000000006a8b7c

@end

