//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ANSystemNotificationObserver : NSObject
{
    CDUnknownBlockType _observerHandler;	// 8 = 0x8
}

+ (id)observer:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016708
- (void).cxx_destruct;	// IMP=0x0000000000016818
@property(copy) CDUnknownBlockType observerHandler; // @synthesize observerHandler=_observerHandler;
- (void)removeNotificationObservers;	// IMP=0x00000000000167ef
- (void)startObservingNotifications;	// IMP=0x0000000000016793
- (void)dealloc;	// IMP=0x0000000000016755
- (id)initWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016691
- (id)init;	// IMP=0x0000000000016662

@end
