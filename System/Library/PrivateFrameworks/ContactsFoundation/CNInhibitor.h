//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNInhibitor-Protocol.h>

@class NSString;

@interface CNInhibitor : NSObject <CNInhibitor>
{
    _Bool _debugIsInhibiting;	// 8 = 0x8
}

+ (id)runningboardInhibitorWithExplanation:(id)arg1;	// IMP=0x000000000004c426
+ (id)os_transactionInhibitorWithLabel:(id)arg1;	// IMP=0x000000000004c3d9
+ (id)suddenTerminationInhibitorWithProcessInfo:(id)arg1;	// IMP=0x000000000004c38c
+ (id)suddenTerminationInhibitor;	// IMP=0x000000000004c373
@property(nonatomic) _Bool debugIsInhibiting; // @synthesize debugIsInhibiting=_debugIsInhibiting;
- (void)stop;	// IMP=0x000000000004c4b9
- (void)start;	// IMP=0x000000000004c4a2
- (void)dealloc;	// IMP=0x000000000004c473

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

