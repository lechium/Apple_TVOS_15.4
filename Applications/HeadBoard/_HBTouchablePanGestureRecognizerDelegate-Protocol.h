//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSSet, UIEvent, _HBTouchablePanGestureRecognizer;

@protocol _HBTouchablePanGestureRecognizerDelegate <UIGestureRecognizerDelegate>
- (void)gestureRecognizer:(_HBTouchablePanGestureRecognizer *)arg1 touchesCanceled:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)gestureRecognizer:(_HBTouchablePanGestureRecognizer *)arg1 touchesEnded:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)gestureRecognizer:(_HBTouchablePanGestureRecognizer *)arg1 touchesBegan:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
@end

