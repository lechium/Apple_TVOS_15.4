//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSBlockTransaction.h>

@interface TVSBlockTransaction : BSBlockTransaction
{
    CDUnknownBlockType _failsForChildTransactionBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003fb60
@property(copy, nonatomic) CDUnknownBlockType failsForChildTransactionBlock; // @synthesize failsForChildTransactionBlock=_failsForChildTransactionBlock;
- (_Bool)_shouldFailForChildTransaction:(id)arg1;	// IMP=0x000000000003faee
- (id)initWithBlock:(CDUnknownBlockType)arg1 failsForChildTransaction:(CDUnknownBlockType)arg2;	// IMP=0x000000000003fa83

@end

