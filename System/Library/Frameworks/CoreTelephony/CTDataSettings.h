//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@interface CTDataSettings : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _cellularDataEnabled;	// 8 = 0x8
    _Bool _airplaneModeEnabled;	// 9 = 0x9
    _Bool _cellularDataCapable;	// 10 = 0xa
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000088647
@property(nonatomic, getter=isCellularDataCapable) _Bool cellularDataCapable; // @synthesize cellularDataCapable=_cellularDataCapable;
@property(nonatomic, getter=isAirplaneModeEnabled) _Bool airplaneModeEnabled; // @synthesize airplaneModeEnabled=_airplaneModeEnabled;
@property(nonatomic, getter=isCellularDataEnabled) _Bool cellularDataEnabled; // @synthesize cellularDataEnabled=_cellularDataEnabled;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008857c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000884e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008843f
- (id)description;	// IMP=0x0000000000088366

@end

