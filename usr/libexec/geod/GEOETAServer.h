//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@interface GEOETAServer : GEOServer
{
}

+ (id)identifier;	// IMP=0x0020000000015f15
- (void)cancelETARequestWithRequest:(id)arg1;	// IMP=0x0010000000053cc4
- (void)updateETARequestWithRequest:(id)arg1;	// IMP=0x0010000000053c28
- (void)startETARequestWithRequest:(id)arg1;	// IMP=0x0010000000053869
- (void)cancelSimpleETARequestWithRequest:(id)arg1;	// IMP=0x0010000000053715
- (void)startSimpleETARequestWithRequest:(id)arg1;	// IMP=0x001000000005346f
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0010000000015f22

@end

