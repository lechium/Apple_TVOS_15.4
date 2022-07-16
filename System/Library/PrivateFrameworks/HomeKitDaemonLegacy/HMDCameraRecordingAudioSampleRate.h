//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@interface HMDCameraRecordingAudioSampleRate : HAPNumberParser <NSCopying, NSSecureCoding>
{
    long long _type;	// 8 = 0x8
}

+ (id)arrayWithAudioSampleRates:(id)arg1;	// IMP=0x0000000000a4fa98
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000a4fa90
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a4f997
- (id)initWithSampleRate:(long long)arg1;	// IMP=0x0000000000a4f953
- (id)initWithTLVData:(id)arg1;	// IMP=0x0000000000a4f8fc
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000a4f841
- (id)description;	// IMP=0x0000000000a4f7cd
- (unsigned long long)hash;	// IMP=0x0000000000a4f7bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a4f738
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a4f6a1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a4f5e4

@end

