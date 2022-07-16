//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CNContact, PKAvatarHeaderView;

@interface PKAccountUserDetailHeaderView : UIView
{
    PKAvatarHeaderView *_avatarHeaderView;	// 8 = 0x8
    CNContact *_contactForDisplay;	// 16 = 0x10
    CNContact *_contactForActions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000034e939
@property(retain, nonatomic) CNContact *contactForActions; // @synthesize contactForActions=_contactForActions;
@property(retain, nonatomic) CNContact *contactForDisplay; // @synthesize contactForDisplay=_contactForDisplay;
- (void)layoutSubviews;	// IMP=0x000000000034e6fb
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000034e6bb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000034e61c

@end
