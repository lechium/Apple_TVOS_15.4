//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSAttributedString, UIImageView, UILabel;

@interface TVSUITextEntryHeaderView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
    NSAttributedString *_title;	// 16 = 0x10
    NSAttributedString *_message;	// 24 = 0x18
    UILabel *_titleView;	// 32 = 0x20
    UILabel *_messageView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000030bbb
@property(retain, nonatomic) UILabel *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) NSAttributedString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000003088a
- (struct CGRect)_messageViewFrameWithBounds:(struct CGRect)arg1;	// IMP=0x0000000000030729
- (struct CGRect)_imageViewFrameWithBounds:(struct CGRect)arg1;	// IMP=0x000000000003068d
- (struct CGRect)_titleViewFrameWithBounds:(struct CGRect)arg1;	// IMP=0x000000000003056c
- (void)layoutSubviews;	// IMP=0x0000000000030429

@end

