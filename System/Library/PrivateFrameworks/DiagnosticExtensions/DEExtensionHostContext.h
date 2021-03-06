//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <DiagnosticExtensions/DEExtensionHostProtocol-Protocol.h>

@class NSString;

@interface DEExtensionHostContext : NSExtensionContext <DEExtensionHostProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x00000000000058e6
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x0000000000005759
- (void)isExtensionEnhancedLoggingStateOnWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000639a
- (void)teardownForParameters:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006266
- (void)setupForParameters:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006132
- (void)attachmentsForParameters:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005b3b
- (void)attachmentListWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005a0c
- (_Bool)hasEntitlement;	// IMP=0x0000000000005952

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

