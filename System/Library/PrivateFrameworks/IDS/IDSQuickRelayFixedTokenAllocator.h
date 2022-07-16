//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSNumber;

@interface IDSQuickRelayFixedTokenAllocator : NSObject
{
    NSData *_relayIP;	// 8 = 0x8
    NSNumber *_relayPort;	// 16 = 0x10
    NSData *_relaySessionToken;	// 24 = 0x18
    NSData *_relaySessionKey;	// 32 = 0x20
    NSData *_relaySessionID;	// 40 = 0x28
    NSNumber *_relayCombinedSoftwareID;	// 48 = 0x30
    NSData *_appleID;	// 56 = 0x38
    NSData *_relayIPv6;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000058ff6
@property(copy) NSData *relayIPv6; // @synthesize relayIPv6=_relayIPv6;
@property(copy) NSData *appleID; // @synthesize appleID=_appleID;
@property(copy) NSNumber *relayCombinedSoftwareID; // @synthesize relayCombinedSoftwareID=_relayCombinedSoftwareID;
@property(copy) NSData *relaySessionID; // @synthesize relaySessionID=_relaySessionID;
@property(copy) NSData *relaySessionToken; // @synthesize relaySessionToken=_relaySessionToken;
@property(copy) NSData *relaySessionKey; // @synthesize relaySessionKey=_relaySessionKey;
@property(copy) NSNumber *relayPort; // @synthesize relayPort=_relayPort;
@property(copy) NSData *relayIP; // @synthesize relayIP=_relayIP;
- (id)_parseQuickRelayDefaults;	// IMP=0x0000000000058702
- (_Bool)_isSessionInfoValid:(id)arg1;	// IMP=0x00000000000584e9
- (void)_setAllValuesFromDictionary:(id)arg1;	// IMP=0x0000000000058319
- (id)initWithDefaults;	// IMP=0x000000000005822b
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000058130

@end
