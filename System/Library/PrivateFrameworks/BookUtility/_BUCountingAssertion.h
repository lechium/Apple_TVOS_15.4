//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BookUtility/BUAssertion-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface _BUCountingAssertion : NSObject <BUAssertion>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001ba60
- (void)invalidate;	// IMP=0x000000000001b9ca
- (void)dealloc;	// IMP=0x000000000001b98c
- (id)initWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b8e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

