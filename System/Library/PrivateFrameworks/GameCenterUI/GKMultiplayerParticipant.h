//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterUI/NSCopying-Protocol.h>

@class GKPlayer;

@interface GKMultiplayerParticipant : NSObject <NSCopying>
{
    long long _type;	// 8 = 0x8
    long long _status;	// 16 = 0x10
    GKPlayer *_player;	// 24 = 0x18
    long long _number;	// 32 = 0x20
}

+ (id)stringFromGKMultiplayerParticipantStatus:(long long)arg1;	// IMP=0x000000000002ec08
- (void).cxx_destruct;	// IMP=0x000000000002ed13
@property(nonatomic) long long number; // @synthesize number=_number;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x000000000002eb05
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002ea90
- (unsigned long long)hash;	// IMP=0x000000000002ea64
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002e978
- (id)init;	// IMP=0x000000000002e93c

@end
