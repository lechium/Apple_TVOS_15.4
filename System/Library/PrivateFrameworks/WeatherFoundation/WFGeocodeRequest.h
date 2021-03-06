//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKLocalSearchCompletion, NSString, WFLocation;

@interface WFGeocodeRequest
{
    CDUnknownBlockType _resultHandler;	// 8 = 0x8
    NSString *_searchString;	// 16 = 0x10
    MKLocalSearchCompletion *_autocompleteSearchResult;	// 24 = 0x18
    WFLocation *_geocodedResult;	// 32 = 0x20
    struct CLLocationCoordinate2D _coordinate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004d692
@property(retain) WFLocation *geocodedResult; // @synthesize geocodedResult=_geocodedResult;
@property(retain) MKLocalSearchCompletion *autocompleteSearchResult; // @synthesize autocompleteSearchResult=_autocompleteSearchResult;
@property(retain) NSString *searchString; // @synthesize searchString=_searchString;
@property struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(readonly) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
- (void)cleanup;	// IMP=0x000000000004d54d
- (void)handleCancellation;	// IMP=0x000000000004d475
- (void)handleError:(id)arg1 forResponseIdentifier:(id)arg2;	// IMP=0x000000000004d3d0
- (void)handleResponse:(id)arg1;	// IMP=0x000000000004d25f
@property(readonly) NSString *searchTerm;
- (void)startWithService:(id)arg1;	// IMP=0x000000000004cffa
- (id)description;	// IMP=0x000000000004ce72
- (id)initWithSearchCompletion:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004cda9
- (id)initWithSearchString:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004ccce
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004cc12

@end

