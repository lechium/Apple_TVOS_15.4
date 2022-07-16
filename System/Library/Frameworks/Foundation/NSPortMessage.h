//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSPort;

@interface NSPortMessage : NSObject
{
    NSPort *localPort;	// 8 = 0x8
    NSPort *remotePort;	// 16 = 0x10
    NSMutableArray *components;	// 24 = 0x18
    unsigned int msgid;	// 32 = 0x20
    void *reserved2;	// 40 = 0x28
    void *reserved;	// 48 = 0x30
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017e0dc
- (_Bool)sendBeforeDate:(id)arg1;	// IMP=0x000000000017e0a7
@property(readonly, copy) NSArray *components;
@property unsigned int msgid;
@property(readonly, retain) NSPort *receivePort;
@property(readonly, retain) NSPort *sendPort;
- (void)dealloc;	// IMP=0x000000000017dfdc
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;	// IMP=0x000000000017dfc1
- (id)initWithSendPort:(id)arg1 receivePort:(id)arg2 components:(id)arg3;	// IMP=0x000000000017df7c

@end

