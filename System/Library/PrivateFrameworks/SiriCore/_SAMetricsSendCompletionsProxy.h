//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _SAMetricsSendCompletionsProxy : NSObject
{
    NSMutableArray *_blocks;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000030201
- (void)dispatchBlocksWithResult:(long long)arg1 error:(id)arg2;	// IMP=0x000000000003008a
- (void)addBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030026
- (void)dealloc;	// IMP=0x000000000002ffe1
- (id)init;	// IMP=0x000000000002ff8b

@end
