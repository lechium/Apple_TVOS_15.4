//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSInvalidatable-Protocol.h>

@class NSString;

@interface BSStateCaptureInvalidator : NSObject <BSInvalidatable>
{
    unsigned long long _handle;	// 8 = 0x8
    _Bool _invalidated;	// 16 = 0x10
}

- (void)invalidate;	// IMP=0x000000000006a8ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

