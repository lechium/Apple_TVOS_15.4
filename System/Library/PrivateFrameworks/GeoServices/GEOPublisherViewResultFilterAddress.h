//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapItemIdentifier, GEOPDEntity, GEOPDPublisherViewResultFilterAddress, NSString;

@interface GEOPublisherViewResultFilterAddress : NSObject
{
    GEOPDPublisherViewResultFilterAddress *_filterAddressIdentifier;	// 8 = 0x8
    GEOPDEntity *_placeEntity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000007c2375
@property(readonly, nonatomic) NSString *displayString;
@property(readonly, nonatomic) GEOPDPublisherViewResultFilterAddress *addressIdentifier;
@property(readonly, nonatomic) GEOMapItemIdentifier *filterAddressIdentifier;
- (id)initWithFilterAddressIdentifier:(id)arg1 withPlaces:(id)arg2;	// IMP=0x00000000007c2013

@end
