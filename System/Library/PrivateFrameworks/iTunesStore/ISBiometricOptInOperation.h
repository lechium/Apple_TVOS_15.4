//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISURLBag, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface ISBiometricOptInOperation
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 96 = 0x60
    _Bool _promptUser;	// 104 = 0x68
    CDUnknownBlockType _resultBlock;	// 112 = 0x70
    ISURLBag *_urlBag;	// 120 = 0x78
    NSString *_topicName;	// 128 = 0x80
    NSString *_userAgent;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000005a774
@property(copy) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy) NSString *topicName; // @synthesize topicName=_topicName;
- (id)_newSourceByStartingTimeoutTimer;	// IMP=0x000000000005a477
- (void)_updateTouchIDSettingsForAccount:(id)arg1;	// IMP=0x0000000000059ddc
- (_Bool)_performOptInDialogOperationWithError:(id *)arg1;	// IMP=0x000000000005977d
- (_Bool)_performPasscodeDialogOperationWithError:(id *)arg1;	// IMP=0x0000000000059150
- (void)_performOptInDialogMetricsWithResult:(_Bool)arg1 error:(id)arg2;	// IMP=0x0000000000058538
- (void)_loadURLBag;	// IMP=0x0000000000058318
- (void)run;	// IMP=0x000000000005827b
@property(copy) CDUnknownBlockType resultBlock;
@property _Bool promptUser;
- (id)init;	// IMP=0x00000000000580b9

@end

