//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRPlaybackSession, MRPlaybackSessionMigrateRequest, MRPlayerPath;

@interface MRPlaybackSessionMigrateRequestMessage
{
}

- (unsigned long long)type;	// IMP=0x00000000001a2f77
@property(readonly, nonatomic) MRPlayerPath *playerPath;
@property(readonly, nonatomic) MRPlaybackSessionMigrateRequest *request;
@property(readonly, nonatomic) MRPlaybackSession *playbackSession;
- (id)initWithPlaybackSession:(id)arg1 request:(id)arg2 forPlayerPath:(id)arg3;	// IMP=0x00000000001a2c91

@end

