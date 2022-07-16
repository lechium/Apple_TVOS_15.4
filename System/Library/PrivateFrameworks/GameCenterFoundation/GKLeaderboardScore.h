//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKPlayer, NSString;

@interface GKLeaderboardScore : NSObject
{
    GKPlayer *_player;	// 8 = 0x8
    long long _value;	// 16 = 0x10
    unsigned long long _context;	// 24 = 0x18
    NSString *_leaderboardID;	// 32 = 0x20
}

+ (id)convertToGKScore:(id)arg1;	// IMP=0x000000000003a4e3
- (void).cxx_destruct;	// IMP=0x000000000003a8a1
@property(retain, nonatomic) NSString *leaderboardID; // @synthesize leaderboardID=_leaderboardID;
@property(nonatomic) unsigned long long context; // @synthesize context=_context;
@property(nonatomic) long long value; // @synthesize value=_value;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;

@end

