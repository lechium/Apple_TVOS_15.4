//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIButton, UIImage, UIImageView;

@interface AAUIProfilePhotoView : UIView
{
    UIImageView *_photoView;	// 8 = 0x8
    UIButton *_editButton;	// 16 = 0x10
    _Bool _isEditing;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002f038
@property(nonatomic, setter=setEditing:) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) UIImage *photo;
- (double)desiredHeightForWidth:(double)arg1;	// IMP=0x000000000002efd3
- (void)layoutSubviews;	// IMP=0x000000000002ee49
- (id)initWithPhoto:(id)arg1 target:(id)arg2 action:(SEL)arg3;	// IMP=0x000000000002eb7f

@end

