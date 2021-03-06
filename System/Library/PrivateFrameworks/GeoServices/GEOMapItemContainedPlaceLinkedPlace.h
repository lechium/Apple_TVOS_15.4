//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOFeatureStyleAttributes, GEOMapItemIdentifier, GEOPDLinkedPlace;

__attribute__((visibility("hidden")))
@interface GEOMapItemContainedPlaceLinkedPlace
{
    GEOPDLinkedPlace *_linkedPlace;	// 8 = 0x8
    GEOMapItemIdentifier *_identifier;	// 16 = 0x10
    GEOFeatureStyleAttributes *_styleAttributes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000104acc6
- (id)description;	// IMP=0x000000000104ac4a
- (_Bool)_isInLinkedPlaceRelationship;	// IMP=0x000000000104ac42
- (id)_styleAttributes;	// IMP=0x000000000104ac2d
- (int)_resultProviderID;	// IMP=0x000000000104ac10
- (_Bool)_hasResultProviderID;	// IMP=0x000000000104ab38
- (id)_identifier;	// IMP=0x000000000104ab23
- (unsigned long long)_muid;	// IMP=0x000000000104ab06
- (_Bool)_hasMUID;	// IMP=0x000000000104aa2e
- (_Bool)_responseStatusIsIncomplete;	// IMP=0x000000000104aa26
- (_Bool)_hasResolvablePartialInformation;	// IMP=0x000000000104aa1e
- (CDStruct_c3b9c2ee)coordinate;	// IMP=0x000000000104a97d
- (int)referenceFrame;	// IMP=0x000000000104a947
- (id)name;	// IMP=0x000000000104a932
- (_Bool)isValid;	// IMP=0x000000000104a92a
- (id)initWithLinkedPlace:(id)arg1;	// IMP=0x000000000104a7be

@end

