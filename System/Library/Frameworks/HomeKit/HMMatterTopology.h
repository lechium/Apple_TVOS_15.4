//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface HMMatterTopology : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_homes;	// 8 = 0x8
    NSString *_appBundleID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001e02a1
- (void).cxx_destruct;	// IMP=0x00000000001e0279
@property(readonly, copy, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
@property(readonly, copy, nonatomic) NSArray *homes; // @synthesize homes=_homes;
- (unsigned long long)hash;	// IMP=0x00000000001e01d8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e0092
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e0087
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001dffd9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001dfdb3
- (id)initWithHomes:(id)arg1 appBundleID:(id)arg2;	// IMP=0x00000000001dfcd5
- (id)initWithHomes:(id)arg1;	// IMP=0x00000000001dfc36

@end

