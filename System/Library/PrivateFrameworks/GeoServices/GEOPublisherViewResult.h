//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPDPublisherViewResult, NSArray;

@interface GEOPublisherViewResult : NSObject
{
    GEOPDPublisherViewResult *_publisherViewResult;	// 8 = 0x8
    NSArray *_places;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000a0bc9c
@property(readonly, nonatomic) NSArray *resultFilters;
@property(readonly, nonatomic) NSArray *collectionIdentifiers;
- (id)initWithPublisherViewResult:(id)arg1;	// IMP=0x0000000000a0b968
- (id)initWithPublisherViewResult:(id)arg1 withPlaces:(id)arg2;	// IMP=0x0000000000a0b83f

@end

