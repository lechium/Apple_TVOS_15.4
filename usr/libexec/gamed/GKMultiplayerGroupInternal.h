//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString;

@interface GKMultiplayerGroupInternal
{
    NSMutableArray *_participants;	// 8 = 0x8
    long long _numberOfAutomached;	// 16 = 0x10
    long long _playedAt;	// 24 = 0x18
    NSString *_groupID;	// 32 = 0x20
}

+ (id)secureCodedPropertyKeys;	// IMP=0x004000000000274c
- (void).cxx_destruct;	// IMP=0x0020000000002a7d
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(nonatomic) long long playedAt; // @synthesize playedAt=_playedAt;
@property(nonatomic) long long numberOfAutomached; // @synthesize numberOfAutomached=_numberOfAutomached;
@property(retain, nonatomic) NSMutableArray *participants; // @synthesize participants=_participants;
- (id)description;	// IMP=0x00100000000028ae

@end

