//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUtils/CBScalablePipeManagerDelegate-Protocol.h>
#import <CoreUtils/CUReadWriteRequestable-Protocol.h>

@class CBScalablePipe, CBScalablePipeManager, CUReadRequest, CUWriteRequest, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUBluetoothScalablePipe : NSObject <CBScalablePipeManagerDelegate, CUReadWriteRequestable>
{
    _Bool _invalidateCalled;	// 8 = 0x8
    _Bool _invalidateDone;	// 9 = 0x9
    struct LogCategory *_ucat;	// 16 = 0x10
    struct channel *_btChannel;	// 24 = 0x18
    _Bool _btEndpointRegistering;	// 32 = 0x20
    _Bool _btEndpointRegistered;	// 33 = 0x21
    int _btPeerHostState;	// 36 = 0x24
    _Bool _btPeerKVORegistered;	// 40 = 0x28
    CBScalablePipe *_btPipe;	// 48 = 0x30
    CBScalablePipeManager *_btPipeManager;	// 56 = 0x38
    struct channel_ring_desc *_btReadRing;	// 64 = 0x40
    char *_btReadLeftoverBuf;	// 72 = 0x48
    unsigned long long _btReadLeftoverMaxLen;	// 80 = 0x50
    char *_btReadLeftoverPtr;	// 88 = 0x58
    char *_btReadLeftoverEnd;	// 96 = 0x60
    struct channel_ring_desc *_btWriteRing;	// 104 = 0x68
    int _channelFD;	// 112 = 0x70
    CUReadRequest *_readRequestCurrent;	// 120 = 0x78
    NSMutableArray *_readRequests;	// 128 = 0x80
    NSObject<OS_dispatch_source> *_readSource;	// 136 = 0x88
    _Bool _readSuspended;	// 144 = 0x90
    CUWriteRequest *_writeRequestCurrent;	// 152 = 0x98
    NSMutableArray *_writeRequests;	// 160 = 0xa0
    NSObject<OS_dispatch_source> *_writeSource;	// 168 = 0xa8
    _Bool _writeSuspended;	// 176 = 0xb0
    int _peerHostState;	// 180 = 0xb4
    int _priority;	// 184 = 0xb8
    int _state;	// 188 = 0xbc
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 192 = 0xc0
    NSString *_identifier;	// 200 = 0xc8
    CDUnknownBlockType _invalidationHandler;	// 208 = 0xd0
    NSString *_label;	// 216 = 0xd8
    NSUUID *_peerIdentifier;	// 224 = 0xe0
    CDUnknownBlockType _peerHostStateChangedHandler;	// 232 = 0xe8
    CDUnknownBlockType _stateChangedHandler;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x0000000000045843
@property(copy, nonatomic) CDUnknownBlockType stateChangedHandler; // @synthesize stateChangedHandler=_stateChangedHandler;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(copy, nonatomic) CDUnknownBlockType peerHostStateChangedHandler; // @synthesize peerHostStateChangedHandler=_peerHostStateChangedHandler;
@property(readonly, nonatomic) int peerHostState; // @synthesize peerHostState=_peerHostState;
@property(copy, nonatomic) NSUUID *peerIdentifier; // @synthesize peerIdentifier=_peerIdentifier;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;	// IMP=0x00000000000454b6
- (void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;	// IMP=0x0000000000045082
- (void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;	// IMP=0x0000000000044f54
- (void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;	// IMP=0x0000000000044dc8
- (void)scalablePipeManagerDidUpdateState:(id)arg1;	// IMP=0x0000000000044c2d
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000044bbf
- (void)_completeWriteRequest:(id)arg1 error:(id)arg2;	// IMP=0x0000000000044ac7
- (void)_abortWritesWithError:(id)arg1;	// IMP=0x000000000004483f
- (unsigned long long)_writeBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000004466b
- (int)_writeIOArray:(struct iovec **)arg1 ioCount:(int *)arg2;	// IMP=0x00000000000445dc
- (_Bool)_prepareWriteRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000044238
- (void)_processWrites;	// IMP=0x0000000000043f81
- (void)writeWithRequest:(id)arg1;	// IMP=0x0000000000043ef3
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;	// IMP=0x0000000000043de6
- (void)_abortReadsWithError:(id)arg1;	// IMP=0x0000000000043b67
- (int)_readBytes:(char *)arg1 minLen:(unsigned long long)arg2 maxLen:(unsigned long long)arg3 offset:(unsigned long long *)arg4;	// IMP=0x00000000000438ea
- (void)_prepareReadRequest:(id)arg1;	// IMP=0x00000000000435fe
- (void)_processReads;	// IMP=0x0000000000043320
- (void)readWithRequest:(id)arg1;	// IMP=0x0000000000043292
- (void)_handleBTPeerHostStateChanged;	// IMP=0x0000000000043176
- (void)_tearDownPipe;	// IMP=0x0000000000042f48
- (void)_setupPipe;	// IMP=0x0000000000042911
- (void)_ensureStopped:(id)arg1;	// IMP=0x000000000004284e
- (void)_ensureStarted;	// IMP=0x0000000000042370
- (void)_invalidate;	// IMP=0x00000000000421f7
- (void)invalidate;	// IMP=0x00000000000421a9
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004211b
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000041fba
- (id)init;	// IMP=0x0000000000041f1b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

