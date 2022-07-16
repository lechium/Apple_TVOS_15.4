//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOVenueFloorInfo-Protocol.h>

@class NSString;

@interface GEOVenueFloorInfo : NSObject <GEOVenueFloorInfo>
{
    short _ordinal;	// 8 = 0x8
    unsigned long long _levelID;	// 16 = 0x10
}

+ (_Bool)isIntegerValidOrdinal:(long long)arg1;	// IMP=0x000000000107155e
+ (id)floorInfosFromLevels:(id)arg1;	// IMP=0x0000000001071404
@property(readonly, nonatomic) unsigned long long levelID; // @synthesize levelID=_levelID;
@property(readonly, nonatomic) short ordinal; // @synthesize ordinal=_ordinal;
- (id)initWithLevel:(id)arg1;	// IMP=0x000000000107135a
- (id)initWithOrdinal:(short)arg1 levelID:(unsigned long long)arg2;	// IMP=0x0000000001071313
- (id)init;	// IMP=0x00000000010712e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
