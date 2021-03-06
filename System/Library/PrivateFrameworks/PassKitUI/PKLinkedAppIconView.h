//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKLinkedApplicationObserver-Protocol.h>

@class NSString, PKLinkedApplication, UIImage, WLEasyToHitCustomButton;

@interface PKLinkedAppIconView : UIView <PKLinkedApplicationObserver>
{
    WLEasyToHitCustomButton *_iconButton;	// 8 = 0x8
    UIImage *_iconImage;	// 16 = 0x10
    PKLinkedApplication *_linkedApplication;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000034592e
@property(readonly, nonatomic) PKLinkedApplication *linkedApplication; // @synthesize linkedApplication=_linkedApplication;
- (void)linkedApplicationDidChangeState:(id)arg1;	// IMP=0x0000000000345864
- (void)tapped:(id)arg1;	// IMP=0x00000000003457e6
- (void)_updateWithIconImage:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000003453ec
- (void)layoutSubviews;	// IMP=0x0000000000345107
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000003450c9
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000345044
- (void)didMoveToWindow;	// IMP=0x0000000000344fce
- (void)dealloc;	// IMP=0x0000000000344f82
- (id)initWithLinkedApplication:(id)arg1;	// IMP=0x0000000000344ddd
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000344dc9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000344dbb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

