//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CSVoiceTriggerXPCClientDelegate, OS_xpc_object;

@interface CSVoiceTriggerXPCClient : NSObject
{
    id <CSVoiceTriggerXPCClientDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_xpc_object> *_xpcConnection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000ec581
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) __weak id <CSVoiceTriggerXPCClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ec41f
- (id)fetchVoiceTriggerStats;	// IMP=0x00000000000ec252
- (void)setRaiseToSpeakBypassing:(_Bool)arg1 timeout:(double)arg2;	// IMP=0x00000000000ec10b
- (void)notifyVoiceTriggeredSiriSessionCancelled;	// IMP=0x00000000000ec007
- (void)setPhraseSpotterBypassing:(_Bool)arg1 timeout:(double)arg2;	// IMP=0x00000000000ebec0
- (void)enableVoiceTrigger:(_Bool)arg1 withAssertion:(id)arg2 timestamp:(double)arg3;	// IMP=0x00000000000ebd2a
- (void)_handleListenerDisconnectedError:(id)arg1;	// IMP=0x00000000000ebca6
- (void)_handleListenerError:(id)arg1;	// IMP=0x00000000000ebb74
- (void)_handleListenerEvent:(id)arg1;	// IMP=0x00000000000ebadd
- (void)dealloc;	// IMP=0x00000000000eba17
- (void)connect;	// IMP=0x00000000000eb90e
- (id)init;	// IMP=0x00000000000eb8af

@end

