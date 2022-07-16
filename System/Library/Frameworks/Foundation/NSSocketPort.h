//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface NSSocketPort
{
    void *_receiver;	// 8 = 0x8
    id _connectors;	// 16 = 0x10
    void *_loops;	// 24 = 0x18
    void *_data;	// 32 = 0x20
    id _signature;	// 40 = 0x28
    id _delegate;	// 48 = 0x30
    id _lock;	// 56 = 0x38
    unsigned long long _maxSize;	// 64 = 0x40
    unsigned long long _useCount;	// 72 = 0x48
    unsigned long long _reserved;	// 80 = 0x50
}

+ (_Bool)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned int)arg6 reserved:(unsigned long long)arg7;	// IMP=0x000000000012cb99
+ (void)_fixNSSocketPortLeak;	// IMP=0x000000000012adf9
+ (void)initialize;	// IMP=0x000000000012ad75
- (void)_handleMessage:(struct __CFData *)arg1 from:(struct __CFData *)arg2 socket:(struct __CFSocket *)arg3;	// IMP=0x000000000012d685
- (void)handlePortMessage:(id)arg1;	// IMP=0x000000000012d5ad
- (void)addConnection:(id)arg1 toRunLoop:(id)arg2 forMode:(id)arg3;	// IMP=0x000000000012d541
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x000000000012d2c3
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x000000000012d00d
- (_Bool)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5;	// IMP=0x000000000012cfa1
- (_Bool)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4;	// IMP=0x000000000012cf36
- (_Bool)sendBeforeTime:(double)arg1 streamData:(void *)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5;	// IMP=0x000000000012cec1
- (struct __CFSocket *)_sendingSocketForPort:(id)arg1 beforeTime:(double)arg2;	// IMP=0x000000000012c2c2
- (id)description;	// IMP=0x000000000012c1ed
- (_Bool)_isDeallocating;	// IMP=0x000000000012c1e5
- (_Bool)_tryRetain;	// IMP=0x000000000012c1d7
- (unsigned long long)retainCount;	// IMP=0x000000000012c1c3
- (oneway void)release;	// IMP=0x000000000012c101
- (id)retain;	// IMP=0x000000000012c09e
- (void)dealloc;	// IMP=0x000000000012bf6a
- (id)initWithProtocolFamily:(int)arg1 socketType:(int)arg2 protocol:(int)arg3 socket:(int)arg4;	// IMP=0x000000000012bebb
- (id)initWithProtocolFamily:(int)arg1 socketType:(int)arg2 protocol:(int)arg3 address:(id)arg4;	// IMP=0x000000000012bc44
- (id)initRemoteWithProtocolFamily:(int)arg1 socketType:(int)arg2 protocol:(int)arg3 address:(id)arg4;	// IMP=0x000000000012bc13
- (id)_initRemoteWithSignature:(id)arg1;	// IMP=0x000000000012b9ef
- (id)initRemoteWithTCPPort:(unsigned short)arg1 host:(id)arg2;	// IMP=0x000000000012b6a2
- (id)initWithTCPPort:(unsigned short)arg1;	// IMP=0x000000000012b608
- (id)init;	// IMP=0x000000000012b5f4
- (id)_initWithRetainedCFSocket:(struct __CFSocket *)arg1 protocolFamily:(int)arg2 socketType:(int)arg3 protocol:(int)arg4;	// IMP=0x000000000012b2cd
@property(readonly, copy) NSData *address;
@property(readonly) int socket;
@property(readonly) int protocol;
@property(readonly) int socketType;
@property(readonly) int protocolFamily;
- (id)signature;	// IMP=0x000000000012b149
- (id)delegate;	// IMP=0x000000000012b138
- (void)setDelegate:(id)arg1;	// IMP=0x000000000012b127
- (void)handleConnDeath:(id)arg1;	// IMP=0x000000000012b0de
- (void)invalidate;	// IMP=0x000000000012ae4d
- (void)_incrementUseCount;	// IMP=0x000000000012adff
- (_Bool)isValid;	// IMP=0x000000000012add5

@end

