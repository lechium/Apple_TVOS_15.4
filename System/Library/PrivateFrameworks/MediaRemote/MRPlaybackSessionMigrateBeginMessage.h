//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRPlaybackSessionRequest, MRPlayerPath;

@interface MRPlaybackSessionMigrateBeginMessage
{
}

- (unsigned long long)type;	// IMP=0x00000000001a32ec
@property(readonly, nonatomic) MRPlayerPath *playerPath;
@property(readonly, nonatomic) MRPlaybackSessionRequest *request;
- (id)initWithRequest:(id)arg1 playerPath:(id)arg2;	// IMP=0x00000000001a30d1

@end

