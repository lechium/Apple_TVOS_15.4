//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface PXNavigationListControllerView : UIView
{
    UIView *_contentView;	// 8 = 0x8
    double _contentViewHeight;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000512a45
@property(nonatomic) double contentViewHeight; // @synthesize contentViewHeight=_contentViewHeight;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)_updateContentViewFrame;	// IMP=0x00000000005128dd
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000005127b2
- (void)addSubview:(id)arg1;	// IMP=0x0000000000512736
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005126dc

@end

