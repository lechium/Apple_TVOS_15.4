//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/TVAuxiliaryViewSelecting-Protocol.h>

@class NSString, UIView;
@protocol TVAuxiliaryViewSelecting, TVCollectionViewLockupCellDelegate;

__attribute__((visibility("hidden")))
@interface _TVCollectionViewLockupCell <TVAuxiliaryViewSelecting>
{
    _Bool _pressIsAnimating;	// 8 = 0x8
    UIView<TVAuxiliaryViewSelecting> *__selectingView;	// 16 = 0x10
    _Bool _unpressOnEndAnimating;	// 24 = 0x18
    struct {
        _Bool respondsToDidUnfocus;
        _Bool respondsToDidSelect;
        _Bool respondsToLayeredImageContainerLayerWithinCollectionViewCell;
    } _delegateFlags;	// 25 = 0x19
    id <TVCollectionViewLockupCellDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000193f86
@property(nonatomic) __weak id <TVCollectionViewLockupCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showPressState;	// IMP=0x0000000000193cbb
- (void)_handleSelect;	// IMP=0x0000000000193ae6
- (id)_selectingView;	// IMP=0x0000000000193938
- (void)_clearPressState;	// IMP=0x00000000001937a1
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;	// IMP=0x0000000000193727
- (_Bool)_descendantsShouldHighlight;	// IMP=0x000000000019371f
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x00000000001935d0
- (id)layeredImageContainerLayer;	// IMP=0x000000000019356f
- (void)prepareForReuse;	// IMP=0x0000000000193368
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000193074
- (void)_searchForFocusRegionsInContext:(id)arg1;	// IMP=0x0000000000192a6b
- (id)selectingView;	// IMP=0x0000000000192963
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001928a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

