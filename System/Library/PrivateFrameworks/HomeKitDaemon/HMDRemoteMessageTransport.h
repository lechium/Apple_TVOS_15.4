//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAccountRegistry, NSString;

@interface HMDRemoteMessageTransport : HMFMessageTransport <HMFLogging, HMFDumpState>
{
    int _transportType;	// 8 = 0x8
    HMDAccountRegistry *_accountRegistry;	// 16 = 0x10
    long long _qualityOfService;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0000000000b2d354
+ (id)remoteMessageFromMessage:(id)arg1 secure:(_Bool)arg2 accountRegistry:(id)arg3;	// IMP=0x0000000000b2cbec
+ (unsigned long long)restriction;	// IMP=0x0000000000b2cbdf
+ (id)remoteMessageTransportsForProductInfo:(id)arg1;	// IMP=0x00000000009b60af
- (void).cxx_destruct;	// IMP=0x0000000000b2c893
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, nonatomic) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
- (id)dumpState;	// IMP=0x0000000000b2c7e5
- (long long)compareCapability:(id)arg1 key:(id)arg2 withCapability:(id)arg3;	// IMP=0x0000000000b2c66c
- (_Bool)doesResponse:(id)arg1 matchAllCapabilities:(id)arg2;	// IMP=0x0000000000b2c455
- (id)matchResponse:(id)arg1 requestedCapabilities:(id)arg2;	// IMP=0x0000000000b2bab8
- (id)remoteMessageFromMessage:(id)arg1;	// IMP=0x0000000000b2ba31
- (void)postDidReceiveRemoteMessageWithNoListenerFromDevice:(id)arg1;	// IMP=0x0000000000b2b987
- (void)start;	// IMP=0x0000000000b2b981
@property(readonly, nonatomic, getter=isSecure) _Bool secure;
- (id)initWithAccountRegistry:(id)arg1;	// IMP=0x0000000000b2b90b
- (_Bool)canSendMessage:(id)arg1;	// IMP=0x0000000000b2b855
- (id)init;	// IMP=0x0000000000b2b7ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

