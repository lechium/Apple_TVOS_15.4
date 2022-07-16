//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IMDDController : NSObject
{
    NSObject<OS_dispatch_queue> *_scannerQueue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000010e72f
- (void).cxx_destruct;	// IMP=0x000000000010f181
- (void)scanMessage:(id)arg1 waitUntilDone:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000010ed53
- (_Bool)_scanAttributedStringWithMessage:(id)arg1 attributedString:(id)arg2 plainText:(id)arg3;	// IMP=0x000000000010ebd5
- (void)_processLinkInAttributedString:(id)arg1;	// IMP=0x000000000010ea3b
- (_Bool)_scanMessageUsingScanner:(id)arg1 attributedString:(id)arg2;	// IMP=0x000000000010e8c8
- (void)scanMessage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000010e7f4
- (id)scannerQueue;	// IMP=0x000000000010e7e6
- (struct __DDScanner *)sharedScanner;	// IMP=0x000000000010e7dc
- (id)init;	// IMP=0x000000000010e784

@end
