//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSAlertManager, NSString;

@interface MSAMNotificationInfo : NSObject
{
    MSAlertManager *_owner;	// 8 = 0x8
    NSString *_personID;	// 16 = 0x10
    struct __CFUserNotification *_userNotification;	// 24 = 0x18
    struct __CFRunLoopSource *_runLoopSource;	// 32 = 0x20
    CDUnknownBlockType _completionBlock;	// 40 = 0x28
}

+ (id)info;	// IMP=0x00000000000019d4
- (void).cxx_destruct;	// IMP=0x00000000000019a3
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(nonatomic) __weak MSAlertManager *owner; // @synthesize owner=_owner;
- (void)dealloc;	// IMP=0x00000000000018a2
@property(nonatomic) struct __CFUserNotification *userNotification;
@property(nonatomic) struct __CFRunLoopSource *runLoopSource;

@end

