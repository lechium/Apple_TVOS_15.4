//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEODirectionsRequest, GEOETARequest, GEOQuickETARequest, NSString;

@interface GEOQuickETARequester : NSObject
{
    GEOQuickETARequest *_request;	// 8 = 0x8
    GEOETARequest *_simpleETARequest;	// 16 = 0x10
    GEODirectionsRequest *_directionsETARequest;	// 24 = 0x18
    NSString *_loggingFacility;	// 32 = 0x20
}

+ (_Bool)requestETAFromOrigin:(id)arg1 toDestinations:(id)arg2 transportType:(int)arg3 timepoint:(struct GEOTimepoint)arg4 includeDistance:(_Bool)arg5 commonOptions:(id)arg6 automobileOptions:(id)arg7 walkingOptions:(id)arg8 transitOptions:(id)arg9 cyclingOptions:(id)arg10 auditToken:(id)arg11 handler:(CDUnknownBlockType)arg12 callbackQueue:(id)arg13;	// IMP=0x0000000001163174
+ (_Bool)requestTrafficAndETAFromWaypoint:(id)arg1 toWaypoints:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000000116303d
- (void).cxx_destruct;	// IMP=0x00000000011644d4
- (void)cancel;	// IMP=0x0000000001162fa0
- (void)calculateETAFromAPI:(_Bool)arg1 includeSummary:(_Bool)arg2 WithResponseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000001162ef2
- (void)calculateETAFromAPI:(_Bool)arg1 WithResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000001162edb
- (void)calculateETAWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000001162ebf
- (void)_calculateRoutingETAWithSummary:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000001162af8
- (void)_calculateRoutingETAWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000001162ae1
- (void)_calculateSimpleETAFromAPI:(_Bool)arg1 includeSummary:(_Bool)arg2 WithHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000001162267
- (void)_calculateSimpleETAFromAPI:(_Bool)arg1 WithHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000001162250
- (id)initWithRequest:(id)arg1;	// IMP=0x00000000011621d2

@end

