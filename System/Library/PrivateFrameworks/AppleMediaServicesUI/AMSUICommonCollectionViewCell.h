//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class AMSUICommonView;

@interface AMSUICommonCollectionViewCell : UICollectionViewCell
{
    AMSUICommonView *_underlyingContentView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000a78a
@property(readonly, nonatomic) AMSUICommonView *underlyingContentView; // @synthesize underlyingContentView=_underlyingContentView;
- (void)layoutSubviews;	// IMP=0x000000000000a6a2
- (void)_setup;	// IMP=0x000000000000a614
- (id)tintColor;	// IMP=0x000000000000a5d6
@property(readonly, nonatomic) AMSUICommonView *contentView;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000a567
- (id)init;	// IMP=0x000000000000a51b

@end

