//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/_HKBackgroundObservationExtensionRemoteXPCInterface-Protocol.h>

@class HKBackgroundObservationExtension, NSString;

@interface _HKBackgroundObservationExtensionRemoteContext <_HKBackgroundObservationExtensionRemoteXPCInterface>
{
    HKBackgroundObservationExtension *_extensionInstance;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000cd180
@property(retain, nonatomic) HKBackgroundObservationExtension *extensionInstance; // @synthesize extensionInstance=_extensionInstance;
- (void)backgroundObservationExtensionTimeWillExpire;	// IMP=0x00000000000cd057
- (void)didReceiveUpdateForSampleType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ccef8
- (void)performCleanup;	// IMP=0x00000000000cce04
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;	// IMP=0x00000000000ccd97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

