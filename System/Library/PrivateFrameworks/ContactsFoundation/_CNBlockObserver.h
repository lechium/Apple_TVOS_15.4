//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNObserver-Protocol.h>

@class CNObservableContractEnforcement, NSString;

@interface _CNBlockObserver : NSObject <CNObserver>
{
    CDUnknownBlockType _resultBlock;	// 8 = 0x8
    CDUnknownBlockType _completionBlock;	// 16 = 0x10
    CDUnknownBlockType _failureBlock;	// 24 = 0x18
    CNObservableContractEnforcement *_enforcement;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006d2df
- (void)observerDidFailWithError:(id)arg1;	// IMP=0x000000000006d28f
- (void)observerDidComplete;	// IMP=0x000000000006d268
- (void)observerDidReceiveResult:(id)arg1;	// IMP=0x000000000006d14d
- (id)initWithResultBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000006cff3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
