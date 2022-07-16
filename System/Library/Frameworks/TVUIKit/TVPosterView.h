//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImage, UIImageView;

@interface TVPosterView
{
    UIImage *_image;	// 8 = 0x8
}

+ (Class)_concreteContentViewClass;	// IMP=0x00000000000383e4
- (void).cxx_destruct;	// IMP=0x00000000000384bd
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)_updateFocusSizeIncrease;	// IMP=0x000000000003842e
- (void)_createFooterView;	// IMP=0x00000000000383f5
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) UIImageView *imageView;
- (void)didMoveToSuperview;	// IMP=0x0000000000038065
- (void)layoutSubviews;	// IMP=0x0000000000038024
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000037eb7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000037d50
- (id)initWithImage:(id)arg1;	// IMP=0x0000000000037cd1

@end

