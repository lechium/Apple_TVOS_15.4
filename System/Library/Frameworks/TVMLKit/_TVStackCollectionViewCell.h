//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIView, UIViewController;

@interface _TVStackCollectionViewCell : UICollectionViewCell
{
    UIView *_cellContentView;	// 8 = 0x8
    long long _pressesEventDepth;	// 16 = 0x10
    UIView *_stowedContentView;	// 24 = 0x18
    UIViewController *_viewController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000043f07
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)_pressesDidEnd;	// IMP=0x0000000000043d9e
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000043d5d
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000043d1c
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000043ca2
- (id)preferredFocusEnvironments;	// IMP=0x0000000000043bdb
- (_Bool)canBecomeFocused;	// IMP=0x0000000000043bd3
- (void)layoutSubviews;	// IMP=0x0000000000043b08
- (void)prepareForReuse;	// IMP=0x0000000000043812

@end
