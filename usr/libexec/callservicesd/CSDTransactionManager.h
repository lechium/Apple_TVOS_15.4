//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface CSDTransactionManager : NSObject
{
    NSMapTable *_openTransactions;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstanceWithQueue:(id)arg1;	// IMP=0x0020000000007c6f
+ (id)sharedInstance;	// IMP=0x0010000000007c54
- (void).cxx_destruct;	// IMP=0x0020000000008808
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMapTable *openTransactions; // @synthesize openTransactions=_openTransactions;
- (void)handleSessionStateChanged:(id)arg1;	// IMP=0x00100000000086c4
- (void)handleCallStatusChanged:(id)arg1;	// IMP=0x00100000000085fa
- (void)endTransactionIfNecessaryForObject:(id)arg1;	// IMP=0x00100000000083ff
- (void)beginTransactionIfNecessaryForObject:(id)arg1 withReason:(id)arg2;	// IMP=0x00100000000081b3
- (void)dealloc;	// IMP=0x001000000000813e
- (id)initWithQueue:(id)arg1;	// IMP=0x0010000000007d87

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
