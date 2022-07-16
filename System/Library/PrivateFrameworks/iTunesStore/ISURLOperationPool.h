//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue;

@interface ISURLOperationPool : NSObject
{
    ISOperationQueue *_operationQueue;	// 8 = 0x8
}

@property(retain, nonatomic) ISOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (id)_poolOperationForOperation:(id)arg1 flags:(long long)arg2;	// IMP=0x00000000000565af
- (void)cancelOperation:(id)arg1;	// IMP=0x0000000000056448
- (void)addOperation:(id)arg1 withFlags:(long long)arg2;	// IMP=0x00000000000563b4
- (void)dealloc;	// IMP=0x0000000000056379
- (id)init;	// IMP=0x000000000005631c

@end

