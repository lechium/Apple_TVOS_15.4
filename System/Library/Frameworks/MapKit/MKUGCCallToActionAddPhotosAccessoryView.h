//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIButton;

__attribute__((visibility("hidden")))
@interface MKUGCCallToActionAddPhotosAccessoryView : UIView
{
    UIButton *_addPhotosButton;	// 8 = 0x8
    NSString *_glyphName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005c23a
@property(copy, nonatomic) NSString *glyphName; // @synthesize glyphName=_glyphName;
- (void)_contentSizeChanged;	// IMP=0x000000000005c135
- (void)_setupButtons;	// IMP=0x000000000005bd52
- (void)setTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000005bd2f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000005bc7d

@end
