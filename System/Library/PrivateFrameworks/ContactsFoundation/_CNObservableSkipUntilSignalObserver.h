//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNObserver-Protocol.h>

@class NSString;
@protocol _CNObservableSkipUntilSignalObserverDelegate;

@interface _CNObservableSkipUntilSignalObserver : NSObject <CNObserver>
{
    id <_CNObservableSkipUntilSignalObserverDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000048345
@property(readonly) __weak id <_CNObservableSkipUntilSignalObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observerDidFailWithError:(id)arg1;	// IMP=0x00000000000482f2
- (void)observerDidComplete;	// IMP=0x00000000000482b5
- (void)observerDidReceiveResult:(id)arg1;	// IMP=0x0000000000048278
@property(readonly, copy) NSString *description;
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000048157

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

