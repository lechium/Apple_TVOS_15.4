//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/WFCombineTextIntentHandling-Protocol.h>

@class NSString;

@interface WFCombineTextIntentHandler : NSObject <WFCombineTextIntentHandling>
{
}

- (void)handleCombineText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000287e59
- (void)resolveTextForCombineText:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000287dc7
- (void)resolveSeparatorForCombineText:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000287d05
- (void)resolveCustomSeparatorForCombineText:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000287c09

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

