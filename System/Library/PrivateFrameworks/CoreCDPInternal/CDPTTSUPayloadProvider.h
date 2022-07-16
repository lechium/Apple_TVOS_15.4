//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPKeychainCircleProxy-Protocol.h>

@class KCPairingChannel, NSString;
@protocol CDPDCircleProxy;

@interface CDPTTSUPayloadProvider : NSObject <CDPKeychainCircleProxy>
{
    KCPairingChannel *_pairingChannel;	// 8 = 0x8
    _Bool _complete;	// 16 = 0x10
    id <CDPDCircleProxy> _circleProxy;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003680a
- (_Bool)requiresInitialSync;	// IMP=0x0000000000036764
- (_Bool)supportsInteractiveAuth;	// IMP=0x000000000003675c
- (_Bool)isComplete;	// IMP=0x0000000000036753
- (id)processIncomingPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003630e
- (id)initiatingPayload:(id *)arg1;	// IMP=0x0000000000035f2e
- (id)initWithCircleProxy:(id)arg1;	// IMP=0x0000000000035ec3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

