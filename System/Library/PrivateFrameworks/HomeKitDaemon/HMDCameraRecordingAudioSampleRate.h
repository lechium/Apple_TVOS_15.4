//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@interface HMDCameraRecordingAudioSampleRate : HAPNumberParser <NSCopying, NSSecureCoding>
{
    long long _type;	// 8 = 0x8
}

+ (id)arrayWithAudioSampleRates:(id)arg1;	// IMP=0x0000000000b0ef58
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000b0ef50
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b0ee57
- (id)initWithSampleRate:(long long)arg1;	// IMP=0x0000000000b0ee13
- (id)initWithTLVData:(id)arg1;	// IMP=0x0000000000b0edbc
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000b0ed01
- (id)description;	// IMP=0x0000000000b0ec8d
- (unsigned long long)hash;	// IMP=0x0000000000b0ec7b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b0ebf8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000b0eb61
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000b0eaa4

@end
