//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface AVWheelScrubberView : UIView
{
    UIView *_ringView;	// 8 = 0x8
    UIView *_fingerPositionContainerView;	// 16 = 0x10
    UIView *_fingerPositionView;	// 24 = 0x18
    UIView *_roundPointerView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000d9121
@property(nonatomic) struct CGAffineTransform fingerPositionRotationTransform;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000d84f1

@end

