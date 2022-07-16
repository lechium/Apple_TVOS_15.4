//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOSearchFilter-Protocol.h>

@protocol GEOVenueIdentifier;

@interface GEOVenueSearchFilter : NSObject <GEOSearchFilter>
{
    id <GEOVenueIdentifier> _identifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000009d9026
@property(readonly, nonatomic) id <GEOVenueIdentifier> identifier; // @synthesize identifier=_identifier;
- (_Bool)applyToSearchParameters:(id)arg1 error:(id *)arg2;	// IMP=0x00000000009d8f25
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000009d8ea7
- (id)init;	// IMP=0x00000000009d8e7d

@end

