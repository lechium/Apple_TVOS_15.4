//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface _TVLLikeDislikeView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
    unsigned long long _likeCount;	// 24 = 0x18
    unsigned long long _dislikeCount;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000077b1
@property(nonatomic) unsigned long long dislikeCount; // @synthesize dislikeCount=_dislikeCount;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
- (void)_updateLikeDislikeDisplay;	// IMP=0x0000000000007606
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000074a6
- (void)layoutSubviews;	// IMP=0x00000000000072bc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000007134

@end

