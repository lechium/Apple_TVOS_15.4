//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNCancelable-Protocol.h>
#import <ContactsFoundation/CNCancelationToken-Protocol.h>

@class NSMutableArray, NSString;

@interface CNCancelationToken : NSObject <CNCancelable, CNCancelationToken>
{
    _Bool _isCanceled;	// 8 = 0x8
    NSMutableArray *_cancelationBlocks;	// 16 = 0x10
}

+ (id)tokenWrappingCancelable:(id)arg1;	// IMP=0x000000000003a501
+ (id)tokenWithCancelationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003a4ab
- (void).cxx_destruct;	// IMP=0x000000000003aa06
- (void)callCancelationBlocks:(id)arg1;	// IMP=0x000000000003a8ff
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003a89a
- (_Bool)isCanceled;	// IMP=0x000000000003a865
- (void)addCancelable:(id)arg1;	// IMP=0x000000000003a7c1
- (void)addCancelationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003a709
- (id)nts_cancel;	// IMP=0x000000000003a6a2
- (void)cancel;	// IMP=0x000000000003a61f
- (id)init;	// IMP=0x000000000003a5b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

