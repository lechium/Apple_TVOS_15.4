//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDFinisher-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSSecureCoding-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSURLSessionDataDelegate-Protocol.h>

@class DEDBugSession, DEDBugSessionConfiguration, NSMutableSet, NSString, NSURLSession;
@protocol OS_os_log;

@interface DEDRadarFinisher : NSObject <NSURLSessionDataDelegate, DEDFinisher, NSSecureCoding, DEDSecureArchiving>
{
    float _percentComplete;	// 8 = 0x8
    int _retryAttemptCount;	// 12 = 0xc
    DEDBugSession *_session;	// 16 = 0x10
    DEDBugSessionConfiguration *_configuration;	// 24 = 0x18
    NSObject<OS_os_log> *_log;	// 32 = 0x20
    NSMutableSet *_uploadItems;	// 40 = 0x28
    NSURLSession *_urlSession;	// 48 = 0x30
    NSMutableSet *_verificationTasks;	// 56 = 0x38
}

+ (id)archivedClasses;	// IMP=0x0000000000003c6f
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000003afd
- (void).cxx_destruct;	// IMP=0x0000000000007561
@property(retain) NSMutableSet *verificationTasks; // @synthesize verificationTasks=_verificationTasks;
@property(retain) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain) NSMutableSet *uploadItems; // @synthesize uploadItems=_uploadItems;
@property int retryAttemptCount; // @synthesize retryAttemptCount=_retryAttemptCount;
@property float percentComplete; // @synthesize percentComplete=_percentComplete;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property __weak DEDBugSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property __weak DEDBugSession *session; // @synthesize session=_session;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000073c4
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00000000000072b7
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x0000000000006eff
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000000006bbb
- (void)finishRadarUploadSession;	// IMP=0x0000000000006aaf
- (void)processVerifyTaskResults;	// IMP=0x0000000000005c12
- (void)startAttachmentVerificationTasks;	// IMP=0x00000000000057d8
- (_Bool)allVerificationTasksComplete;	// IMP=0x00000000000056a2
- (id)getVerificationTaskForDataTask:(id)arg1;	// IMP=0x0000000000005501
- (_Bool)allUploadsComplete;	// IMP=0x00000000000053cb
- (id)getUploadItemForTask:(id)arg1;	// IMP=0x0000000000005222
- (id)folderNameForAttachmentGroup:(id)arg1;	// IMP=0x0000000000004ecd
- (id)createUploadTaskForAttachment:(id)arg1 atRadarURL:(id)arg2;	// IMP=0x0000000000004d54
- (void)finishSession:(id)arg1 withConfiguration:(id)arg2;	// IMP=0x0000000000003c9a
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;	// IMP=0x0000000000003b3a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003b0b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003b05

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
