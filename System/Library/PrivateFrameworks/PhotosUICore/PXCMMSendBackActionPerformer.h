//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXCMMContext;

@interface PXCMMSendBackActionPerformer
{
    PXCMMContext *_sendBackContext;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000502897
@property(retain, nonatomic) PXCMMContext *sendBackContext; // @synthesize sendBackContext=_sendBackContext;
- (void)_completeSendBackActionWithSuccess:(_Bool)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000005027bc
- (id)performSendBackActionWithSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005026b7

@end

