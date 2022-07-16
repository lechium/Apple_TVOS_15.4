//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKGame, GKPlayer, GKRecentMatchInternal, NSDate;

@interface GKGameMatch : NSObject
{
    GKRecentMatchInternal *_internal;	// 8 = 0x8
    GKGame *_game;	// 16 = 0x10
    GKPlayer *_player;	// 24 = 0x18
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x000000000001fb80
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000001f9f9
- (void).cxx_destruct;	// IMP=0x000000000001fe43
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain) GKRecentMatchInternal *internal; // @synthesize internal=_internal;
- (unsigned long long)hash;	// IMP=0x000000000001fda6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001fce0
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x000000000001fc5a
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x000000000001fbd7
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000001fb05
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000001fa6b
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000001f9e7
- (id)description;	// IMP=0x000000000001f8eb
- (id)init;	// IMP=0x000000000001f8d5
- (id)initWithInternalRepresentation:(id)arg1 game:(id)arg2;	// IMP=0x000000000001f6f9

// Remaining properties
@property(retain, nonatomic) NSDate *date; // @dynamic date;

@end
