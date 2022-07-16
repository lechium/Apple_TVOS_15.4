//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/NSURLSessionTaskDelegate-Protocol.h>

@class NSMapTable, NSString, NSURL, NSURLSession, WFOAuth2Credential;

@interface WFDropboxSessionManager : NSObject <NSURLSessionTaskDelegate>
{
    WFOAuth2Credential *_credential;	// 8 = 0x8
    NSURL *_baseURL;	// 16 = 0x10
    NSURL *_contentBaseURL;	// 24 = 0x18
    NSURLSession *_session;	// 32 = 0x20
    NSMapTable *_progressTable;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000365052
@property(readonly, nonatomic) NSMapTable *progressTable; // @synthesize progressTable=_progressTable;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) NSURL *contentBaseURL; // @synthesize contentBaseURL=_contentBaseURL;
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) WFOAuth2Credential *credential; // @synthesize credential=_credential;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x0000000000364f79
- (void)sendRPCRequestWithPath:(id)arg1 parameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000364d4a
- (id)sendContentUploadRequestWithPath:(id)arg1 parameters:(id)arg2 data:(id)arg3 inputStream:(id)arg4 progress:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000036476d
- (void)sendContentDownloadRequestWithPath:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3 parameters:(id)arg4 progress:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000003644c3
- (void)searchFiles:(id)arg1 inPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000036431d
- (void)downloadFile:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000003640fc
- (void)getExistingSharedLinkForFile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000363fd0
- (void)getSharedLinkForFile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000363e58
- (void)deleteItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000363d2c
- (id)saveFile:(id)arg1 toPath:(id)arg2 overwrite:(_Bool)arg3 progress:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000003636fe
- (void)createFolderAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003635d6
- (void)getContentsOfFolderWithParameters:(id)arg1 previous:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000363494
- (void)getContentsOfFolderAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000036339f
- (void)getItemAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000363277
- (id)initWithSessionConfiguration:(id)arg1;	// IMP=0x000000000036310b
- (id)init;	// IMP=0x00000000003630f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

