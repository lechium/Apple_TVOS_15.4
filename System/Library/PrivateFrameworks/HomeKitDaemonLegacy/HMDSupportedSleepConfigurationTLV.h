//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class HAPTLVUnsignedNumberValue, NSMutableArray, NSString;

@interface HMDSupportedSleepConfigurationTLV : NSObject <NSCopying, HAPTLVProtocol>
{
    HAPTLVUnsignedNumberValue *_version;	// 8 = 0x8
    NSMutableArray *_supportedWoLPacketConfigurations;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000006bad51
- (void).cxx_destruct;	// IMP=0x00000000006b973d
@property(retain, nonatomic) NSMutableArray *supportedWoLPacketConfigurations; // @synthesize supportedWoLPacketConfigurations=_supportedWoLPacketConfigurations;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *version; // @synthesize version=_version;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006b944f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006b93c1
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000006b8f69
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000006b8b8e
- (id)initWithVersion:(id)arg1 supportedWoLPacketConfigurations:(id)arg2;	// IMP=0x00000000006b8ae3
- (id)init;	// IMP=0x00000000006b8ab4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
