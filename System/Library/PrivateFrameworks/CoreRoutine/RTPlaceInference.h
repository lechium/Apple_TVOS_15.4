//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSString, NSUUID, RTLocation, RTMapItem;

@interface RTPlaceInference : NSObject <NSSecureCoding>
{
    RTLocation *_referenceLocation;	// 8 = 0x8
    RTMapItem *_mapItem;	// 16 = 0x10
    unsigned long long _userType;	// 24 = 0x18
    unsigned long long _userTypeSource;	// 32 = 0x20
    unsigned long long _placeType;	// 40 = 0x28
    double _confidence;	// 48 = 0x30
    NSString *_preferredName;	// 56 = 0x38
    NSUUID *_loiIdentifier;	// 64 = 0x40
}

+ (id)placeTypeToString:(unsigned long long)arg1;	// IMP=0x0000000000002d23
+ (id)userSpecificPlaceTypeSourceToString:(unsigned long long)arg1;	// IMP=0x0000000000002b40
+ (id)userSpecificPlaceTypeToString:(unsigned long long)arg1;	// IMP=0x0000000000002ae7
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000024ac
- (void).cxx_destruct;	// IMP=0x0000000000002dcd
@property(readonly, nonatomic) NSUUID *loiIdentifier; // @synthesize loiIdentifier=_loiIdentifier;
@property(readonly, nonatomic) NSString *preferredName; // @synthesize preferredName=_preferredName;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) unsigned long long placeType; // @synthesize placeType=_placeType;
@property(readonly, nonatomic) unsigned long long userTypeSource; // @synthesize userTypeSource=_userTypeSource;
@property(readonly, nonatomic) unsigned long long userType; // @synthesize userType=_userType;
@property(readonly, nonatomic) RTMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, nonatomic) RTLocation *referenceLocation; // @synthesize referenceLocation=_referenceLocation;
- (id)description;	// IMP=0x0000000000002920
- (id)nameFromUserType:(unsigned long long)arg1;	// IMP=0x00000000000028a2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002711
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000024b4
- (id)initWithMapItem:(id)arg1 userType:(unsigned long long)arg2 userTypeSource:(unsigned long long)arg3 placeType:(unsigned long long)arg4 referenceLocation:(id)arg5 confidence:(double)arg6 loiIdentifier:(id)arg7 preferredName:(id)arg8;	// IMP=0x0000000000002169
- (id)initWithMapItem:(id)arg1 userType:(unsigned long long)arg2 userTypeSource:(unsigned long long)arg3 placeType:(unsigned long long)arg4 referenceLocation:(id)arg5 confidence:(double)arg6 loiIdentifier:(id)arg7;	// IMP=0x0000000000002053
- (id)init;	// IMP=0x0000000000002024

@end

