//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class HAPTLVUnsignedNumberValue, HMDSleepConfigurationWakePacketTypeWrapper, HMDSleepConfigurationWakeUpTypeWrapper, NSData, NSString;

@interface HMDWakePacketConfigurationTLV : NSObject <NSCopying, HAPTLVProtocol>
{
    HMDSleepConfigurationWakePacketTypeWrapper *_wakePacketType;	// 8 = 0x8
    HAPTLVUnsignedNumberValue *_wakeDestinationPort;	// 16 = 0x10
    NSData *_wakeDestinationAddress;	// 24 = 0x18
    HMDSleepConfigurationWakeUpTypeWrapper *_wakeType;	// 32 = 0x20
    NSData *_wakePattern;	// 40 = 0x28
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000006baca6
- (void).cxx_destruct;	// IMP=0x00000000006bac5d
@property(retain, nonatomic) NSData *wakePattern; // @synthesize wakePattern=_wakePattern;
@property(retain, nonatomic) HMDSleepConfigurationWakeUpTypeWrapper *wakeType; // @synthesize wakeType=_wakeType;
@property(retain, nonatomic) NSData *wakeDestinationAddress; // @synthesize wakeDestinationAddress=_wakeDestinationAddress;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *wakeDestinationPort; // @synthesize wakeDestinationPort=_wakeDestinationPort;
@property(retain, nonatomic) HMDSleepConfigurationWakePacketTypeWrapper *wakePacketType; // @synthesize wakePacketType=_wakePacketType;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006ba613
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006ba504
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000006b9ebc
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000006b9896
- (id)initWithWakePacketType:(id)arg1 wakeDestinationPort:(id)arg2 wakeDestinationAddress:(id)arg3 wakeType:(id)arg4 wakePattern:(id)arg5;	// IMP=0x00000000006b9794
- (id)init;	// IMP=0x00000000006b9765

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

