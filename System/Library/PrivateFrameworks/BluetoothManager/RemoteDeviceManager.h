//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface RemoteDeviceManager : NSObject
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
}

- (void)sendMessage:(const char *)arg1 args:(id)arg2;	// IMP=0x000000000000a1c0
- (void)disconnectDevice:(id)arg1;	// IMP=0x000000000000a147
- (void)dealloc;	// IMP=0x000000000000a10d
- (id)init;	// IMP=0x000000000000a09f

@end

