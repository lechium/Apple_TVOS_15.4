//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface _SiriUINavigationContentView : UIView
{
    _Bool _contentLayoutEnabled;	// 8 = 0x8
    UIView *_contentView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000080e5
@property(nonatomic, getter=isContentLayoutEnabled) _Bool contentLayoutEnabled; // @synthesize contentLayoutEnabled=_contentLayoutEnabled;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)layoutSubviews;	// IMP=0x0000000000007e83
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000007e33

@end

