//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/TITypingSessionAggregatedEventObserver-Protocol.h>

@class NSString;
@protocol TIDPReportingDelegate;

@interface TIDPEventDispatcher : NSObject <TITypingSessionAggregatedEventObserver>
{
    id <TIDPReportingDelegate> _reportingDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000013380f
- (void)sessionDidEnd:(id)arg1 aligned:(id)arg2;	// IMP=0x0000000000133528
- (id)initWithReportingDelegate:(id)arg1;	// IMP=0x00000000001334ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
