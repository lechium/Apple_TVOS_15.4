//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@interface HMDCameraRecordingH264Profile : HAPNumberParser <NSSecureCoding>
{
    long long _h264Profile;	// 8 = 0x8
}

+ (id)arrayWithProfiles:(id)arg1;	// IMP=0x000000000084a237
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000084a22f
@property(readonly, nonatomic) long long h264Profile; // @synthesize h264Profile=_h264Profile;
- (id)initWithH264Profile:(long long)arg1;	// IMP=0x000000000084a170
- (id)initWithTLVData:(id)arg1;	// IMP=0x000000000084a119
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000084a05e
- (id)description;	// IMP=0x0000000000849fea
- (unsigned long long)hash;	// IMP=0x0000000000849fd8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000849f55
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000849ebe
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000849e01

@end

