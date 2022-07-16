//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView;
@protocol TUICandidateViewStyle;

@interface TUICandidateBaseCell : UICollectionViewCell
{
    id <TUICandidateViewStyle> _style;	// 8 = 0x8
    UIImageView *_backgroundImageView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000017109
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) id <TUICandidateViewStyle> style; // @synthesize style=_style;
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000001707e
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000001703d
- (void)updateBackground:(id)arg1 color:(id)arg2;	// IMP=0x0000000000016eaa
- (id)cellBackgroundImage;	// IMP=0x0000000000016e11
- (id)cellBackgroundColor;	// IMP=0x0000000000016d78
- (void)updateColors;	// IMP=0x0000000000016d07

@end

