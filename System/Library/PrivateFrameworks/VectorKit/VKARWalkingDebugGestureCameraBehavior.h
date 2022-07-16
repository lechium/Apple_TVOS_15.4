//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VKARWalkingCameraController;

__attribute__((visibility("hidden")))
@interface VKARWalkingDebugGestureCameraBehavior
{
    VKARWalkingCameraController *_controller;	// 176 = 0xb0
}

- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;	// IMP=0x00000000007be773
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;	// IMP=0x00000000007be76d
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;	// IMP=0x00000000007be661
- (id)initWithCameraController:(id)arg1;	// IMP=0x00000000007be616

@end

