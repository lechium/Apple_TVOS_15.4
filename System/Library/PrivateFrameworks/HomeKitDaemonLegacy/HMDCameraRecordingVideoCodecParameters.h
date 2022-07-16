//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

#import <HomeKitDaemonLegacy/HAPTLVCreateParse-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber;

@interface HMDCameraRecordingVideoCodecParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>
{
    NSArray *_profiles;	// 8 = 0x8
    NSArray *_levels;	// 16 = 0x10
    NSNumber *_bitRate;	// 24 = 0x18
    NSNumber *_iFrameInterval;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000007a23cb
- (void).cxx_destruct;	// IMP=0x00000000007a22de
@property(readonly, copy, nonatomic) NSNumber *iFrameInterval; // @synthesize iFrameInterval=_iFrameInterval;
@property(readonly, copy, nonatomic) NSNumber *bitRate; // @synthesize bitRate=_bitRate;
@property(readonly, copy, nonatomic) NSArray *levels; // @synthesize levels=_levels;
@property(readonly, copy, nonatomic) NSArray *profiles; // @synthesize profiles=_profiles;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000007a2182
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007a1f16
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000007a1cda
- (id)tlvData;	// IMP=0x00000000007a1ac5
- (_Bool)_parseFromTLVData;	// IMP=0x00000000007a185b
- (id)initWithProfiles:(id)arg1 levels:(id)arg2 bitRate:(id)arg3 iFrameInterval:(id)arg4;	// IMP=0x00000000007a1764

@end

