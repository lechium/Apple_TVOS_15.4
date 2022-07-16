//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _CDInteractionStore;
@protocol OS_dispatch_queue;

@interface _CDInteractionStoreNotifier : NSObject
{
    int _notifierToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _CDInteractionStore *_interactionStore;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000108ed8
@property(readonly, nonatomic) __weak _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;
- (void)resume;	// IMP=0x0000000000108eb4
- (void)suspend;	// IMP=0x0000000000108e57
- (void)deleted;	// IMP=0x0000000000108cd9
- (void)distributedNotificationForRecorded:(id)arg1;	// IMP=0x0000000000108acb
- (void)recorded:(id)arg1;	// IMP=0x0000000000108765
- (void)postPackedMechanisms:(unsigned long long)arg1;	// IMP=0x00000000001086ea
- (void)dealloc;	// IMP=0x00000000001086ad
- (id)initWithInteractionStore:(id)arg1;	// IMP=0x0000000000108556

@end
