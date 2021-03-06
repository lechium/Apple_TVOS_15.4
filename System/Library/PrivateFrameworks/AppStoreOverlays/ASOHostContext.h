//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <AppStoreOverlays/ASOHostProtocol-Protocol.h>

@class NSString;

@interface ASOHostContext : NSExtensionContext <ASOHostProtocol>
{
}

+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x00000000000016fe
+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x0000000000001692
- (void)dismissOverlayWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000198d
- (void)presentOverlayWithConfiguration:(id)arg1 delegate:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000018f3
- (id)serviceContext;	// IMP=0x00000000000018a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

