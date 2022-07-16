//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface DEDRadarUploadItem
{
    _Bool _isUploaded;	// 8 = 0x8
    unsigned long long _taskIdentifier;	// 16 = 0x10
    long long _totalBytesSent;	// 24 = 0x18
    long long _totalBytesExpectedToSend;	// 32 = 0x20
    NSString *_radarAttachmentName;	// 40 = 0x28
    NSURL *_radarURL;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000002f45e
@property(retain, nonatomic) NSURL *radarURL; // @synthesize radarURL=_radarURL;
@property(retain, nonatomic) NSString *radarAttachmentName; // @synthesize radarAttachmentName=_radarAttachmentName;
@property(nonatomic) _Bool isUploaded; // @synthesize isUploaded=_isUploaded;
@property(nonatomic) long long totalBytesExpectedToSend; // @synthesize totalBytesExpectedToSend=_totalBytesExpectedToSend;
@property(nonatomic) long long totalBytesSent; // @synthesize totalBytesSent=_totalBytesSent;
@property(nonatomic) unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
- (id)description;	// IMP=0x000000000002f131
- (id)initWithUploadTask:(id)arg1 andAttachment:(id)arg2;	// IMP=0x000000000002efa3

@end

