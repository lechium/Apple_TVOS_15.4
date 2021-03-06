//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AskPermission/NSExtensionRequestHandling-Protocol.h>

@class NSExtensionContext, NSString;

@interface APRequestExtension : NSObject <NSExtensionRequestHandling>
{
    NSExtensionContext *_extensionContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000046f8
@property(retain, nonatomic) NSExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
- (void)beginRequestWithExtensionContext:(id)arg1;	// IMP=0x00000000000040e1
- (void)_finish;	// IMP=0x0000000000003ef2
- (void)requestUpdatedWithResult:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003dbf
- (void)checkDownloadQueue;	// IMP=0x0000000000003cab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

