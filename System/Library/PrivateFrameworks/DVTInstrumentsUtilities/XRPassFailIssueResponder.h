//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsUtilities/XRIssueResponder-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, XRIssueResponder;

@interface XRPassFailIssueResponder : NSObject <XRIssueResponder>
{
    id <XRIssueResponder> _nextResponder;	// 8 = 0x8
    NSMutableArray *_uniqueErrors;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_uniqueErrorsQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000e09a
- (id)failures;	// IMP=0x000000000000df82
@property(readonly) _Bool failureOccurred;
- (void)handleIssue:(id)arg1 type:(short)arg2 from:(id)arg3;	// IMP=0x000000000000dd68
- (id)init;	// IMP=0x000000000000dd54
- (id)initWithNextResponder:(id)arg1;	// IMP=0x000000000000dcb5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

