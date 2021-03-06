//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ANAnnouncementStatePublisher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    char *_name;	// 16 = 0x10
    int _registrationToken;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000053785
- (void)_unregister;	// IMP=0x00000000000536df
- (void)_register;	// IMP=0x0000000000053592
- (_Bool)_setState:(unsigned long long)arg1 withToken:(int)arg2;	// IMP=0x000000000005346c
- (_Bool)_setName:(id)arg1;	// IMP=0x0000000000053397
- (void)_publishState:(unsigned long long)arg1 name:(id)arg2;	// IMP=0x0000000000053239
- (void)invalidate;	// IMP=0x00000000000531d8
- (void)publishState:(unsigned long long)arg1 name:(id)arg2;	// IMP=0x00000000000530d7
- (id)init;	// IMP=0x000000000005307f
- (void)dealloc;	// IMP=0x000000000005302b

@end

