//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/DAResolveRecipientsConsumer-Protocol.h>

@class MFConditionLock, NSDictionary, NSError;

@interface _MFDAResolveRecipientsConsumer : NSObject <DAResolveRecipientsConsumer>
{
    MFConditionLock *_conditionLock;	// 8 = 0x8
    NSDictionary *_resolvedRecipientsByEmailAddress;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

- (void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3;	// IMP=0x000000000007c5ef
- (void)resolvedRecipientsByEmailAddress:(id)arg1;	// IMP=0x000000000007c59a
- (id)waitForResolvedRecipients;	// IMP=0x000000000007c542
@property(readonly) NSError *error;
- (void)dealloc;	// IMP=0x000000000007c49e
- (id)init;	// IMP=0x000000000007c436

@end

