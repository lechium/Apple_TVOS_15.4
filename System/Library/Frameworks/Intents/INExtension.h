//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INIntentHandlerProviding-Protocol.h>
#import <Intents/NSExtensionRequestHandling-Protocol.h>

@class INExtensionContext, NSString;

@interface INExtension : NSObject <NSExtensionRequestHandling, INIntentHandlerProviding>
{
    INExtensionContext *_extensionContext;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x000000000006fb8b
- (void).cxx_destruct;	// IMP=0x000000000006fb7b
@property(readonly, nonatomic) INExtensionContext *_extensionContext; // @synthesize _extensionContext;
- (id)handlerForIntent:(id)arg1;	// IMP=0x000000000006fb64
- (void)beginRequestWithExtensionContext:(id)arg1;	// IMP=0x000000000006faa5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

