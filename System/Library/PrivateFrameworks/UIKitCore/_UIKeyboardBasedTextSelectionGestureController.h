//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIKeyboardBasedTextSelectionGestureController
{
    _Bool _delayForceMagnify;	// 176 = 0xb0
    _Bool _didLongForcePress;	// 177 = 0xb1
}

+ (id)sharedInstance;	// IMP=0x0000000000a086b4
@property(nonatomic) _Bool didLongForcePress; // @synthesize didLongForcePress=_didLongForcePress;
@property(nonatomic) _Bool delayForceMagnify; // @synthesize delayForceMagnify=_delayForceMagnify;
- (_Bool)allowOneFingerDeepPress;	// IMP=0x0000000000a08768
- (_Bool)oneFingerForcePressShouldCancelTouchesInView;	// IMP=0x0000000000a08760
- (_Bool)oneFingerForcePressShouldFailWithoutForce;	// IMP=0x0000000000a08758
- (double)oneFingerForcePressMinimumDuration;	// IMP=0x0000000000a0874a
- (void)_cleanupDeadGesturesIfNecessary;	// IMP=0x0000000000a0870a
- (Class)textInteractionClass;	// IMP=0x0000000000a086f9

@end

