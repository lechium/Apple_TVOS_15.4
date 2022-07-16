//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFMutableSetDiff, HMZone, NSSet, NSString;

@interface HFZoneBuilder
{
    NSString *_name;	// 8 = 0x8
    HFMutableSetDiff *_roomUUIDs;	// 16 = 0x10
}

+ (id)na_identity;	// IMP=0x000000000026452c
+ (Class)homeKitRepresentationClass;	// IMP=0x0000000000261f18
- (void).cxx_destruct;	// IMP=0x0000000000264944
@property(retain, nonatomic) HFMutableSetDiff *roomUUIDs; // @synthesize roomUUIDs=_roomUUIDs;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000264887
- (unsigned long long)hash;	// IMP=0x000000000026482c
- (id)_updateRooms;	// IMP=0x000000000026372e
- (id)_updateName;	// IMP=0x0000000000263115
- (id)_createZone;	// IMP=0x0000000000262bdb
- (id)commitItem;	// IMP=0x000000000026253c
- (id)_performValidation;	// IMP=0x0000000000262426
@property(readonly, nonatomic) NSSet *rooms;
- (void)removeRoom:(id)arg1;	// IMP=0x00000000002621d5
- (void)addRoom:(id)arg1;	// IMP=0x00000000002620be
- (void)setZone:(id)arg1;	// IMP=0x00000000002620ac
@property(readonly, nonatomic) HMZone *zone;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;	// IMP=0x0000000000261f29

@end
