//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class GKDashboardPlayerPhotoFloatingContentView, GKDashboardPlayerPhotoView, GKPlayer, UICollectionViewCell;

@interface GKDashboardPlayerShadowView : UIView
{
    UICollectionViewCell *_parentCell;	// 8 = 0x8
    GKDashboardPlayerPhotoView *_photoView;	// 16 = 0x10
    GKDashboardPlayerPhotoFloatingContentView *_floatingView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d4cbc
@property(retain, nonatomic) GKDashboardPlayerPhotoFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) GKDashboardPlayerPhotoView *photoView; // @synthesize photoView=_photoView;
@property(nonatomic) UICollectionViewCell *parentCell; // @synthesize parentCell=_parentCell;
- (void)layoutSubviews;	// IMP=0x00000000000d4bce
- (void)setFocused:(_Bool)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000d4b37
@property(nonatomic, getter=isUsingFocusAlpha) _Bool usingFocusAlpha;
@property(nonatomic) _Bool dimmed;
@property(readonly, nonatomic) _Bool isUsingPlaceholder; // @dynamic isUsingPlaceholder;
@property(readonly, nonatomic) UIView *parentView; // @dynamic parentView;
- (void)invalidatePhoto;	// IMP=0x00000000000d494b
@property(retain, nonatomic) GKPlayer *player; // @dynamic player;
- (void)setupPhoto;	// IMP=0x00000000000d43e0
- (void)awakeFromNib;	// IMP=0x00000000000d439f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000d4342

@end

