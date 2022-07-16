//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServicesUI/AMSUIWebActionRunnable-Protocol.h>

@class AMSDialogRequest, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebDialogAction <AMSUIWebActionRunnable>
{
    _Bool _pauseTimeouts;	// 8 = 0x8
    AMSDialogRequest *_request;	// 16 = 0x10
    NSArray *_buttonModels;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000051d38
@property(retain, nonatomic) NSArray *buttonModels; // @synthesize buttonModels=_buttonModels;
@property(nonatomic) _Bool pauseTimeouts; // @synthesize pauseTimeouts=_pauseTimeouts;
@property(retain, nonatomic) AMSDialogRequest *request; // @synthesize request=_request;
- (id)runAction;	// IMP=0x000000000005151f
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x000000000005088e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

