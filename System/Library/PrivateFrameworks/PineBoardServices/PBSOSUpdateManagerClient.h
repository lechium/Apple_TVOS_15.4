//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PineBoardServices/PBSOSUpdateServiceDelegate-Protocol.h>

@class NSString;
@protocol PBSOSUpdateManagerClientDelegate;

@interface PBSOSUpdateManagerClient : NSObject <PBSOSUpdateServiceDelegate>
{
    id <PBSOSUpdateManagerClientDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007c8b0
@property(nonatomic) __weak id <PBSOSUpdateManagerClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)osUpdateServiceDidFinishApplyWithData:(id)arg1;	// IMP=0x000000000007c420
- (void)osUpdateServiceDidUpdateApplyProgressWithData:(id)arg1;	// IMP=0x000000000007c330
- (void)osUpdateServiceDidStartApplyWithData:(id)arg1;	// IMP=0x000000000007c190
- (void)osUpdateServiceDidStartRedownloadWithData:(id)arg1;	// IMP=0x000000000007c030
- (void)osUpdateServiceDidFinishDownloadWithData:(id)arg1;	// IMP=0x000000000007bc00
- (void)osUpdateServiceDidUpdateDownloadProgressWithData:(id)arg1;	// IMP=0x000000000007ba60
- (void)osUpdateServiceDidStartDownloadWithData:(id)arg1;	// IMP=0x000000000007b8c0
- (void)osUpdateServiceDidFinishCheckWithData:(id)arg1;	// IMP=0x000000000007b480
- (void)osUpdateServiceDidStartCheckWithData:(id)arg1;	// IMP=0x000000000007b320
- (void)installUpdate:(id)arg1 withOptions:(id)arg2 withResult:(CDUnknownBlockType)arg3;	// IMP=0x000000000007b1c0
- (void)isUpdate:(id)arg1 readyForInstallation:(CDUnknownBlockType)arg2;	// IMP=0x000000000007b090
- (void)currentDownload:(CDUnknownBlockType)arg1;	// IMP=0x000000000007af90
- (void)resumeDownload:(CDUnknownBlockType)arg1;	// IMP=0x000000000007aee0
- (void)pauseDownload:(CDUnknownBlockType)arg1;	// IMP=0x000000000007ae30
- (void)purgeDownload:(CDUnknownBlockType)arg1;	// IMP=0x000000000007ad30
- (void)cancelDownload:(CDUnknownBlockType)arg1;	// IMP=0x000000000007ac30
- (void)startDownload:(CDUnknownBlockType)arg1;	// IMP=0x000000000007ab30
- (void)isDownloading:(CDUnknownBlockType)arg1;	// IMP=0x000000000007aa30
- (void)scanForUpdates:(id)arg1 withResult:(CDUnknownBlockType)arg2;	// IMP=0x000000000007a900
- (void)isScanning:(CDUnknownBlockType)arg1;	// IMP=0x000000000007a800
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000007a700

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

