//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CSOSTransactionStat : NSObject
{
    int _numTransactionNow;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000000529d
- (void).cxx_destruct;	// IMP=0x0000000000005612
@property(nonatomic) int numTransactionNow; // @synthesize numTransactionNow=_numTransactionNow;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (int)numTransaction;	// IMP=0x000000000000553c
- (void)reportDestroy;	// IMP=0x0000000000005452
- (void)reportCreation;	// IMP=0x000000000000534a
- (id)init;	// IMP=0x00000000000052f2

@end

