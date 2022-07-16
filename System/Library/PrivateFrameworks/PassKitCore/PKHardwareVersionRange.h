//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class PKDeviceVersionRange;

@interface PKHardwareVersionRange : NSObject <NSSecureCoding, NSCopying>
{
    PKDeviceVersionRange *_iphone;	// 8 = 0x8
    PKDeviceVersionRange *_watch;	// 16 = 0x10
    PKDeviceVersionRange *_ipad;	// 24 = 0x18
    PKDeviceVersionRange *_ipod;	// 32 = 0x20
    PKDeviceVersionRange *_appletv;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000154cf4
- (void).cxx_destruct;	// IMP=0x0000000000155297
@property(readonly, nonatomic) PKDeviceVersionRange *appletv; // @synthesize appletv=_appletv;
@property(readonly, nonatomic) PKDeviceVersionRange *ipod; // @synthesize ipod=_ipod;
@property(readonly, nonatomic) PKDeviceVersionRange *ipad; // @synthesize ipad=_ipad;
@property(readonly, nonatomic) PKDeviceVersionRange *watch; // @synthesize watch=_watch;
@property(readonly, nonatomic) PKDeviceVersionRange *iphone; // @synthesize iphone=_iphone;
- (id)description;	// IMP=0x000000000015516d
- (unsigned long long)hash;	// IMP=0x00000000001550cf
- (_Bool)isEqualToHardwareVersionRange:(id)arg1;	// IMP=0x0000000000155052
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000154fea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000154f09
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000154e60
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000154cfc
- (_Bool)matchesDeviceVersion:(id)arg1;	// IMP=0x0000000000154b41
- (id)asDictionary;	// IMP=0x00000000001549cf
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000154799

@end
