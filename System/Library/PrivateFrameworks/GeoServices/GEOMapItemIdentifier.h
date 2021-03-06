//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSCopying-Protocol.h>
#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOPDMapsIdentifier, NSData;

@interface GEOMapItemIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    GEOPDMapsIdentifier *_mapsIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000a119fa
+ (id)mapItemIdentifiersFromMapsIdentifiers:(id)arg1;	// IMP=0x0000000000a10875
- (void).cxx_destruct;	// IMP=0x0000000000a1289f
- (_Bool)isValid;	// IMP=0x0000000000a12889
@property(readonly, nonatomic) NSData *comparableRepresentation;
- (_Bool)isEqualToGEOMapItemIdentifier:(id)arg1;	// IMP=0x0000000000a121ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a12197
- (unsigned long long)hash;	// IMP=0x0000000000a12032
- (id)description;	// IMP=0x0000000000a11dda
- (id)shortDebugDescription;	// IMP=0x0000000000a11ca7
- (id)debugDescription;	// IMP=0x0000000000a11c7e
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic, getter=hasCoordinate) _Bool hasCoordinate;
@property(readonly, nonatomic) int resultProviderID;
@property(readonly, nonatomic) unsigned long long muid;
- (id)mapsIdentifier;	// IMP=0x0000000000a11a02
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a119ef
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a116ad
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a11332
- (id)initWithPlace:(id)arg1;	// IMP=0x0000000000a10ec6
- (id)initWithMapItem:(id)arg1;	// IMP=0x0000000000a10e2f
- (id)initWithBasemapId:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(CDStruct_c3b9c2ee)arg3;	// IMP=0x0000000000a10cdd
- (id)initWithMUID:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(CDStruct_c3b9c2ee)arg3;	// IMP=0x0000000000a10b8b
- (id)initWithMUID:(unsigned long long)arg1 coordinate:(CDStruct_c3b9c2ee)arg2;	// IMP=0x0000000000a10b77
- (id)initWithMUID:(unsigned long long)arg1;	// IMP=0x0000000000a10b58
- (id)initWithMapsIdentifier:(id)arg1;	// IMP=0x0000000000a10aba
- (id)init;	// IMP=0x0000000000a10a80

@end

