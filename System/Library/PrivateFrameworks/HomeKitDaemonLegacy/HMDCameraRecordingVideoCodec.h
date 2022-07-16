//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@interface HMDCameraRecordingVideoCodec : HAPNumberParser <NSCopying, NSSecureCoding>
{
    long long _type;	// 8 = 0x8
}

+ (id)arrayWithCodecTypes:(id)arg1;	// IMP=0x00000000007a08f1
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000007a08e9
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007a082f
- (id)initWithCodec:(long long)arg1;	// IMP=0x00000000007a07eb
- (id)initWithTLVData:(id)arg1;	// IMP=0x00000000007a0794
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000007a06d9
- (id)description;	// IMP=0x00000000007a0665
- (unsigned long long)hash;	// IMP=0x00000000007a0653
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007a05d0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000007a0539
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007a047c

@end

