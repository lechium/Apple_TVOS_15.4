//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface TVMusicNoMusicView : UIView
{
    NSString *_message;	// 8 = 0x8
    UIView *_containerView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_messageLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004bfc4
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void)_configureUIControls;	// IMP=0x000000000004bc7d
- (void)_updateColorsForUserInterfaceStyle:(long long)arg1;	// IMP=0x000000000004bbaa
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000004baf2
- (void)layoutSubviews;	// IMP=0x000000000004b663
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004b581

@end

