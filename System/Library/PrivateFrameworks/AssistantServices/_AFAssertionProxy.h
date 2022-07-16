//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFRelinquishableAssertion-Protocol.h>

@class AFAssertionContext, AFAssertionCoordinator, NSString, NSUUID, _AFAssertionImpl;

@interface _AFAssertionProxy : NSObject <AFRelinquishableAssertion>
{
    _AFAssertionImpl *_impl;	// 8 = 0x8
    AFAssertionCoordinator *_coordinator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002b0f5
@property(readonly, nonatomic) AFAssertionContext *context;
@property(readonly, nonatomic) NSUUID *uuid;
- (void)dealloc;	// IMP=0x000000000002b06c
- (void)relinquishWithError:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000002afba
- (void)relinquishWithContext:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000002af08
- (id)initWithImpl:(id)arg1 coordinator:(id)arg2;	// IMP=0x000000000002ae44
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

