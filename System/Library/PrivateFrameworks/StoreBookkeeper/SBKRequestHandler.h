//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBKStoreURLBagContext;

@interface SBKRequestHandler : NSObject
{
    SBKStoreURLBagContext *_bagContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002510f
@property(readonly, nonatomic) SBKStoreURLBagContext *bagContext; // @synthesize bagContext=_bagContext;
- (void)cancel;	// IMP=0x000000000002508b
- (void)timeout;	// IMP=0x0000000000025011
- (id)initWithBagContext:(id)arg1;	// IMP=0x0000000000024fa6

@end

