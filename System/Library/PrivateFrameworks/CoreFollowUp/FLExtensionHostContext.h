//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <CoreFollowUp/FLExtensionHostContextInterface-Protocol.h>

@class NSString;
@protocol FLExtensionHostContextInterface;

@interface FLExtensionHostContext : NSExtensionContext <FLExtensionHostContextInterface>
{
    id <FLExtensionHostContextInterface> _delegate;	// 8 = 0x8
}

+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x000000000000aadd
+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x000000000000a9cf
- (void).cxx_destruct;	// IMP=0x000000000000af8a
@property(nonatomic) __weak id <FLExtensionHostContextInterface> delegate; // @synthesize delegate=_delegate;
- (void)extensionDidFinishWithUserInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000adad
- (void)extensionDidFinish;	// IMP=0x000000000000aca9
- (id)remoteContextWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ac26

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
