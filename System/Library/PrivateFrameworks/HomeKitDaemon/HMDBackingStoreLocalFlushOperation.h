//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class HMDBackingStoreLocal;

@interface HMDBackingStoreLocalFlushOperation : NSOperation
{
    _Bool _clearCloud;	// 8 = 0x8
    HMDBackingStoreLocal *_store;	// 16 = 0x10
    CDUnknownBlockType _resultHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000075e47b
@property(nonatomic) _Bool clearCloud; // @synthesize clearCloud=_clearCloud;
@property(copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(retain, nonatomic) HMDBackingStoreLocal *store; // @synthesize store=_store;
- (void)main;	// IMP=0x000000000075de46
- (id)initWithStore:(id)arg1 clearCloud:(_Bool)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000075dd7a

@end

