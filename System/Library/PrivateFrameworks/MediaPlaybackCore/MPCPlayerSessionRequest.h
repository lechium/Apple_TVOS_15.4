//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPRequest.h>

#import <MediaPlaybackCore/MPCMediaRemoteMiddlewareMetadataOperationConfiguration-Protocol.h>

@class MPCPlayerPath, MPPropertySet, NSString;

@interface MPCPlayerSessionRequest : MPRequest <MPCMediaRemoteMiddlewareMetadataOperationConfiguration>
{
    MPCPlayerPath *_playerPath;	// 8 = 0x8
    MPPropertySet *_sessionProperties;	// 16 = 0x10
}

+ (Class)responseClass;	// IMP=0x000000000006258a
- (void).cxx_destruct;	// IMP=0x0000000000062559
@property(copy, nonatomic) MPPropertySet *sessionProperties; // @synthesize sessionProperties=_sessionProperties;
@property(retain, nonatomic) MPCPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(readonly, nonatomic) MPPropertySet *queueSectionProperties;
@property(readonly, nonatomic) MPPropertySet *queueItemProperties;
@property(readonly, nonatomic) MPPropertySet *playingItemProperties;
@property(readonly) CDStruct_339ad95e tracklistRange;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000062479
- (id)middlewareClasses;	// IMP=0x000000000006240d
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0000000000062262

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *preferredFallbackItemRelationship;
@property(readonly) Class superclass;

@end
