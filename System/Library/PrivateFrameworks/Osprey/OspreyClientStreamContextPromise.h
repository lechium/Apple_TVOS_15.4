//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Osprey/OspreyClientStreamingContext-Protocol.h>

@class NSString, OspreyDeferredObject;

__attribute__((visibility("hidden")))
@interface OspreyClientStreamContextPromise : NSObject <OspreyClientStreamingContext>
{
    OspreyDeferredObject *_deferredContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000bb62
- (void)writeFrame:(id)arg1 compressed:(_Bool)arg2;	// IMP=0x000000000000baa9
- (void)writeFrame:(id)arg1;	// IMP=0x000000000000b9fb
- (void)finishWriting;	// IMP=0x000000000000b9c9
- (void)fulfill:(id)arg1;	// IMP=0x000000000000b9b3
- (id)initWithFulfillmentQueue:(id)arg1;	// IMP=0x000000000000b931

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
