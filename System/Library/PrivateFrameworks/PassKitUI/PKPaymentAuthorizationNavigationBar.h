//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationBar.h>

@class UILabel;

@interface PKPaymentAuthorizationNavigationBar : UINavigationBar
{
    UILabel *_environmentLabel;	// 8 = 0x8
}

+ (id)applePayBarButtonItem;	// IMP=0x00000000003bfbe4
+ (id)cardOnFileBarButtonItemForRequestor:(unsigned long long)arg1;	// IMP=0x00000000003bfafe
+ (id)_leftBarButtonItemWithImage:(id)arg1;	// IMP=0x00000000003bf940
- (void).cxx_destruct;	// IMP=0x00000000003c024b
- (void)layoutSubviews;	// IMP=0x00000000003bffcd
- (void)didUpdateInterfaceStyle;	// IMP=0x00000000003bfe47
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x00000000003bfe06
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003bfc6b

@end

