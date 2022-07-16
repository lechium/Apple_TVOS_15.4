//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSArray, NSString, PXCuratedLibraryStyleGuide, PXCuratedLibraryViewModel, PXUpdater, UIVisualEffectView, _PXCuratedLibraryZoomLevelSegmentedControl;
@protocol PXCuratedLibraryZoomLevelControlDelegate;

@interface PXCuratedLibraryZoomLevelControl : UIView <PXChangeObserver>
{
    PXUpdater *_updater;	// 8 = 0x8
    struct UIEdgeInsets _padding;	// 16 = 0x10
    struct CGSize *_textSizes;	// 48 = 0x30
    double _minimumInterTextSpacing;	// 56 = 0x38
    struct CGSize _intrinsicSize;	// 64 = 0x40
    UIVisualEffectView *_backgroundEffectView;	// 80 = 0x50
    _PXCuratedLibraryZoomLevelSegmentedControl *_segmentedControl;	// 88 = 0x58
    PXCuratedLibraryViewModel *_viewModel;	// 96 = 0x60
    PXCuratedLibraryStyleGuide *_styleGuide;	// 104 = 0x68
    id <PXCuratedLibraryZoomLevelControlDelegate> _delegate;	// 112 = 0x70
    NSArray *_zoomLevelIdentifiers;	// 120 = 0x78
    long long _selectedZoomLevel;	// 128 = 0x80
    NSArray *_enabledZoomLevelIdentifiers;	// 136 = 0x88
    long long _shrinkLevel;	// 144 = 0x90
}

+ (id)_enabledZoomLevelIdentifiersForViewModel:(id)arg1;	// IMP=0x000000000019e4f4
+ (id)_allZoomLevelIdentifiers;	// IMP=0x000000000019e4e7
- (void).cxx_destruct;	// IMP=0x000000000019df8d
@property(nonatomic) long long shrinkLevel; // @synthesize shrinkLevel=_shrinkLevel;
@property(retain, nonatomic) NSArray *enabledZoomLevelIdentifiers; // @synthesize enabledZoomLevelIdentifiers=_enabledZoomLevelIdentifiers;
@property(nonatomic) long long selectedZoomLevel; // @synthesize selectedZoomLevel=_selectedZoomLevel;
@property(readonly, nonatomic) NSArray *zoomLevelIdentifiers; // @synthesize zoomLevelIdentifiers=_zoomLevelIdentifiers;
@property(nonatomic) __weak id <PXCuratedLibraryZoomLevelControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PXCuratedLibraryStyleGuide *styleGuide; // @synthesize styleGuide=_styleGuide;
@property(readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000019dcde
- (void)_handleContentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000000019dccc
- (void)_handleSegmentedControlAction:(id)arg1;	// IMP=0x000000000019db18
- (void)_updateSegmentedControl;	// IMP=0x000000000019d4ce
- (void)_invalidateSegmentedControl;	// IMP=0x000000000019d4aa
- (long long)zoomLevelDisplayedBeforeZoomLevel:(long long)arg1;	// IMP=0x000000000019d3e6
- (void)layoutSubviews;	// IMP=0x000000000019ce78
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000019ce3e
- (void)dealloc;	// IMP=0x000000000019cdfd
- (id)initWithViewModel:(id)arg1 styleGuide:(id)arg2;	// IMP=0x000000000019ca5c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000019c9e2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019c95f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
