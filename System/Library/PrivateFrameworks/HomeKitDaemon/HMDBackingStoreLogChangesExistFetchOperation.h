//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HMDBackingStoreLogChangesExistFetchOperation
{
    CDUnknownBlockType _fetchBlock;	// 40 = 0x28
    long long _maskValue;	// 48 = 0x30
    long long _compareValue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000080c393
@property(nonatomic) long long compareValue; // @synthesize compareValue=_compareValue;
@property(nonatomic) long long maskValue; // @synthesize maskValue=_maskValue;
@property(copy, nonatomic) CDUnknownBlockType fetchBlock; // @synthesize fetchBlock=_fetchBlock;
- (id)mainReturningError;	// IMP=0x000000000080c055
- (id)initWithNeedsPushTo:(unsigned long long)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x000000000080bfa9

@end

