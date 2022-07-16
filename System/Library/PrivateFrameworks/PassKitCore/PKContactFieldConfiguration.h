//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKContactFieldConfiguration : NSObject <NSSecureCoding>
{
    long long _type;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001803fb
+ (id)contactFieldConfigurationWithDictionary:(id)arg1;	// IMP=0x0000000000180210
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000180426
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000180403
- (id)description;	// IMP=0x000000000018032b
- (id)initWithType:(long long)arg1;	// IMP=0x00000000001802ee
- (id)init;	// IMP=0x00000000001802e0

@end

