//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@interface HMDCameraRecordingAudioCodec : HAPNumberParser <NSCopying, NSSecureCoding>
{
    long long _type;	// 8 = 0x8
}

+ (id)arrayWithCodecTypes:(id)arg1;	// IMP=0x0000000000a4ed77
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000a4ed6f
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a4ecb5
- (id)initWithCodec:(long long)arg1;	// IMP=0x0000000000a4ec71
- (id)initWithTLVData:(id)arg1;	// IMP=0x0000000000a4ec1a
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000a4eb5f
- (id)description;	// IMP=0x0000000000a4eaeb
- (unsigned long long)hash;	// IMP=0x0000000000a4ead9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a4ea56
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a4e9bf
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a4e902

@end

