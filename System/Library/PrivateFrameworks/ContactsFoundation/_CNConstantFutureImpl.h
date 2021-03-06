//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNFutureImpl-Protocol.h>

@class NSString;

@interface _CNConstantFutureImpl : NSObject <CNFutureImpl>
{
    id _result;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000bd32
- (void)updateDescriptionWithBuilder:(id)arg1;	// IMP=0x000000000000bd06
- (_Bool)cancel;	// IMP=0x000000000000bcfe
- (_Bool)isCancelled;	// IMP=0x000000000000bcf6
- (_Bool)isFinished;	// IMP=0x000000000000bcee
- (void)addFailureBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000bce8
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000bcd6
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000bcc8
- (id)initWithResult:(id)arg1;	// IMP=0x000000000000bc4a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

