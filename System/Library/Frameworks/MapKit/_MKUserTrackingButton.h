//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

#import <MapKit/MKUserTrackingButtonTarget-Protocol.h>

@class MKMapView, NSMutableDictionary, NSString, _MKUserTrackingButtonController;
@protocol MKUserTrackingView;

@interface _MKUserTrackingButton : UIButton <MKUserTrackingButtonTarget>
{
    _MKUserTrackingButtonController *_controller;	// 8 = 0x8
    NSMutableDictionary *_customImages;	// 16 = 0x10
    NSMutableDictionary *_customLandscapeImagePhones;	// 24 = 0x18
    NSMutableDictionary *_customImageEdgeInsets;	// 32 = 0x20
    _Bool _selectsWhenTracking;	// 40 = 0x28
    _Bool _explicitlyEnabled;	// 41 = 0x29
    _Bool _internallyEnabled;	// 42 = 0x2a
    _Bool _applyDefaultImageIfNeeded;	// 43 = 0x2b
    _Bool _inMiniBar;	// 44 = 0x2c
}

+ (Class)_activityIndicatorClass;	// IMP=0x000000000008b4f5
+ (id)buttonWithUserTrackingView:(id)arg1 withType:(long long)arg2 applyDefaultImageIfNeeded:(_Bool)arg3;	// IMP=0x000000000008a6f8
+ (id)buttonWithUserTrackingView:(id)arg1 withType:(long long)arg2;	// IMP=0x000000000008a6e0
+ (id)buttonWithUserTrackingView:(id)arg1;	// IMP=0x000000000008a6c9
+ (id)buttonWithMapView:(id)arg1 applyDefaultImageIfNeeded:(_Bool)arg2;	// IMP=0x000000000008a6af
+ (id)buttonWithMapView:(id)arg1;	// IMP=0x000000000008a69d
- (void).cxx_destruct;	// IMP=0x000000000008b7a7
@property(readonly, nonatomic) _Bool inMiniBar; // @synthesize inMiniBar=_inMiniBar;
@property(nonatomic, getter=_selectsWhenTracking, setter=_setSelectsWhenTracking:) _Bool selectsWhenTracking; // @synthesize selectsWhenTracking=_selectsWhenTracking;
@property(readonly, nonatomic) _MKUserTrackingButtonController *controller; // @synthesize controller=_controller;
- (void)_setInternallyEnabled:(_Bool)arg1;	// IMP=0x000000000008b71a
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000008b6c8
- (struct CGRect)_selectedIndicatorBounds;	// IMP=0x000000000008b6a9
- (void)updateForMiniBarState:(_Bool)arg1;	// IMP=0x000000000008b65c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000008b637
- (void)_repositionViews;	// IMP=0x000000000008b576
@property(readonly, nonatomic) unsigned long long behavior;
- (void)_setState:(long long)arg1;	// IMP=0x000000000008b551
- (long long)_state;	// IMP=0x000000000008b534
- (void)_updateForState:(long long)arg1;	// IMP=0x000000000008b52e
- (_Bool)_isHighlightedForState:(long long)arg1;	// IMP=0x000000000008b511
- (long long)_activityIndicatorStyle;	// IMP=0x000000000008b506
- (void)_setImageEdgeInsets:(struct UIEdgeInsets)arg1 forUserTrackingMode:(long long)arg2;	// IMP=0x000000000008b401
- (struct UIEdgeInsets)_imageEdgeInsetsForUserTrackingMode:(long long)arg1;	// IMP=0x000000000008b2b8
- (void)_setLandscapeImagePhone:(id)arg1 forUserTrackingMode:(long long)arg2 controlState:(unsigned long long)arg3;	// IMP=0x000000000008b121
- (id)_landscapeImagePhoneForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2;	// IMP=0x000000000008b021
- (id)_defaultLandscapeImagePhoneForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2;	// IMP=0x000000000008af59
- (void)_setImage:(id)arg1 forUserTrackingMode:(long long)arg2 controlState:(unsigned long long)arg3;	// IMP=0x000000000008adc2
- (id)_imageForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2;	// IMP=0x000000000008acb0
- (id)_defaultImageForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2;	// IMP=0x000000000008abe8
- (id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2;	// IMP=0x000000000008ab0f
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000008aa49
@property(nonatomic) __weak id <MKUserTrackingView> userTrackingView;
@property(nonatomic) __weak MKMapView *mapView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

