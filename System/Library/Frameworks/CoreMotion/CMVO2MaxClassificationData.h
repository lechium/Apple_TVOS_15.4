//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@interface CMVO2MaxClassificationData : NSObject <NSSecureCoding, NSCopying>
{
    long long _biologicalSex;	// 8 = 0x8
    long long _ageLowerBound;	// 16 = 0x10
    long long _ageUpperBound;	// 24 = 0x18
    long long _classificationType;	// 32 = 0x20
    double _vo2MaxLowerBound;	// 40 = 0x28
    double _vo2MaxUpperBound;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000113e17
@property(readonly, nonatomic) double vo2MaxUpperBound; // @synthesize vo2MaxUpperBound=_vo2MaxUpperBound;
@property(readonly, nonatomic) double vo2MaxLowerBound; // @synthesize vo2MaxLowerBound=_vo2MaxLowerBound;
@property(readonly, nonatomic) long long classificationType; // @synthesize classificationType=_classificationType;
@property(readonly, nonatomic) long long ageUpperBound; // @synthesize ageUpperBound=_ageUpperBound;
@property(readonly, nonatomic) long long ageLowerBound; // @synthesize ageLowerBound=_ageLowerBound;
@property(readonly, nonatomic) long long biologicalSex; // @synthesize biologicalSex=_biologicalSex;
- (id)description;	// IMP=0x0000000000114012
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000113f38
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000113e1f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000113db8
- (void)dealloc;	// IMP=0x0000000000113d89
- (id)initWithBiologicalSex:(long long)arg1 ageLowerBound:(long long)arg2 ageUpperBound:(long long)arg3 classificationType:(long long)arg4 vo2MaxLowerBound:(double)arg5 vo2MaxUpperBound:(double)arg6;	// IMP=0x0000000000113d0d

@end

