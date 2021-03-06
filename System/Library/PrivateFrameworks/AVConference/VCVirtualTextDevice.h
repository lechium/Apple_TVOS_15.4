//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/VCMediaStreamProtocol-Protocol.h>
#import <AVConference/VCTextReceiverDelegate-Protocol.h>
#import <AVConference/VCTextSender-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, VCMediaStreamDelegate;

__attribute__((visibility("hidden")))
@interface VCVirtualTextDevice : NSObject <VCMediaStreamProtocol, VCTextSender, VCTextReceiverDelegate>
{
    int _clientPid;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    id _sendDelegate;	// 32 = 0x20
    id _mediaStreamDelegate;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_mediaStreamDelegateQueue;	// 48 = 0x30
}

- (void)didReceiveText:(id)arg1;	// IMP=0x00000000002815c1
- (void)sendText:(id)arg1;	// IMP=0x00000000002813cb
- (void)sendCharacter:(unsigned short)arg1;	// IMP=0x00000000002811d4
- (id)setPause:(_Bool)arg1;	// IMP=0x00000000002811b2
- (id)resume;	// IMP=0x0000000000280f1a
- (id)pause;	// IMP=0x0000000000280c82
- (id)stop;	// IMP=0x0000000000280a7f
- (id)start;	// IMP=0x00000000002807be
- (id)sendDelegate;	// IMP=0x00000000002807b0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mediaStreamDelegateQueue;
@property(nonatomic) NSObject<VCMediaStreamDelegate> *mediaStreamDelegate;
- (void)dealloc;	// IMP=0x00000000002806ce
- (id)initWithSendDelegate:(id)arg1 clientPid:(int)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;	// IMP=0x000000000028049e
- (_Bool)setStreamConfig:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000280496

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

