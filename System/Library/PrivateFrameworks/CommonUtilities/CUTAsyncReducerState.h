//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUTResult, NSArray;

@interface CUTAsyncReducerState : NSObject
{
    NSArray *_visitedItems;	// 8 = 0x8
    NSArray *_pendingItems;	// 16 = 0x10
    id _currentItem;	// 24 = 0x18
    CUTResult *_currentResult;	// 32 = 0x20
    CDUnknownBlockType _cancelBlock;	// 40 = 0x28
    CDUnknownBlockType _continueBlock;	// 48 = 0x30
    CDUnknownBlockType _stopBlock;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000005e34
@property(copy, nonatomic) CDUnknownBlockType stopBlock; // @synthesize stopBlock=_stopBlock;
@property(copy, nonatomic) CDUnknownBlockType continueBlock; // @synthesize continueBlock=_continueBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) CUTResult *currentResult; // @synthesize currentResult=_currentResult;
@property(retain, nonatomic) id currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) NSArray *pendingItems; // @synthesize pendingItems=_pendingItems;
@property(retain, nonatomic) NSArray *visitedItems; // @synthesize visitedItems=_visitedItems;
- (void)stopWithResult:(id)arg1;	// IMP=0x0000000000005c83
- (void)cancelWithError:(id)arg1;	// IMP=0x0000000000005b89
- (void)continueWithResult:(id)arg1;	// IMP=0x0000000000005a8f

@end
