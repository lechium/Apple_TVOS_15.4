//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSConditionLock, NSMutableArray;

@interface MFRequestQueue : NSObject
{
    NSConditionLock *_condition;	// 8 = 0x8
    NSMutableArray *_requests;	// 16 = 0x10
    NSMutableArray *_consumers;	// 24 = 0x18
    unsigned int _waitingOutside;	// 32 = 0x20
    unsigned int _waitingInside;	// 36 = 0x24
}

- (void)dealloc;	// IMP=0x0000000000087336
- (void)processRequests:(id)arg1 consumers:(id)arg2;	// IMP=0x0000000000087275
- (void)_processRequests:(id)arg1 consumers:(id)arg2;	// IMP=0x00000000000871b5
- (void)processRequest:(id)arg1 consumer:(id)arg2;	// IMP=0x000000000008719e
- (void)addRequests:(id)arg1 consumers:(id)arg2;	// IMP=0x0000000000087031
- (void)willAddRequests:(id)arg1 consumers:(id)arg2;	// IMP=0x000000000008702b
- (void)addRequest:(id)arg1 consumer:(id)arg2;	// IMP=0x0000000000086f89
- (id)init;	// IMP=0x0000000000086f01

@end
