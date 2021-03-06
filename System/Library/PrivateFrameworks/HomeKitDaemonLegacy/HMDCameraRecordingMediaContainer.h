//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@interface HMDCameraRecordingMediaContainer : HAPNumberParser <NSCopying, NSSecureCoding>
{
    long long _type;	// 8 = 0x8
}

+ (id)arrayWithContainerTypes:(id)arg1;	// IMP=0x000000000058d199
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000058d191
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000058d0e9
- (id)initWithContainer:(long long)arg1;	// IMP=0x000000000058d0a5
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000058cfea
- (id)description;	// IMP=0x000000000058cf76
- (unsigned long long)hash;	// IMP=0x000000000058cf64
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000058cee1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000058ce4a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000058cd8d

@end

