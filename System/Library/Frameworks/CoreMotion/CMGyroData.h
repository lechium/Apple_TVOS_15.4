//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CMGyroData
{
    id _internal;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ee689
@property(readonly, nonatomic) CDStruct_31142d93 rotationRate;
- (id)description;	// IMP=0x00000000000ee8ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ee882
- (void)dealloc;	// IMP=0x00000000000ee840
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ee77c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ee691
- (id)initWithRotationRate:(CDStruct_03942939)arg1 andTimestamp:(double)arg2;	// IMP=0x00000000000ee611

@end

