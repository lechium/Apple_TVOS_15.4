//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLAssetsdPrivacySupportServiceProtocol-Protocol.h>

@class NSString, PLAssetsdConnectionAuthorization;

@interface PLAssetsdPrivacySupportService : NSObject <PLAssetsdPrivacySupportServiceProtocol>
{
    PLAssetsdConnectionAuthorization *_connectionAuthorization;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004d7f86
- (void)setClientPrivacyOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000004d7eaa
- (void)presentLimitedLibraryPickerReprompt:(CDUnknownBlockType)arg1;	// IMP=0x00000000004d7c4f
- (id)initWithConnectionAuthorization:(id)arg1;	// IMP=0x00000000004d7be4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
