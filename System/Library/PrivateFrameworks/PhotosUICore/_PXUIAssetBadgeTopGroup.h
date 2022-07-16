//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXUIButton, UIImageView, UILabel, UIView;

@interface _PXUIAssetBadgeTopGroup : NSObject
{
    UIView *_backgroundView;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    UIImageView *_afterLabelImageView;	// 24 = 0x18
    UILabel *_label;	// 32 = 0x20
    PXUIButton *_button;	// 40 = 0x28
    struct PXAssetBadgeInfo _badgeInfo;	// 48 = 0x30
    struct CGRect _frame;	// 72 = 0x48
    struct CGRect _imageFrame;	// 104 = 0x68
    struct CGRect _afterLabelImageFrame;	// 136 = 0x88
    struct CGRect _labelFrame;	// 168 = 0xa8
    struct CGRect _buttonFrame;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000008c5264
@property(nonatomic) struct CGRect buttonFrame; // @synthesize buttonFrame=_buttonFrame;
@property(nonatomic) struct CGRect labelFrame; // @synthesize labelFrame=_labelFrame;
@property(nonatomic) struct CGRect afterLabelImageFrame; // @synthesize afterLabelImageFrame=_afterLabelImageFrame;
@property(nonatomic) struct CGRect imageFrame; // @synthesize imageFrame=_imageFrame;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) struct PXAssetBadgeInfo badgeInfo; // @synthesize badgeInfo=_badgeInfo;
@property(retain, nonatomic) PXUIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *afterLabelImageView; // @synthesize afterLabelImageView=_afterLabelImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;

@end

