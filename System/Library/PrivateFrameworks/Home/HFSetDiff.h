//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>
#import <Home/NSMutableCopying-Protocol.h>

@class NSMutableSet, NSSet;

@interface HFSetDiff : NSObject <NSCopying, NSMutableCopying>
{
    NSSet *_fromSet;	// 8 = 0x8
    NSMutableSet *_toSet;	// 16 = 0x10
    NSMutableSet *_additions;	// 24 = 0x18
    NSMutableSet *_deletions;	// 32 = 0x20
    NSMutableSet *_updates;	// 40 = 0x28
}

+ (id)diffFromSet:(id)arg1 toSet:(id)arg2;	// IMP=0x0000000000268b13
- (void).cxx_destruct;	// IMP=0x0000000000269701
@property(readonly, nonatomic) NSSet *toSet; // @synthesize toSet=_toSet;
@property(readonly, nonatomic) NSSet *fromSet; // @synthesize fromSet=_fromSet;
@property(readonly, nonatomic) NSSet *updates; // @synthesize updates=_updates;
@property(readonly, nonatomic) NSSet *deletions; // @synthesize deletions=_deletions;
@property(readonly, nonatomic) NSSet *additions; // @synthesize additions=_additions;
- (id)description;	// IMP=0x00000000002695b8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002695ad
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000026943d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000026922e
- (id)diffByMergingDiff:(id)arg1 keyGenerator:(CDUnknownBlockType)arg2;	// IMP=0x0000000000268dc4
- (unsigned long long)hash;	// IMP=0x0000000000268d80
- (id)_initWithFromSet:(id)arg1 toSet:(id)arg2 additions:(id)arg3 deletions:(id)arg4 updates:(id)arg5;	// IMP=0x0000000000268c7e

@end

