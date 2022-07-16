//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoreThemeDocument, NSConditionLock, NSMutableArray, TDLogger;
@protocol OS_dispatch_group;

@interface TDRenditionsDistiller : NSObject
{
    CoreThemeDocument *document;	// 8 = 0x8
    NSMutableArray *renditionInQueue;	// 16 = 0x10
    NSMutableArray *csiDataInfoOutQueue;	// 24 = 0x18
    NSConditionLock *inQueueLock;	// 32 = 0x20
    NSConditionLock *outQueueLock;	// 40 = 0x28
    _Bool shouldCompressCSIDataFlag;	// 48 = 0x30
    _Bool noMoreCSIDataInfo;	// 49 = 0x31
    _Bool noMoreRenditions;	// 50 = 0x32
    NSObject<OS_dispatch_group> *_group;	// 56 = 0x38
    TDLogger *_logger;	// 64 = 0x40
}

@property(retain) TDLogger *logger; // @synthesize logger=_logger;
- (id)nextCSIDataInfoFromQueue;	// IMP=0x000000000007016d
- (void)enqueueRenditionSpec:(id)arg1;	// IMP=0x0000000000070139
- (void)enqueueAbortFlag;	// IMP=0x00000000000700cc
- (void)enqueueLastRenditionFlag;	// IMP=0x0000000000070092
- (void)detachDistillationThread;	// IMP=0x000000000007006c
- (void)waitUntilFinished;	// IMP=0x0000000000070057
- (void)_distill:(id)arg1;	// IMP=0x000000000006fc10
- (id)_nextObjectFromInQueue;	// IMP=0x000000000006faf4
- (void)_enqueueDistillingAbortedInfo;	// IMP=0x000000000006fa6a
- (void)_enqueueLastCSIDataInfoFlag;	// IMP=0x000000000006fa30
- (void)_enqueueCSIDataInfo:(id)arg1;	// IMP=0x000000000006fa1e
- (void)_enqueueOnOutQueueTheObject:(id)arg1;	// IMP=0x000000000006fa01
- (void)_enqueueOnInQueueTheObject:(id)arg1;	// IMP=0x000000000006f9e4
- (void)_enqueueOnQueue:(id)arg1 withQueueLock:(id)arg2 object:(id)arg3;	// IMP=0x000000000006f990
- (void)dealloc;	// IMP=0x000000000006f916
- (id)initWithDocument:(id)arg1 shouldCompressCSIDataFlag:(_Bool)arg2;	// IMP=0x000000000006f84e

@end

