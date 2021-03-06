//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVOutputDevice, MRAirPlayTransportConnection, NSError, NSObject, NSString, _MRDeviceInfoMessageProtobuf;
@protocol OS_dispatch_queue;

@interface MRAVOutputDeviceTransport
{
    NSObject<OS_dispatch_queue> *_workerQueue;	// 16 = 0x10
    _MRDeviceInfoMessageProtobuf *_deviceInfo;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    MRAirPlayTransportConnection *_connection;	// 40 = 0x28
    _Bool _useSystemAuthenticationPrompt;	// 48 = 0x30
    NSString *_outputDeviceUID;	// 56 = 0x38
    NSString *_groupID;	// 64 = 0x40
    AVOutputDevice *_avOutputDevice;	// 72 = 0x48
}

+ (id)_createConnectionWith:(id)arg1 groupID:(id)arg2 connectionType:(long long)arg3 shouldUseSystemAuthenticationPrompt:(_Bool)arg4 userInfo:(id)arg5;	// IMP=0x0000000000017d90
- (void).cxx_destruct;	// IMP=0x000000000001894e
- (_Bool)requiresCustomPairing;	// IMP=0x0000000000018946
- (void)resetWithError:(id)arg1;	// IMP=0x000000000001886e
- (id)createConnectionWithUserInfo:(id)arg1;	// IMP=0x0000000000017c45
- (void)setError:(id)arg1;	// IMP=0x0000000000017be4
- (id)error;	// IMP=0x0000000000017b81
- (void)setShouldUseSystemAuthenticationPrompt:(_Bool)arg1;	// IMP=0x0000000000017b46
- (_Bool)shouldUseSystemAuthenticationPrompt;	// IMP=0x0000000000017b0a
- (long long)port;	// IMP=0x0000000000017b02
- (id)hostname;	// IMP=0x0000000000017afa
- (id)name;	// IMP=0x0000000000017add
- (id)uid;	// IMP=0x0000000000017ac8
- (id)deviceInfo;	// IMP=0x0000000000017ac0
- (id)debugDescription;	// IMP=0x000000000001799c
- (id)description;	// IMP=0x00000000000178a3
- (id)initWithOutputDevice:(id)arg1 groupID:(id)arg2 connectionType:(long long)arg3;	// IMP=0x00000000000176fa

@end

