//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

#import <HomeKitDaemon/HAPTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDReselectedVideoParameters, HMDSessionControl;

@interface HMDReselectedStreamConfigurationWrite : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>
{
    HMDSessionControl *_sessionControl;	// 8 = 0x8
    HMDReselectedVideoParameters *_videoParameters;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000078f6a
- (void).cxx_destruct;	// IMP=0x0000000000078f39
@property(readonly, copy, nonatomic) HMDReselectedVideoParameters *videoParameters; // @synthesize videoParameters=_videoParameters;
@property(readonly, copy, nonatomic) HMDSessionControl *sessionControl; // @synthesize sessionControl=_sessionControl;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000078e69
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000078ca6
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000078b83
- (_Bool)_parseFromTLVData;	// IMP=0x000000000007896c
- (id)tlvData;	// IMP=0x000000000007884e
- (id)initWithSessionControl:(id)arg1;	// IMP=0x00000000000787e0
- (id)initWithSessionControl:(id)arg1 videoParameters:(id)arg2;	// IMP=0x000000000007873e

@end

