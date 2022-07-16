//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSSimpleAssertion, NSString;

@interface PBDialogHiddenAssertion : NSObject
{
    NSString *_reason;	// 8 = 0x8
    BSSimpleAssertion *_assertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001cc9c0
@property(readonly, nonatomic) BSSimpleAssertion *assertion; // @synthesize assertion=_assertion;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void)invalidate;	// IMP=0x00100000001cc950
- (void)dealloc;	// IMP=0x00100000001cc900
- (id)initWithReason:(id)arg1;	// IMP=0x00100000001cc680

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
