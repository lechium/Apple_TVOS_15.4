//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface WLKSiriBestPlayablesRequest
{
    NSArray *_statsIDs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000551ff
@property(readonly, copy, nonatomic) NSArray *statsIDs; // @synthesize statsIDs=_statsIDs;
- (void)makeRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000054fd0
- (id)initWithStatsIDs:(id)arg1;	// IMP=0x0000000000054f56
- (id)init;	// IMP=0x0000000000054f2b

@end

