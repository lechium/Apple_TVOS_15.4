//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <CoreChartSwift/UIGestureRecognizerDelegate-Protocol.h>

@class MISSING_TYPE;

@interface _TtCV14CoreChartSwift23InteractionHandlingView10UIViewType : UIView <UIGestureRecognizerDelegate>
{
    MISSING_TYPE *dispatcher;	// 8 = 0x8
    MISSING_TYPE *panDelegate;	// 16 = 0x10
    MISSING_TYPE *panStart;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001e3af0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e3a80
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001e38d0
- (void)handleLongPress:(id)arg1;	// IMP=0x00000000001e3410
- (void)handlePanGesture:(id)arg1;	// IMP=0x00000000001e31a0
- (void)handleSingleTap:(id)arg1;	// IMP=0x00000000001e2c30

@end

