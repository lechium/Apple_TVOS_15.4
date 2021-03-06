//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface CSVoiceIdXPCClient : NSObject
{
    NSObject<OS_xpc_object> *_xpcConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000026a7e
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (id)_decodeError:(id)arg1;	// IMP=0x0000000000026999
- (void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002683e
- (void)notifyImplicitUtterance:(id)arg1 audioDeviceType:(id)arg2 audioRecordType:(id)arg3 voiceTriggerEventInfo:(id)arg4 otherCtxt:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000000264e9
- (void)_handleListenerError:(id)arg1;	// IMP=0x0000000000026421
- (void)_handleListenerEvent:(id)arg1;	// IMP=0x000000000002637b
- (void)dealloc;	// IMP=0x000000000002633d
- (void)disconnect;	// IMP=0x0000000000026307
- (void)connect;	// IMP=0x00000000000261fe
- (id)init;	// IMP=0x000000000002619f

@end

