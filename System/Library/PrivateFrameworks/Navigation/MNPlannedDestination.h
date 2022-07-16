//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNJSONOutput-Protocol.h>
#import <Navigation/NSCopying-Protocol.h>
#import <Navigation/NSSecureCoding-Protocol.h>

@class GEOComposedWaypoint, MNTimepoint, NSDate, NSString, NSUUID, _MNTimepointAndTransportType;

@interface MNPlannedDestination : NSObject <MNJSONOutput, NSSecureCoding, NSCopying>
{
    GEOComposedWaypoint *_destinationWaypoint;	// 8 = 0x8
    NSDate *_expirationDate;	// 16 = 0x10
    _MNTimepointAndTransportType *_internalTimepoint;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000096431
+ (id)destinationFromArchiveData:(id)arg1;	// IMP=0x0000000000096366
- (void).cxx_destruct;	// IMP=0x0000000000096c10
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) GEOComposedWaypoint *destinationWaypoint; // @synthesize destinationWaypoint=_destinationWaypoint;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000096a73
@property(readonly) unsigned long long hash;
- (id)jsonDictionary;	// IMP=0x00000000000966e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000096610
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009657b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000096439
- (id)archiveData;	// IMP=0x00000000000962d8
- (void)_setTimepoint:(id)arg1 transportType:(int)arg2;	// IMP=0x000000000009622a
@property(readonly, nonatomic) _MNTimepointAndTransportType *_internalTimepoint; // @synthesize _internalTimepoint;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(nonatomic) int transportType; // @dynamic transportType;
@property(copy, nonatomic) MNTimepoint *timepoint; // @dynamic timepoint;
- (_Bool)isDuplicateOf:(id)arg1;	// IMP=0x0000000000095fea
- (id)uniqueIdentifier;	// IMP=0x0000000000095f47
- (id)initWithWaypoint:(id)arg1 transportType:(int)arg2;	// IMP=0x0000000000095e26

// Remaining properties
@property(readonly) Class superclass;

@end
