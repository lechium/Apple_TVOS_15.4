//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _CLSignificantRegion
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006bdef
- (unsigned long long)hash;	// IMP=0x000000000006c0b3
- (id)description;	// IMP=0x000000000006c006
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006bf9f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006bec6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006bdf7
- (id)initWithCenter:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 referenceFrame:(int)arg3 lowPower:(_Bool)arg4 identifier:(id)arg5 onBehalfOfBundleId:(id)arg6 notifyOnEntry:(_Bool)arg7 notifyOnExit:(_Bool)arg8 conservativeEntry:(_Bool)arg9 emergency:(_Bool)arg10;	// IMP=0x000000000006bc0a
- (id)initWithCenter:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 identifier:(id)arg3 onBehalfOfBundleId:(id)arg4 referenceFrame:(int)arg5;	// IMP=0x000000000006bbd4
- (id)initWithCenter:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 identifier:(id)arg3;	// IMP=0x000000000006bbba

@end

