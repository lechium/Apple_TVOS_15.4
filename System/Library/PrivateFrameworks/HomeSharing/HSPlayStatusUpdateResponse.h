//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface HSPlayStatusUpdateResponse
{
    unsigned int _nextRevisionID;	// 8 = 0x8
    unsigned long long _nowPlayingContainerID;	// 16 = 0x10
    unsigned long long _nowPlayingContainerItemID;	// 24 = 0x18
    unsigned long long _nowPlayingDatabaseID;	// 32 = 0x20
    unsigned long long _nowPlayingItemID;	// 40 = 0x28
    NSDictionary *_playStatusInformation;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000034ae
@property(copy, nonatomic) NSDictionary *playStatusInformation; // @synthesize playStatusInformation=_playStatusInformation;
@property(nonatomic) unsigned long long nowPlayingItemID; // @synthesize nowPlayingItemID=_nowPlayingItemID;
@property(nonatomic) unsigned long long nowPlayingDatabaseID; // @synthesize nowPlayingDatabaseID=_nowPlayingDatabaseID;
@property(nonatomic) unsigned long long nowPlayingContainerItemID; // @synthesize nowPlayingContainerItemID=_nowPlayingContainerItemID;
@property(nonatomic) unsigned long long nowPlayingContainerID; // @synthesize nowPlayingContainerID=_nowPlayingContainerID;
@property(nonatomic) unsigned int nextRevisionID; // @synthesize nextRevisionID=_nextRevisionID;
- (id)description;	// IMP=0x0000000000003359

@end

