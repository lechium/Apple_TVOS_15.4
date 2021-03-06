//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class IDSDaemonRequestTimer, NSString;

@interface IDSAppleCareDaemonResponseListener : NSObject <IDSDaemonListenerProtocol>
{
    IDSDaemonRequestTimer *_requestTimer;	// 8 = 0x8
    CDUnknownBlockType _disconnectedBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003cbd5
- (void)daemonDisconnected;	// IMP=0x000000000003cbc2
- (void)applecareResponseForRequestID:(id)arg1 withError:(id)arg2;	// IMP=0x000000000003ca91
- (id)initWithDisconnectedBlockAndNoTimeout:(CDUnknownBlockType)arg1;	// IMP=0x000000000003ca1e
- (id)initWithRequestTimer:(id)arg1;	// IMP=0x000000000003c9b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

