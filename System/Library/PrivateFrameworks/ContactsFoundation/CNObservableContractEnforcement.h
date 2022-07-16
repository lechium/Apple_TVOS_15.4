//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNObserver-Protocol.h>

@class CNObservableContractTerminationContext, NSString;

@interface CNObservableContractEnforcement : NSObject <CNObserver>
{
    unsigned long long _state;	// 8 = 0x8
    CNObservableContractTerminationContext *_terminationContext;	// 16 = 0x10
}

+ (id)os_log;	// IMP=0x0000000000039ed5
+ (_Bool)shouldSwizzleNilResults;	// IMP=0x00000000000396d5
+ (_Bool)shouldEnforceRxProtocols;	// IMP=0x00000000000396bc
- (void).cxx_destruct;	// IMP=0x0000000000039f31
- (void)observerDidFailWithError:(id)arg1;	// IMP=0x0000000000039b9b
- (void)observerDidComplete;	// IMP=0x00000000000399a5
- (void)observerDidReceiveResult:(id)arg1;	// IMP=0x00000000000396ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

