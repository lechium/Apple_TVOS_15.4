//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface TSKBadgeView : UIView
{
    long long _badgeNumber;	// 8 = 0x8
    NSString *_badgeString;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002d230
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *badgeString; // @synthesize badgeString=_badgeString;
@property(nonatomic) long long badgeNumber; // @synthesize badgeNumber=_badgeNumber;
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000002cf30
- (void)layoutSubviews;	// IMP=0x000000000002ceb0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002c940

@end

