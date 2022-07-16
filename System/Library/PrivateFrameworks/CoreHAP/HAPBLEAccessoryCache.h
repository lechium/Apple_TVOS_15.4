//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/NSSecureCoding-Protocol.h>

@class HAPBLEPeripheralInfo, NSMutableArray, NSNumber, NSString;

@interface HAPBLEAccessoryCache : HMFObject <NSSecureCoding>
{
    NSNumber *_metadataVersion;	// 8 = 0x8
    NSString *_pairingIdentifier;	// 16 = 0x10
    HAPBLEPeripheralInfo *_peripheralInfo;	// 24 = 0x18
    NSMutableArray *_cachedServices;	// 32 = 0x20
    NSNumber *_lastKeyBagIdentityIndexFailingPV;	// 40 = 0x28
    CDUnknownBlockType _saveBlock;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007b85
- (void).cxx_destruct;	// IMP=0x0000000000007b10
@property(copy, nonatomic) CDUnknownBlockType saveBlock; // @synthesize saveBlock=_saveBlock;
@property(retain, nonatomic) NSNumber *lastKeyBagIdentityIndexFailingPV; // @synthesize lastKeyBagIdentityIndexFailingPV=_lastKeyBagIdentityIndexFailingPV;
@property(readonly, nonatomic) NSMutableArray *cachedServices; // @synthesize cachedServices=_cachedServices;
@property(retain, nonatomic) HAPBLEPeripheralInfo *peripheralInfo; // @synthesize peripheralInfo=_peripheralInfo;
@property(readonly, nonatomic) NSString *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
@property(readonly, nonatomic) NSNumber *metadataVersion; // @synthesize metadataVersion=_metadataVersion;
- (id)description;	// IMP=0x000000000000784e
- (void)updateCurrentPairingIdentityIndexIfNeededForKeyBag:(id)arg1;	// IMP=0x0000000000007763
- (void)save;	// IMP=0x000000000000768f
- (void)updateWithService:(id)arg1;	// IMP=0x00000000000074b3
- (id)getCachedServiceWithUUID:(id)arg1;	// IMP=0x00000000000072e0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000070a9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000006f36
- (void)updateWithPeripheralInfo:(id)arg1;	// IMP=0x0000000000006e72
- (unsigned long long)hash;	// IMP=0x0000000000006e2e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006d5c
- (id)initWithPairingIdentifier:(id)arg1 saveBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006c5a

@end

