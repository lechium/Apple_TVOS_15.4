//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

#import <HomeKitDaemonLegacy/HAPTLVCreateParse-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class HMDAudioCodecGroup, HMDAudioCodecParameters;

@interface HMDAudioCodecConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>
{
    HMDAudioCodecGroup *_codecGroup;	// 8 = 0x8
    HMDAudioCodecParameters *_audioCodecParameters;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006d973
- (void).cxx_destruct;	// IMP=0x000000000006d942
@property(readonly, copy, nonatomic) HMDAudioCodecParameters *audioCodecParameters; // @synthesize audioCodecParameters=_audioCodecParameters;
@property(readonly, copy, nonatomic) HMDAudioCodecGroup *codecGroup; // @synthesize codecGroup=_codecGroup;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006d872
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006d6af
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000006d54f
- (id)tlvData;	// IMP=0x000000000006d417
- (_Bool)_parseFromTLVData;	// IMP=0x000000000006d236
- (id)initWithAudioCodecGroup:(id)arg1 codecParameter:(id)arg2;	// IMP=0x000000000006d194

@end

