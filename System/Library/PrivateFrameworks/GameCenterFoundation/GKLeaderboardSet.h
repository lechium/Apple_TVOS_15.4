//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSCoding-Protocol.h>
#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class GKLeaderboardSetInternal, NSArray, NSString;

@interface GKLeaderboardSet : NSObject <NSCoding, NSSecureCoding>
{
    GKLeaderboardSetInternal *_internal;	// 8 = 0x8
}

+ (void)loadLeaderboardSetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000eafe9
+ (void)loadLeaderboardSetsForGame:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000eabe1
+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x00000000000e9f37
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000e9db0
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e9af1
- (void).cxx_destruct;	// IMP=0x00000000000eb175
@property(retain) GKLeaderboardSetInternal *internal; // @synthesize internal=_internal;
- (void)loadLeaderboardsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ea748
- (void)loadLeaderboardsForGame:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ea6a7
- (void)loadLeaderboardsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ea542
- (void)loadLeaderboardsForGame:(id)arg1 forPlayer:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ea097
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000000ea011
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000000000e9f8e
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000e9ebc
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000e9e22
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000e9d9e
- (id)description;	// IMP=0x00000000000e9cd4
- (unsigned long long)hash;	// IMP=0x00000000000e9c90
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e9bff
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e9b86
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e9af9
- (id)init;	// IMP=0x00000000000e9add
- (id)initWithInternalRepresentation:(id)arg1;	// IMP=0x00000000000e9a51

// Remaining properties
@property(readonly, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(readonly, retain, nonatomic) NSArray *leaderboardIdentifiers; // @dynamic leaderboardIdentifiers;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

