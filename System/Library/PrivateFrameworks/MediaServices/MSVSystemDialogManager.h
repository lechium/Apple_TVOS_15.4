//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MSVSystemDialogManager : NSObject
{
    struct __CFDictionary *_registeredSystemDialogs;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x000000000002df9f
- (void).cxx_destruct;	// IMP=0x000000000002def9
- (void)unregisterSystemDialogWithUserNotification:(struct __CFUserNotification *)arg1;	// IMP=0x000000000002deaa
- (id)systemDialogForUserNotification:(struct __CFUserNotification *)arg1;	// IMP=0x000000000002dded
- (void)registerSystemDialog:(id)arg1 forUserNotification:(struct __CFUserNotification *)arg2;	// IMP=0x000000000002dd54
- (void)dealloc;	// IMP=0x000000000002dd1a
- (id)init;	// IMP=0x000000000002dc9b

@end
