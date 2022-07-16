//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TipsDaemon/TPSEventsProviderDelegate-Protocol.h>

@class NSString, TPSContextualEvent, TPSEventsProvider;

@interface TPSContextualEventValidation <TPSEventsProviderDelegate>
{
    TPSContextualEvent *_event;	// 8 = 0x8
    TPSEventsProvider *_eventProvider;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000100d8
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) TPSEventsProvider *eventProvider; // @synthesize eventProvider=_eventProvider;
@property(retain, nonatomic) TPSContextualEvent *event; // @synthesize event=_event;
- (void)dataProvider:(id)arg1 didReceiveCallbackWithResult:(id)arg2;	// IMP=0x0000000000010066
- (void)dataProvider:(id)arg1 didFinishQueryWithResults:(id)arg2;	// IMP=0x000000000000fe59
- (void)validateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000fb6a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

