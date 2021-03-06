//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface HKStatisticsCollectionCacheSettings : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
    long long _mode;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001b0e48
- (void).cxx_destruct;	// IMP=0x00000000001b0f87
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b0f01
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b0e50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b0e3d
- (id)initWithIdentifier:(id)arg1 mode:(long long)arg2;	// IMP=0x00000000001b0d44
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000001b0d30

@end

