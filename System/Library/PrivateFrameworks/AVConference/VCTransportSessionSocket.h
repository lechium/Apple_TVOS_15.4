//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCNetworkAddress;

__attribute__((visibility("hidden")))
@interface VCTransportSessionSocket
{
    int _rtpVFD;	// 168 = 0xa8
    int _rtcpVFD;	// 172 = 0xac
    _Bool _isRTPUsable;	// 176 = 0xb0
    _Bool _isRTCPUsable;	// 177 = 0xb1
    _Bool _isSharedSocket;	// 178 = 0xb2
    struct sockaddr_storage _rtpIPPort;	// 184 = 0xb8
    unsigned int _rtpIPPortLength;	// 312 = 0x138
    struct sockaddr_storage _rtcpIPPort;	// 320 = 0x140
    unsigned int _rtcpIPPortLength;	// 448 = 0x1c0
    VCNetworkAddress *_remoteAddress;	// 456 = 0x1c8
    int _networkInterfaceType;	// 464 = 0x1d0
    _Bool _isIPv6;	// 468 = 0x1d4
    unsigned int _networkMTU;	// 472 = 0x1d8
}

- (_Bool)isIPv6;	// IMP=0x0000000000219997
- (unsigned int)networkMTU;	// IMP=0x0000000000219987
- (int)networkInterfaceType;	// IMP=0x0000000000219977
- (int)initializeNetworkInfoWithSocket:(int)arg1;	// IMP=0x0000000000219864
- (void)initializeInterfaceTypeWithSocket:(int)arg1;	// IMP=0x00000000002196e4
- (void)start;	// IMP=0x00000000002196cb
- (int)createVFD:(int *)arg1 forStreamType:(unsigned int)arg2;	// IMP=0x0000000000219499
- (int)createAndConfigureVFDForSocket:(int)arg1 packetType:(int)arg2 remoteIP:(struct sockaddr_storage *)arg3 remoteIPLength:(unsigned int)arg4 vfd:(int *)arg5;	// IMP=0x0000000000219321
- (int)configureParamatersForStreamType:(unsigned int)arg1 socket:(int *)arg2 packetType:(int *)arg3 remoteIP:(struct sockaddr_storage *)arg4 remoteIPLength:(unsigned int *)arg5;	// IMP=0x000000000021921b
- (int)setBasebandNotificationStreamParamatersForSocket:(int *)arg1 packetType:(int *)arg2 remoteIP:(struct sockaddr_storage *)arg3 remoteIPLength:(unsigned int *)arg4;	// IMP=0x000000000021918c
- (int)setVideoRTCPStreamParamatersForSocket:(int *)arg1 packetType:(int *)arg2 remoteIP:(struct sockaddr_storage *)arg3 remoteIPLength:(unsigned int *)arg4;	// IMP=0x00000000002190c7
- (int)setVideoRTPStreamParamatersForSocket:(int *)arg1 packetType:(int *)arg2 remoteIP:(struct sockaddr_storage *)arg3 remoteIPLength:(unsigned int *)arg4;	// IMP=0x0000000000219038
- (int)setAudioRTCPStreamParamatersForSocket:(int *)arg1 packetType:(int *)arg2 remoteIP:(struct sockaddr_storage *)arg3 remoteIPLength:(unsigned int *)arg4;	// IMP=0x0000000000218f73
- (int)setAudioRTPStreamParamatersForSocket:(int *)arg1 packetType:(int *)arg2 remoteIP:(struct sockaddr_storage *)arg3 remoteIPLength:(unsigned int *)arg4;	// IMP=0x0000000000218ee4
- (int)setRemoteAddress:(id)arg1 remoteRTCPPort:(int)arg2;	// IMP=0x0000000000218a55
- (int)connectSocket:(int)arg1 remoteAddress:(id)arg2 storage:(struct sockaddr_storage *)arg3;	// IMP=0x00000000002188ce
- (int)updateTransportStream:(struct OpaqueVCTransportStream *)arg1;	// IMP=0x0000000000218655
- (id)streams;	// IMP=0x0000000000218600
- (int)createVFD:(int *)arg1 realSocket:(int)arg2 sockAddr:(struct sockaddr_storage *)arg3 length:(unsigned int *)arg4 isUsable:(_Bool *)arg5;	// IMP=0x0000000000218455
- (void)dealloc;	// IMP=0x00000000002183d2
- (id)initWithRTPSocket:(int)arg1 RTCPSocket:(int)arg2;	// IMP=0x00000000002180f0
- (id)initWithSharedSocket:(int)arg1;	// IMP=0x00000000002180d9
- (id)initWithSocketDictionary:(id)arg1;	// IMP=0x0000000000217e10

@end

