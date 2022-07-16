//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKAutomatchPlayerInternal
{
    long long _automatchPosition;	// 200 = 0xc8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f8eb3
@property(nonatomic) long long automatchPosition; // @synthesize automatchPosition=_automatchPosition;
@property(readonly, nonatomic) NSString *automatchPositionDisplayString;
- (_Bool)isAutomatchPlayer;	// IMP=0x00000000000f8f2a
- (id)alias;	// IMP=0x00000000000f8ee2
- (id)teamPlayerID;	// IMP=0x00000000000f8ed5
- (id)gamePlayerID;	// IMP=0x00000000000f8ec8
- (id)playerID;	// IMP=0x00000000000f8ebb

@end
