//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BKTetherController : NSObject
{
    int _tetherState;	// 8 = 0x8
    int _lastOrientationCode;	// 12 = 0xc
    _Bool _orientationNotificationsDisabled;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000034394
@property(nonatomic, getter=isOrientationNotificationDisabled) _Bool orientationNotificationDisabled; // @synthesize orientationNotificationDisabled=_orientationNotificationsDisabled;
- (void)updatePreferencesIfNeeded;	// IMP=0x00100000000342f0
- (_Bool)_reverseTetheringActive;	// IMP=0x00100000000342e8
- (_Bool)_serviceExists:(struct __CFString *)arg1;	// IMP=0x00100000000342e0
- (void)setDitheringEnabled:(int)arg1;	// IMP=0x00100000000342da
- (void)noteInterfaceOrientationChangedWithInterfaceOrientation:(int)arg1;	// IMP=0x00100000000342d4
- (void)_handleDemoModeChanged;	// IMP=0x00100000000342ce
- (_Bool)usesDisplayPortTethering;	// IMP=0x00100000000342a3
- (_Bool)isTethered;	// IMP=0x001000000003429b
- (void)_setTetherState:(int)arg1;	// IMP=0x00100000000341cf
- (void)_postDisplayPortNotificationCode:(int)arg1;	// IMP=0x00100000000340e6
- (void)dealloc;	// IMP=0x00100000000340a5
- (id)init;	// IMP=0x0010000000033fb6

@end

