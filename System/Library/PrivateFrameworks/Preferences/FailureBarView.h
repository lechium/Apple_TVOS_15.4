//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@class UILabel;

@interface FailureBarView : UIImageView
{
    UILabel *_titleLabel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006fe43
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000006fdde
- (void)layoutSubviews;	// IMP=0x000000000006fcaf
- (void)setFailureCount:(long long)arg1;	// IMP=0x000000000006fb67
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000006f896

@end

