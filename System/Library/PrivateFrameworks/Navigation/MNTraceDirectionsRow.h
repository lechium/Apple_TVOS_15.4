//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNTracePlayerTimelineStreamObjectType-Protocol.h>

@class GEODirectionsRequest, GEODirectionsResponse, NSArray, NSError, NSString;

@interface MNTraceDirectionsRow : NSObject <MNTracePlayerTimelineStreamObjectType>
{
    double _requestTimestamp;	// 8 = 0x8
    double _responseTimestamp;	// 16 = 0x10
    GEODirectionsRequest *_request;	// 24 = 0x18
    GEODirectionsResponse *_response;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSArray *_waypoints;	// 48 = 0x30
    unsigned long long _selectedRouteIndex;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000062269
@property(nonatomic) unsigned long long selectedRouteIndex; // @synthesize selectedRouteIndex=_selectedRouteIndex;
@property(retain, nonatomic) NSArray *waypoints; // @synthesize waypoints=_waypoints;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) GEODirectionsResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) GEODirectionsRequest *request; // @synthesize request=_request;
@property(nonatomic) double responseTimestamp; // @synthesize responseTimestamp=_responseTimestamp;
@property(nonatomic) double requestTimestamp; // @synthesize requestTimestamp=_requestTimestamp;
@property(readonly, nonatomic) double position;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

