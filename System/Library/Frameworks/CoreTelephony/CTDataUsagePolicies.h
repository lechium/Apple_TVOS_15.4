//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTDataUsagePolicies : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_bundleId;	// 8 = 0x8
    long long _cellular;	// 16 = 0x10
    long long _wifi;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000bb229
- (void).cxx_destruct;	// IMP=0x00000000000bb274
@property(nonatomic) long long wifi; // @synthesize wifi=_wifi;
@property(nonatomic) long long cellular; // @synthesize cellular=_cellular;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bb0f2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bafe1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000baf45
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bae34
- (id)description;	// IMP=0x00000000000bad57
- (id)init:(id)arg1 withCellularPolicy:(long long)arg2 andWifiPolicy:(long long)arg3;	// IMP=0x00000000000bacd6

@end

