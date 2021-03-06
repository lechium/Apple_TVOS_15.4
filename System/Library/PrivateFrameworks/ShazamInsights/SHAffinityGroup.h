//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface SHAffinityGroup : NSObject
{
    long long _groupType;	// 8 = 0x8
    long long _cohesionLevel;	// 16 = 0x10
    NSMutableArray *_mutableMediaItems;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000f155
@property(retain, nonatomic) NSMutableArray *mutableMediaItems; // @synthesize mutableMediaItems=_mutableMediaItems;
@property(readonly, nonatomic) long long cohesionLevel; // @synthesize cohesionLevel=_cohesionLevel;
@property(readonly, nonatomic) long long groupType; // @synthesize groupType=_groupType;
@property(readonly, nonatomic) NSArray *mediaItems;
- (void)appendMediaItem:(id)arg1;	// IMP=0x000000000000f06c
- (id)initWithType:(long long)arg1 cohesionLevel:(long long)arg2;	// IMP=0x000000000000eff0
- (id)init;	// IMP=0x000000000000efd4

@end

