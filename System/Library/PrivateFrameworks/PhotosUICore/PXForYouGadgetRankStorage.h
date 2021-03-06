//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGadgetRankStorage-Protocol.h>

@class NSString;

@interface PXForYouGadgetRankStorage : NSObject <PXGadgetRankStorage>
{
    NSString *_prefix;	// 8 = 0x8
}

+ (id)customStorage;	// IMP=0x0000000000772d4e
+ (id)defaultStorage;	// IMP=0x0000000000772d1e
+ (id)rankableGadgetTypes;	// IMP=0x0000000000772cee
- (void).cxx_destruct;	// IMP=0x0000000000772c32
- (_Bool)hasAnyStoredRank;	// IMP=0x0000000000772b57
- (id)_keyForGadgetType:(unsigned long long)arg1;	// IMP=0x0000000000772ae5
- (void)setRank:(long long)arg1 forGadgetType:(unsigned long long)arg2;	// IMP=0x0000000000772a3e
- (unsigned long long)gadgetTypeForRank:(long long)arg1;	// IMP=0x0000000000772955
- (long long)rankForGadgetType:(unsigned long long)arg1;	// IMP=0x00000000007728b0
- (void)resetStoredRanks;	// IMP=0x000000000077282a
- (id)init;	// IMP=0x0000000000772811
- (id)_initWithPrefix:(id)arg1;	// IMP=0x00000000007727a6

@end

