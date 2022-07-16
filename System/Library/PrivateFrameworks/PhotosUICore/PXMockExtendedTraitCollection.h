//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMockMutableExtendedTraitCollection-Protocol.h>

@class PXUpdater;

@interface PXMockExtendedTraitCollection <PXMockMutableExtendedTraitCollection>
{
    PXUpdater *_updater;	// 8 = 0x8
    long long _layoutSizeClass;	// 16 = 0x10
    long long _layoutOrientation;	// 24 = 0x18
    long long _userInterfaceIdiom;	// 32 = 0x20
    long long _formFactor;	// 40 = 0x28
    unsigned long long _visibleChromeElements;	// 48 = 0x30
    double _displayScale;	// 56 = 0x38
    long long _windowOrientation;	// 64 = 0x40
    struct CGSize _layoutReferenceSize;	// 72 = 0x48
    struct UIEdgeInsets _safeAreaInsets;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000004782f4
@property(nonatomic) long long windowOrientation; // @synthesize windowOrientation=_windowOrientation;
@property(nonatomic) struct UIEdgeInsets safeAreaInsets; // @synthesize safeAreaInsets=_safeAreaInsets;
@property(nonatomic) double displayScale; // @synthesize displayScale=_displayScale;
@property(nonatomic) unsigned long long visibleChromeElements; // @synthesize visibleChromeElements=_visibleChromeElements;
@property(nonatomic) long long formFactor; // @synthesize formFactor=_formFactor;
@property(nonatomic) long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(nonatomic) struct CGSize layoutReferenceSize; // @synthesize layoutReferenceSize=_layoutReferenceSize;
@property(nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property(nonatomic) long long layoutSizeClass; // @synthesize layoutSizeClass=_layoutSizeClass;
- (void)_updateSafeAreaInsets;	// IMP=0x0000000000477f9c
- (void)_invalidateSafeAreaInsets;	// IMP=0x0000000000477f78
- (void)_updateLayoutReferenceSizeAndDisplayScale;	// IMP=0x0000000000477cf4
- (void)_invalidateLayoutReferenceSizeAndDisplayScale;	// IMP=0x0000000000477cd0
- (void)_updateLayoutSizeClass;	// IMP=0x0000000000477c72
- (void)_invalidateLayoutSizeClass;	// IMP=0x0000000000477c4e
- (void)_setNeedsUpdate;	// IMP=0x0000000000477966
- (long long)layoutSizeSubclass;	// IMP=0x000000000047795b
- (void)didPerformChanges;	// IMP=0x0000000000477912
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000004778e3
- (void)unregisterObservations;	// IMP=0x00000000004778dd
- (void)registerObservations;	// IMP=0x00000000004778d7
- (id)initWithFormFactor:(long long)arg1 orientation:(long long)arg2 visibleChromeElements:(unsigned long long)arg3;	// IMP=0x000000000047784f
- (id)initWithLayoutSizeClass:(long long)arg1;	// IMP=0x00000000004777dd
- (id)initWithViewController:(id)arg1;	// IMP=0x0000000000477704

@end
