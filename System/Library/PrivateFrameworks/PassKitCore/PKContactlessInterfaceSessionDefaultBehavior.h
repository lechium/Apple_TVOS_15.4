//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKContactlessInterfaceSessionDelegate-Protocol.h>

@class NSString;

@interface PKContactlessInterfaceSessionDefaultBehavior : NSObject <PKContactlessInterfaceSessionDelegate>
{
}

+ (void)attachDefaultBehaviorToSession:(id)arg1;	// IMP=0x000000000026dc46
- (void)_processContext:(id)arg1;	// IMP=0x000000000026dd81
- (void)contactlessInterfaceSession:(id)arg1 didEndPersistentCardEmulationWithContext:(id)arg2;	// IMP=0x000000000026dd6c
- (void)contactlessInterfaceSession:(id)arg1 didFinishTransactionWithContext:(id)arg2;	// IMP=0x000000000026dcd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

