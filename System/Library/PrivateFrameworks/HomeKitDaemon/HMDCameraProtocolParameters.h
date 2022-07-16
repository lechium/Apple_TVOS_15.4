//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDReselectedStreamConfigurationWrite, HMDSelectedStreamConfigurationWrite, HMDSetupEndPointRead, HMDSetupEndPointWrite, HMDSupportedAudioStreamConfiguration, HMDSupportedRTPConfiguration, HMDSupportedVideoStreamConfiguration;

@interface HMDCameraProtocolParameters : HMFObject <NSSecureCoding>
{
    HMDSupportedVideoStreamConfiguration *_supportedVideoStreamConfiguration;	// 8 = 0x8
    HMDSupportedAudioStreamConfiguration *_supportedAudioStreamConfiguration;	// 16 = 0x10
    HMDSupportedRTPConfiguration *_supportedRTPConfiguration;	// 24 = 0x18
    HMDSetupEndPointRead *_setupEndPointRead;	// 32 = 0x20
    HMDSetupEndPointWrite *_setupEndPointWrite;	// 40 = 0x28
    HMDSelectedStreamConfigurationWrite *_selectedStreamConfigurationWrite;	// 48 = 0x30
    HMDReselectedStreamConfigurationWrite *_reselectedStreamConfigurationWrite;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000049461a
- (void).cxx_destruct;	// IMP=0x0000000000494594
@property(retain, nonatomic) HMDReselectedStreamConfigurationWrite *reselectedStreamConfigurationWrite; // @synthesize reselectedStreamConfigurationWrite=_reselectedStreamConfigurationWrite;
@property(retain, nonatomic) HMDSelectedStreamConfigurationWrite *selectedStreamConfigurationWrite; // @synthesize selectedStreamConfigurationWrite=_selectedStreamConfigurationWrite;
@property(retain, nonatomic) HMDSetupEndPointWrite *setupEndPointWrite; // @synthesize setupEndPointWrite=_setupEndPointWrite;
@property(retain, nonatomic) HMDSetupEndPointRead *setupEndPointRead; // @synthesize setupEndPointRead=_setupEndPointRead;
@property(retain, nonatomic) HMDSupportedRTPConfiguration *supportedRTPConfiguration; // @synthesize supportedRTPConfiguration=_supportedRTPConfiguration;
@property(retain, nonatomic) HMDSupportedAudioStreamConfiguration *supportedAudioStreamConfiguration; // @synthesize supportedAudioStreamConfiguration=_supportedAudioStreamConfiguration;
@property(retain, nonatomic) HMDSupportedVideoStreamConfiguration *supportedVideoStreamConfiguration; // @synthesize supportedVideoStreamConfiguration=_supportedVideoStreamConfiguration;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000494379
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000049421b

@end

