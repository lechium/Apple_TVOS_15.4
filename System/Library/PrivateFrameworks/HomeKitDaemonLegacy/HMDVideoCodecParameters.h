//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

#import <HomeKitDaemonLegacy/HAPTLVCreateParse-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class NSArray;

@interface HMDVideoCodecParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>
{
    NSArray *_h264Profiles;	// 8 = 0x8
    NSArray *_levels;	// 16 = 0x10
    NSArray *_packetizationModes;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000067ea9
- (void).cxx_destruct;	// IMP=0x0000000000067ab2
@property(readonly, copy, nonatomic) NSArray *packetizationModes; // @synthesize packetizationModes=_packetizationModes;
@property(readonly, copy, nonatomic) NSArray *levels; // @synthesize levels=_levels;
@property(readonly, copy, nonatomic) NSArray *h264Profiles; // @synthesize h264Profiles=_h264Profiles;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006799c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000067700
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000067540
- (id)tlvData;	// IMP=0x0000000000067311
- (_Bool)_parseFromTLVData;	// IMP=0x000000000006714d
- (id)initWithProfiles:(id)arg1 levels:(id)arg2 packetizationModes:(id)arg3;	// IMP=0x0000000000067087

@end

