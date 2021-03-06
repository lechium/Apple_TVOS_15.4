//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

#import <HomeKitDaemon/HAPTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSDictionary, NSNumber;

@interface HMDSupportedAudioStreamConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>
{
    NSNumber *_supportsComfortNoise;	// 8 = 0x8
    NSDictionary *_codecConfigurations;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000702eb
- (void).cxx_destruct;	// IMP=0x000000000007026d
@property(readonly, copy, nonatomic) NSDictionary *codecConfigurations; // @synthesize codecConfigurations=_codecConfigurations;
@property(readonly, copy, nonatomic) NSNumber *supportsComfortNoise; // @synthesize supportsComfortNoise=_supportsComfortNoise;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007019d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006ffc5
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000006fe68
- (id)tlvData;	// IMP=0x000000000006fc8b
- (_Bool)_parseFromTLVData;	// IMP=0x000000000006f950
- (id)initWithComfortNoise:(id)arg1 CodecConfigurations:(id)arg2;	// IMP=0x000000000006f89b

@end

