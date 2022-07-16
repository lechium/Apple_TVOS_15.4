//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IntentsUI/INIntentDeliveringDelegate-Protocol.h>

@class NSString, UIApplication;

@interface INUIAppIntentForwardingActionExecutor : NSObject <INIntentDeliveringDelegate>
{
    id _handlerForIntent;	// 8 = 0x8
    UIApplication *_application;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000003485
@property(retain, nonatomic) UIApplication *application; // @synthesize application=_application;
- (void)intentDeliverer:(id)arg1 deliverIntent:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003379
- (void)executeAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002d96
- (id)initWithApplication:(id)arg1;	// IMP=0x0000000000002d2b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

