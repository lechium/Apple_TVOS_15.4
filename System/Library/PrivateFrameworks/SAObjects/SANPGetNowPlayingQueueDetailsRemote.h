//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, SANPGetNowPlayingQueueDetails;

@interface SANPGetNowPlayingQueueDetailsRemote
{
}

+ (id)getNowPlayingQueueDetailsRemoteWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000183d0
+ (id)getNowPlayingQueueDetailsRemote;	// IMP=0x00000000000183be
- (_Bool)mutatingCommand;	// IMP=0x0000000000018448
- (_Bool)requiresResponse;	// IMP=0x0000000000018440
@property(nonatomic) double routeTimeout;
@property(retain, nonatomic) SANPGetNowPlayingQueueDetails *queueDetails;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
- (id)encodedClassName;	// IMP=0x00000000000183b1
- (id)groupIdentifier;	// IMP=0x000000000001839d

@end
