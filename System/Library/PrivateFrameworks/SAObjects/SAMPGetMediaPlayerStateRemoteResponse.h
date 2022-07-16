//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSDictionary, NSString;

@interface SAMPGetMediaPlayerStateRemoteResponse <SAServerBoundCommand>
{
}

+ (id)getMediaPlayerStateRemoteResponseWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003e97b
+ (id)getMediaPlayerStateRemoteResponse;	// IMP=0x000000000003e969
- (_Bool)requiresResponse;	// IMP=0x000000000003e9c3
@property(copy, nonatomic) NSDictionary *routeResponses;
- (id)encodedClassName;	// IMP=0x000000000003e95c
- (id)groupIdentifier;	// IMP=0x000000000003e948

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
