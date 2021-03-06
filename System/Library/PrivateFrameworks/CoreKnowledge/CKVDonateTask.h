//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CKVDonatorProvider;

@interface CKVDonateTask : NSObject
{
    NSObject<CKVDonatorProvider> *_donatorProvider;	// 8 = 0x8
    NSObject *_bridge;	// 16 = 0x10
    double _timeout;	// 24 = 0x18
    _Bool _isMultiDataset;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000090ba3
- (id)_getProviderBridge;	// IMP=0x0000000000090b95
- (void)_clearDataset:(id)arg1;	// IMP=0x00000000000908a2
- (void)_clearAllDatasets;	// IMP=0x000000000009073e
- (void)clearWithReason:(unsigned short)arg1;	// IMP=0x00000000000905f8
- (void)_donateDataset:(id)arg1 withType:(unsigned short)arg2 reason:(unsigned short)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000090145
- (void)_donateAllDatasets:(unsigned short)arg1 withReason:(unsigned short)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000008fe8c
- (void)runWithType:(unsigned short)arg1 reason:(unsigned short)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000008fc9a
- (void)runWithType:(unsigned short)arg1 reason:(unsigned short)arg2;	// IMP=0x000000000008fc85
- (id)init;	// IMP=0x000000000008fc3d
- (id)initWithDonatorProvider:(id)arg1 multiDatasetBridge:(id)arg2;	// IMP=0x000000000008fc23
- (id)initWithDonatorProvider:(id)arg1 datasetBridge:(id)arg2;	// IMP=0x000000000008fc09
- (id)initWithDonatorProvider:(id)arg1 datasetBridge:(id)arg2 timeout:(double)arg3;	// IMP=0x000000000008fb03

@end

