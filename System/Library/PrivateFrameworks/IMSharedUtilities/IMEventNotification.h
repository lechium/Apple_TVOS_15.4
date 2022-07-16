//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMFoundation/IMDoubleLinkedListNode.h>

@interface IMEventNotification : IMDoubleLinkedListNode
{
    id _target;	// 8 = 0x8
    id _sender;	// 16 = 0x10
    CDUnknownBlockType _eventNotificationWithSenderBlock;	// 24 = 0x18
    CDUnknownBlockType _eventNotificationBlock;	// 32 = 0x20
}

+ (id)eventNotification:(id)arg1;	// IMP=0x000000000002f6c3
+ (id)eventNotification:(id)arg1 sender:(id)arg2 eventNotificationBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000002f60b
+ (id)eventNotification:(id)arg1 eventNotificationBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f57b
- (void).cxx_destruct;	// IMP=0x000000000002f9ed
@property(copy) CDUnknownBlockType eventNotificationBlock; // @synthesize eventNotificationBlock=_eventNotificationBlock;
@property(copy) CDUnknownBlockType eventNotificationWithSenderBlock; // @synthesize eventNotificationWithSenderBlock=_eventNotificationWithSenderBlock;
@property __weak id sender; // @synthesize sender=_sender;
@property __weak id target; // @synthesize target=_target;
- (void)cache;	// IMP=0x000000000002f933
- (_Bool)wasCancelled;	// IMP=0x000000000002f8d9
- (void)cancel;	// IMP=0x000000000002f865
- (_Bool)invoke;	// IMP=0x000000000002f730

@end

