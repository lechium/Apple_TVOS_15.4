//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PKContinuousButton;
@protocol PKPGSVFooterViewDelegate;

@interface PKPGSVFooterView : UIView
{
    PKContinuousButton *_editButton;	// 8 = 0x8
    id <PKPGSVFooterViewDelegate> _delegate;	// 16 = 0x10
    long long _expiredSectionCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002b3a91
@property(nonatomic) long long expiredSectionCount; // @synthesize expiredSectionCount=_expiredSectionCount;
@property(nonatomic) __weak id <PKPGSVFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_editTapped:(id)arg1;	// IMP=0x00000000002b391e
- (void)layoutSubviews;	// IMP=0x00000000002b37f3
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002b37e5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002b35d0

@end

