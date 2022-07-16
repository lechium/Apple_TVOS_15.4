//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/NSCopying-Protocol.h>
#import <AppStoreComponents/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface ASCScreenshotDisplayConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    NSNumber *_deviceCornerRadiusFactor;	// 8 = 0x8
}

+ (double)defaultCornerRadius;	// IMP=0x0000000000018645
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000182e1
+ (id)defaultConfiguration;	// IMP=0x000000000001824a
- (void).cxx_destruct;	// IMP=0x0000000000018771
@property(readonly, copy, nonatomic) NSNumber *deviceCornerRadiusFactor; // @synthesize deviceCornerRadiusFactor=_deviceCornerRadiusFactor;
@property(readonly, nonatomic) unsigned long long maskedCorners;
@property(readonly, nonatomic) NSString *cornerCurve;
- (double)cornerRadiusForSize:(struct CGSize)arg1;	// IMP=0x0000000000018653
- (unsigned long long)hash;	// IMP=0x00000000000185ca
- (id)description;	// IMP=0x000000000001852c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000018421
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000018416
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001839d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000182e9
- (id)initWithDeviceCornerRadiusFactor:(id)arg1;	// IMP=0x000000000001826e

@end

