//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOVenueIdentifier-Protocol.h>

@class NSArray, NSString;

@interface GEOVenueIdentifier : NSObject <GEOVenueIdentifier>
{
    _Bool _hasVenueID;	// 8 = 0x8
    unsigned long long _venueID;	// 16 = 0x10
    _Bool _hasFeatureID;	// 24 = 0x18
    unsigned long long _featureID;	// 32 = 0x20
    _Bool _hasBusinessID;	// 40 = 0x28
    unsigned long long _businessID;	// 48 = 0x30
    NSArray *_componentIdentifiers;	// 56 = 0x38
    NSArray *_originalIdentifiers;	// 64 = 0x40
}

+ (id)componentIdentifiersFromVenueIdentifiers:(id)arg1;	// IMP=0x00000000010fe982
- (void).cxx_destruct;	// IMP=0x00000000010ff072
@property(readonly, nonatomic) NSArray *componentIdentifiers; // @synthesize componentIdentifiers=_componentIdentifiers;
@property(readonly, nonatomic) unsigned long long businessID; // @synthesize businessID=_businessID;
@property(readonly, nonatomic, getter=_hasBusinessID) _Bool hasBusinessID; // @synthesize hasBusinessID=_hasBusinessID;
@property(readonly, nonatomic) unsigned long long featureID; // @synthesize featureID=_featureID;
@property(readonly, nonatomic, getter=_hasFeatureID) _Bool hasFeatureID; // @synthesize hasFeatureID=_hasFeatureID;
@property(readonly, nonatomic) unsigned long long venueID; // @synthesize venueID=_venueID;
@property(readonly, nonatomic, getter=_hasVenueID) _Bool hasVenueID; // @synthesize hasVenueID=_hasVenueID;
- (id)placeDataVenueIdentifierForVenue;	// IMP=0x00000000010fefe6
- (id)placeDataVenueIdentifier;	// IMP=0x00000000010fef7f
- (id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3;	// IMP=0x00000000010fef66
- (id)initWithVenueID:(unsigned long long)arg1;	// IMP=0x00000000010fef48
- (id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3 componentIdentifiers:(id)arg4;	// IMP=0x00000000010feea2
- (id)initWithVenueID:(unsigned long long)arg1 componentIdentifiers:(id)arg2;	// IMP=0x00000000010fee88
- (id)initWithVenueIdentifiers:(id)arg1;	// IMP=0x00000000010feba3
- (id)init;	// IMP=0x00000000010feb79

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

