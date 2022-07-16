//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSDThumperPushHandler : NSObject
{
    _Bool _thumperCallingAllowedOnDefaultPairedDeviceDefault;	// 8 = 0x8
}

@property(nonatomic) _Bool thumperCallingAllowedOnDefaultPairedDeviceDefault; // @synthesize thumperCallingAllowedOnDefaultPairedDeviceDefault=_thumperCallingAllowedOnDefaultPairedDeviceDefault;
- (void)updateUINotification;	// IMP=0x001000000008be56
- (void)displayPinRequestFailure;	// IMP=0x001000000008bc0d
- (void)displayIncomingPinCode:(id)arg1 fromID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008b607
- (void)pinCodeEnteredSuccessfully:(_Bool)arg1 cancelled:(_Bool)arg2 onPrimaryDevice:(id)arg3;	// IMP=0x001000000008b49a
- (void)resetOneTimeMessage;	// IMP=0x001000000008b494
- (void)displayServiceConfirmationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008b0c9
- (void)displayPinMessageForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008ab45
- (void)unenrollDevice:(id)arg1;	// IMP=0x001000000008aadf
- (void)enrollDevice:(id)arg1 forSenderIdentityUUID:(id)arg2;	// IMP=0x001000000008a936
- (id)serviceDescription;	// IMP=0x001000000008a8b5
- (const struct __CFString *)ctServiceType;	// IMP=0x001000000008a8a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

