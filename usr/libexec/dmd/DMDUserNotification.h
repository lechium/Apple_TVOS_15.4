//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface DMDUserNotification : NSObject
{
    struct __CFUserNotification *_notificationRef;	// 8 = 0x8
    _Bool _displayWhenLocked;	// 16 = 0x10
    NSUUID *_identifier;	// 24 = 0x18
    NSString *_header;	// 32 = 0x20
    NSString *_message;	// 40 = 0x28
    NSString *_defaultButtonTitle;	// 48 = 0x30
    NSString *_alternateButtonTitle;	// 56 = 0x38
    NSString *_otherButtonTitle;	// 64 = 0x40
    double _timeout;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000006e9f1
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) _Bool displayWhenLocked; // @synthesize displayWhenLocked=_displayWhenLocked;
@property(copy, nonatomic) NSString *otherButtonTitle; // @synthesize otherButtonTitle=_otherButtonTitle;
@property(copy, nonatomic) NSString *alternateButtonTitle; // @synthesize alternateButtonTitle=_alternateButtonTitle;
@property(copy, nonatomic) NSString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *header; // @synthesize header=_header;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)setNotificationRef:(struct __CFUserNotification *)arg1;	// IMP=0x001000000006e908
- (struct __CFUserNotification *)notificationRef;	// IMP=0x001000000006e8fe
- (void)dealloc;	// IMP=0x001000000006e8bf
- (id)init;	// IMP=0x001000000006e85d

@end

