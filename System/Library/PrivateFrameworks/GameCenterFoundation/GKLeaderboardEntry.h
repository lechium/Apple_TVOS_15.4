//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKLeaderboardEntryInternal, GKPlayer, NSDate, NSString;

@interface GKLeaderboardEntry : NSObject
{
    GKLeaderboardEntryInternal *_internal;	// 8 = 0x8
}

+ (id)formattedDifferenceBetweenFirstScore:(id)arg1 secondScore:(id)arg2;	// IMP=0x00000000000ac1ea
- (void).cxx_destruct;	// IMP=0x00000000000ac4f4
@property(retain) GKLeaderboardEntryInternal *internal; // @synthesize internal=_internal;
- (id)description;	// IMP=0x00000000000ac38c
- (id)_gkScore;	// IMP=0x00000000000ac203
@property(readonly, nonatomic) GKPlayer *player;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000ac14e
- (id)initWithInternalRepresentation:(id)arg1;	// IMP=0x00000000000ac0e6

// Remaining properties
@property(readonly, nonatomic) unsigned long long context; // @dynamic context;
@property(readonly, nonatomic) NSDate *date; // @dynamic date;
@property(readonly, nonatomic) NSString *formattedScore; // @dynamic formattedScore;
@property(readonly, nonatomic) long long rank; // @dynamic rank;
@property(readonly, nonatomic) long long score; // @dynamic score;

@end

