//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MSSaveEmail
{
}

+ (void)securityScopeForPlaceholderURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000071d6
+ (void)deletePlaceholderAttachmentForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006fb1
+ (void)placeholderAttachmentForURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000006cf2
+ (void)placeholderAttachmentForData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000006995
+ (void)placeholderAttachmentForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000066bd
+ (void)saveEmail:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006261
+ (void)saveMessageData:(id)arg1 forAccountWithID:(id)arg2 autosaveIdentifier:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000006205
- (void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000065ec
- (void)_saveMessageData:(id)arg1 forAccountWithID:(id)arg2 autosaveIdentifier:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000000645d
- (void)_saveEmail:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000062a9

@end
