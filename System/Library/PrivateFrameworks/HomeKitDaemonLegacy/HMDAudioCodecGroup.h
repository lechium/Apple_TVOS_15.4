//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@interface HMDAudioCodecGroup : HAPNumberParser <NSCopying, NSSecureCoding>
{
    unsigned long long _codec;	// 8 = 0x8
}

+ (id)arrayWithCodecs:(id)arg1;	// IMP=0x000000000006cf98
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006cf90
@property(readonly, nonatomic) unsigned long long codec; // @synthesize codec=_codec;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006cf2e
- (id)initWithAudioCodecGroup:(unsigned long long)arg1;	// IMP=0x000000000006ceea
- (id)initWithTLVData:(id)arg1;	// IMP=0x000000000006ce93
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000006cdd8
- (id)description;	// IMP=0x000000000006cd64
- (unsigned long long)hash;	// IMP=0x000000000006cd52
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006cccf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006cc38
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006cb7b

@end

