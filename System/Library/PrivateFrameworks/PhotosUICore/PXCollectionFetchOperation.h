//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class PHCollection, PHFetchOptions, PHFetchResult;
@protocol PXCollectionFetchOperationDelegate;

@interface PXCollectionFetchOperation : NSOperation
{
    id <PXCollectionFetchOperationDelegate> _delegate;	// 8 = 0x8
    PHFetchOptions *_fetchOptions;	// 16 = 0x10
    PHCollection *_collection;	// 24 = 0x18
    PHFetchResult *_outputFetchResult;	// 32 = 0x20
}

+ (id)fetchOperationWithCollection:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000427303
- (void).cxx_destruct;	// IMP=0x000000000042718c
@property(retain, nonatomic) PHFetchResult *outputFetchResult; // @synthesize outputFetchResult=_outputFetchResult;
@property(readonly, nonatomic) PHCollection *collection; // @synthesize collection=_collection;
@property(retain, nonatomic) PHFetchOptions *fetchOptions; // @synthesize fetchOptions=_fetchOptions;
@property(nonatomic) __weak id <PXCollectionFetchOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleFinish;	// IMP=0x0000000000427095
- (void)handleBegin;	// IMP=0x0000000000427036
- (void)main;	// IMP=0x0000000000426e00
- (id)init;	// IMP=0x0000000000426d2f
- (id)initWithCollection:(id)arg1;	// IMP=0x0000000000426c46

@end

