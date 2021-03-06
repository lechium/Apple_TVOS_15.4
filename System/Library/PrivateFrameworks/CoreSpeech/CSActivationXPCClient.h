//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface CSActivationXPCClient : NSObject
{
    NSObject<OS_xpc_object> *_xpcConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000027f0c
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (id)_decodeError:(id)arg1;	// IMP=0x0000000000027e27
- (void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000027c54
- (void)notifyActivationEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027a93
- (void)_handleListenerError:(id)arg1;	// IMP=0x000000000002797e
- (void)_handleListenerEvent:(id)arg1;	// IMP=0x00000000000278e7
- (void)dealloc;	// IMP=0x0000000000027821
- (void)connect;	// IMP=0x0000000000027718
- (id)init;	// IMP=0x00000000000276b9

@end

