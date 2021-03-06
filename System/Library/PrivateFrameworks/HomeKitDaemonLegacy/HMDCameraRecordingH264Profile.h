//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@interface HMDCameraRecordingH264Profile : HAPNumberParser <NSSecureCoding>
{
    long long _h264Profile;	// 8 = 0x8
}

+ (id)arrayWithProfiles:(id)arg1;	// IMP=0x00000000007a0f23
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000007a0f1b
@property(readonly, nonatomic) long long h264Profile; // @synthesize h264Profile=_h264Profile;
- (id)initWithH264Profile:(long long)arg1;	// IMP=0x00000000007a0e5c
- (id)initWithTLVData:(id)arg1;	// IMP=0x00000000007a0e05
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000007a0d4a
- (id)description;	// IMP=0x00000000007a0cd6
- (unsigned long long)hash;	// IMP=0x00000000007a0cc4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007a0c41
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000007a0baa
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007a0aed

@end

