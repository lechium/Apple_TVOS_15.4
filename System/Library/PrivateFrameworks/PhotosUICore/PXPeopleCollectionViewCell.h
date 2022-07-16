//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIButton, UIImage, UIImageView, UILabel, UIView;
@protocol PXPeopleCollectionViewCellDelegate;

@interface PXPeopleCollectionViewCell : UICollectionViewCell
{
    struct CGRect _unitRect;	// 8 = 0x8
    _Bool _favorite;	// 40 = 0x28
    _Bool _ppt_fullImageLoaded;	// 41 = 0x29
    UIImageView *_avatarView;	// 48 = 0x30
    NSString *_name;	// 56 = 0x38
    double _textAlpha;	// 64 = 0x40
    unsigned long long _selectionStyle;	// 72 = 0x48
    id <PXPeopleCollectionViewCellDelegate> _peopleCellDelegate;	// 80 = 0x50
    UILabel *_nameLabel;	// 88 = 0x58
    UIImageView *_checkmarkView;	// 96 = 0x60
    UIView *_checkmarkBackgroundView;	// 104 = 0x68
    UIView *_highlightOverlayView;	// 112 = 0x70
    UIButton *_favoriteButton;	// 120 = 0x78
    UIView *_favoriteBackgroundView;	// 128 = 0x80
    UIButton *_unfavoriteButton;	// 136 = 0x88
    UIView *_unfavoriteBackgroundView;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000011bf84
@property(retain, nonatomic) UIView *unfavoriteBackgroundView; // @synthesize unfavoriteBackgroundView=_unfavoriteBackgroundView;
@property(retain, nonatomic) UIButton *unfavoriteButton; // @synthesize unfavoriteButton=_unfavoriteButton;
@property(retain, nonatomic) UIView *favoriteBackgroundView; // @synthesize favoriteBackgroundView=_favoriteBackgroundView;
@property(retain, nonatomic) UIButton *favoriteButton; // @synthesize favoriteButton=_favoriteButton;
@property(retain, nonatomic) UIView *highlightOverlayView; // @synthesize highlightOverlayView=_highlightOverlayView;
@property(retain, nonatomic) UIView *checkmarkBackgroundView; // @synthesize checkmarkBackgroundView=_checkmarkBackgroundView;
@property(retain, nonatomic) UIImageView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) _Bool ppt_fullImageLoaded; // @synthesize ppt_fullImageLoaded=_ppt_fullImageLoaded;
@property(nonatomic) __weak id <PXPeopleCollectionViewCellDelegate> peopleCellDelegate; // @synthesize peopleCellDelegate=_peopleCellDelegate;
@property(nonatomic) unsigned long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(nonatomic, getter=isFavorite) _Bool favorite; // @synthesize favorite=_favorite;
@property(nonatomic) double textAlpha; // @synthesize textAlpha=_textAlpha;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void)_updateFocusRingForced:(_Bool)arg1;	// IMP=0x000000000011bdb4
- (void)_updateTitleAndFavoriteBadgeForLayoutChange;	// IMP=0x000000000011b5a9
- (void)_updateSelection;	// IMP=0x000000000011b24b
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000011b078
@property(retain, nonatomic) UIImage *image;
- (void)setImage:(id)arg1 normalizedFaceRect:(struct CGRect)arg2;	// IMP=0x000000000011ae96
- (id)focusEffect;	// IMP=0x000000000011ad7a
- (void)prepareForReuse;	// IMP=0x000000000011acca
- (void)layoutSubviews;	// IMP=0x000000000011aad4
- (void)toggleFavorite:(id)arg1;	// IMP=0x000000000011aa65
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000011a39a

@end
