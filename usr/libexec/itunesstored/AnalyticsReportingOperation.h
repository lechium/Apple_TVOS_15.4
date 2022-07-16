//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSString, SSMetricsEventController;

@interface AnalyticsReportingOperation : ISOperation
{
    SSMetricsEventController *_controller;	// 96 = 0x60
    NSString *_directory;	// 104 = 0x68
    CDUnknownBlockType _finishBlock;	// 112 = 0x70
    long long _insertTimestamp;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00200000001d3134
- (id)_signatureWithData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001d2e9d
- (_Bool)_shouldClearEventsDespiteError:(id)arg1;	// IMP=0x00100000001d2dc8
- (_Bool)_shouldBackoffAfterError:(id)arg1;	// IMP=0x00100000001d2d2b
- (_Bool)_runForReportingURL:(id)arg1 suppressUserInfo:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000001d1bf5
- (id)_path;	// IMP=0x00100000001d1b03
- (void)_destroyOutputFile:(id)arg1;	// IMP=0x00100000001d1a9a
- (id)uniqueKey;	// IMP=0x00100000001d1a8d
- (void)run;	// IMP=0x00100000001d0d13
@property(copy) CDUnknownBlockType finishBlock;
- (id)init;	// IMP=0x00100000001d0c1f
- (id)initWithController:(id)arg1;	// IMP=0x00100000001d0a5f

@end

