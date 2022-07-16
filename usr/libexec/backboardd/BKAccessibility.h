//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BKAccessibility : NSObject
{
}

+ (void)_setCapsLockLightOn:(_Bool)arg1;	// IMP=0x004000000003d246
+ (id)_eventRoutingClientConnectionManager;	// IMP=0x001000000003d23c
+ (_Bool)_isDisplayBacklightOff;	// IMP=0x001000000003d1fb
+ (_Bool)_objectWithinProximity;	// IMP=0x001000000003d177
+ (id)_authenticationMessageForLocationInCAScreenCoordinates:(struct CGPoint)arg1 eventType:(unsigned int)arg2 excludeContextIDsFromHitTest:(id)arg3;	// IMP=0x001000000003d0a4
+ (struct CGPoint)_displayConvertToCAScreen:(struct CGPoint)arg1 withDisplayIntegerId:(unsigned int)arg2;	// IMP=0x001000000003cfe9
+ (struct CGPoint)_displayConvertFromCAScreen:(struct CGPoint)arg1 withDisplayIntegerId:(unsigned int)arg2;	// IMP=0x001000000003cf2e
+ (struct CGPoint)_displayConvertToCAScreen:(struct CGPoint)arg1;	// IMP=0x001000000003cf22
+ (struct CGPoint)_displayConvertFromCAScreen:(struct CGPoint)arg1;	// IMP=0x001000000003cf16
+ (CDUnknownFunctionPointerType)_accessibilityHIDEventTapCallback;	// IMP=0x001000000003cf0c
+ (void)_accessibilitySetHIDEventTapCallback:(CDUnknownFunctionPointerType)arg1;	// IMP=0x001000000003ceff
+ (CDUnknownFunctionPointerType)_accessibilityEventTapCallback;	// IMP=0x001000000003cef5
+ (void)_accessibilitySetEventTapCallback:(CDUnknownFunctionPointerType)arg1;	// IMP=0x001000000003cee8
+ (void)_accessibilityProcessExternHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x001000000003ce95

@end

