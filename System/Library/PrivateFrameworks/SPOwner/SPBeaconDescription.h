//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSString;

@interface SPBeaconDescription : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_stableIdentifier;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_model;	// 24 = 0x18
    NSString *_systemVersion;	// 32 = 0x20
    long long _vendorId;	// 40 = 0x28
    long long _productId;	// 48 = 0x30
    long long _role;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000043f79
- (void).cxx_destruct;	// IMP=0x0000000000044492
@property(nonatomic) long long role; // @synthesize role=_role;
@property(nonatomic) long long productId; // @synthesize productId=_productId;
@property(nonatomic) long long vendorId; // @synthesize vendorId=_vendorId;
@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *stableIdentifier; // @synthesize stableIdentifier=_stableIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000442a6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000441ce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000440af
- (id)initWithStableIdentifier:(id)arg1 name:(id)arg2 model:(id)arg3 systemVersion:(id)arg4 vendorId:(long long)arg5 productId:(long long)arg6 role:(long long)arg7;	// IMP=0x0000000000043f81

@end

