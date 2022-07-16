//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsUtilities/XRIssueResponder-Protocol.h>

@class NSError, NSString;
@protocol XRIssueResponder;

@interface XRWrappingIssueResponder : NSObject <XRIssueResponder>
{
    NSError *_prototype;	// 8 = 0x8
    id <XRIssueResponder> _nextResponder;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000dc8f
- (void)handleIssue:(id)arg1 type:(short)arg2 from:(id)arg3;	// IMP=0x000000000000dab4
- (id)init;	// IMP=0x000000000000da30
- (id)initWithNextResponder:(id)arg1 prototype:(id)arg2;	// IMP=0x000000000000d99e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
