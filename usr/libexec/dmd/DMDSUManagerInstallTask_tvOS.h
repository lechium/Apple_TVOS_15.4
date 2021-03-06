//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PBSOSUpdateDownload, PBSOSUpdateManagerClient;

@interface DMDSUManagerInstallTask_tvOS
{
    PBSOSUpdateManagerClient *client;	// 8 = 0x8
    PBSOSUpdateDownload *lastDownload;	// 16 = 0x10
}

+ (id)_dmfInstallErrorFromSUInstallError:(id)arg1;	// IMP=0x002000000006a14c
+ (id)_dmfDownloadErrorFromSUDownloadError:(id)arg1;	// IMP=0x0010000000069ebf
+ (id)_dmfStatusErrorFromSUStatusError:(id)arg1;	// IMP=0x0010000000069df2
+ (id)defaultProductKey;	// IMP=0x001000000006868a
- (void).cxx_destruct;	// IMP=0x002000000006a476
@property(retain, nonatomic) PBSOSUpdateDownload *lastDownload; // @synthesize lastDownload;
@property(retain, nonatomic) PBSOSUpdateManagerClient *client; // @synthesize client;
- (void)client:(id)arg1 downloadDidFinish:(id)arg2;	// IMP=0x0010000000069ddd
- (_Bool)removeUpdateWithError:(id *)arg1;	// IMP=0x0010000000069a23
- (_Bool)startInstallWithError:(id *)arg1;	// IMP=0x0010000000069712
- (_Bool)startDownloadWithError:(id *)arg1;	// IMP=0x00100000000694b2
- (id)currentStatusWithError:(id *)arg1;	// IMP=0x00100000000690b9
- (id)availableUpdateWithVersion:(id)arg1 useDelay:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000006871a
- (id)init;	// IMP=0x0010000000068697

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

