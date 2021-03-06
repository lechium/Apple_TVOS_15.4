//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/SFContinuityScanManagerObserver-Protocol.h>

@class NSString, NSUUID;
@protocol SFActivityScannerDelegate;

@interface SFActivityScanner : NSObject <SFContinuityScanManagerObserver>
{
    id <SFActivityScannerDelegate> _delegate;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000043da6
@property(retain) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)scanManager:(id)arg1 pairedDevicesChanged:(id)arg2;	// IMP=0x0000000000043ca3
- (void)scanManager:(id)arg1 lostDeviceWithDevice:(id)arg2;	// IMP=0x0000000000043bc3
- (void)scanManager:(id)arg1 foundDeviceWithDevice:(id)arg2;	// IMP=0x0000000000043ae3
- (void)scanManager:(id)arg1 receivedAdvertisement:(id)arg2;	// IMP=0x0000000000043a03
- (void)activityPayloadFromDevice:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000437df
- (void)scanForTypes:(unsigned long long)arg1;	// IMP=0x000000000004378c
@property(readonly) id <SFActivityScannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x00000000000436d4
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000000435ef
- (id)init;	// IMP=0x000000000004359e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

