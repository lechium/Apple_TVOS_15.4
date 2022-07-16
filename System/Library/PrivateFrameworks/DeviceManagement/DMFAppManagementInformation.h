//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSCopying-Protocol.h>
#import <DeviceManagement/NSSecureCoding-Protocol.h>

@class NSString;

@interface DMFAppManagementInformation : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _state;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    NSString *_redemptionCode;	// 24 = 0x18
    NSString *_unusedRedemptionCode;	// 32 = 0x20
    NSString *_displayName;	// 40 = 0x28
}

+ (id)stringForState:(unsigned long long)arg1;	// IMP=0x0000000000004408
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000003f58
- (void).cxx_destruct;	// IMP=0x0000000000004682
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *unusedRedemptionCode; // @synthesize unusedRedemptionCode=_unusedRedemptionCode;
@property(copy, nonatomic) NSString *redemptionCode; // @synthesize redemptionCode=_redemptionCode;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (id)_stringForOptions:(unsigned long long)arg1;	// IMP=0x0000000000004510
- (id)description;	// IMP=0x0000000000004267
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004121
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003f60
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003e81

@end

