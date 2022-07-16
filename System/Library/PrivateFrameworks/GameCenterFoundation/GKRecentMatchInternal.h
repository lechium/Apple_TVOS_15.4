//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameRecordInternal, GKPlayerInternal, NSDate;

@interface GKRecentMatchInternal
{
    GKPlayerInternal *_player;	// 8 = 0x8
    GKGameRecordInternal *_game;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
}

+ (id)secureCodedPropertyKeys;	// IMP=0x00000000000f5255
- (void).cxx_destruct;	// IMP=0x00000000000f5623
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) GKGameRecordInternal *game; // @synthesize game=_game;
@property(retain, nonatomic) GKPlayerInternal *player; // @synthesize player=_player;
- (unsigned long long)hash;	// IMP=0x00000000000f54f3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f534f

@end

