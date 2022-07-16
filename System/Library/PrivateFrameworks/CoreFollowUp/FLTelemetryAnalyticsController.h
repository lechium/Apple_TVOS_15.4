//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreFollowUp/FLTelemetryController-Protocol.h>

@class NSString;

@interface FLTelemetryAnalyticsController : NSObject <FLTelemetryController>
{
}

- (void)_captureItem:(id)arg1 event:(id)arg2 source:(id)arg3;	// IMP=0x00000000000084d7
- (void)captureItemRemoval:(id)arg1;	// IMP=0x00000000000084b7
- (void)captureItemView:(id)arg1;	// IMP=0x0000000000008497
- (void)captureItemAddition:(id)arg1;	// IMP=0x0000000000008477
- (void)captureCurrentState:(id)arg1;	// IMP=0x00000000000080d4
- (void)captureActionForItem:(id)arg1 withEvent:(unsigned long long)arg2 source:(unsigned long long)arg3;	// IMP=0x0000000000007fe8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

