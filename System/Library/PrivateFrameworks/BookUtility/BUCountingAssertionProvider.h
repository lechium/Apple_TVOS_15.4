//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol BUCountingAssertionProviderDelegate, OS_dispatch_queue;

@interface BUCountingAssertionProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
    id <BUCountingAssertionProviderDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001be3c
- (_Bool)_endAssertion;	// IMP=0x000000000001bdbd
- (_Bool)_beginAssertion;	// IMP=0x000000000001bd44
- (id)newAssertion;	// IMP=0x000000000001bb32
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000001ba88

@end
