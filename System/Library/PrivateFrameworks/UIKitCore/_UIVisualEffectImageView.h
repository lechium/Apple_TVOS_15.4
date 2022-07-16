//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIVisualEffectViewParticipatingInternal-Protocol.h>

@class NSArray, NSString, UIView, _UIVisualEffectViewBackdropCaptureGroup;
@protocol _UIVisualEffectViewParticipating, _UIVisualEffectViewSubviewMonitoring;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectImageView <_UIVisualEffectViewParticipatingInternal>
{
    _UIVisualEffectViewBackdropCaptureGroup *_primaryCaptureGroup;	// 112 = 0x70
    NSArray *_viewEffects;	// 120 = 0x78
    NSArray *_filters;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000f113ce
@property(copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(copy, nonatomic) NSArray *viewEffects; // @synthesize viewEffects=_viewEffects;
@property(retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup; // @synthesize primaryCaptureGroup=_primaryCaptureGroup;
- (id)_initialValueForLayer:(id)arg1 keyPath:(id)arg2 usePresentationValue:(_Bool)arg3;	// IMP=0x0000000000f112d2
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x0000000000f11264
- (void)applyIdentityFilterEffects;	// IMP=0x0000000000f1124d
- (void)applyRequestedFilterEffects;	// IMP=0x0000000000f11233
- (void)applyIdentityViewEffects;	// IMP=0x0000000000f111e8
- (void)applyRequestedViewEffects;	// IMP=0x0000000000f111ce
@property(retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *containedView;
@property(nonatomic) _Bool disableGroupFiltering;
@property(nonatomic) __weak id <_UIVisualEffectViewSubviewMonitoring> subviewMonitor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

