//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CSDConversationPersistenceController : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *storage;	// 16 = 0x10
    MISSING_TYPE *lockStateObserver;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0040000000268020
- (id)init;	// IMP=0x0010000000267fc0
- (void)enumerateActiveConversations:(CDUnknownBlockType)arg1;	// IMP=0x0010000000266e10
- (void)removeAllConversations;	// IMP=0x0010000000264e80
- (void)removeConversation:(id)arg1;	// IMP=0x0010000000264990
- (void)updateConversation:(id)arg1;	// IMP=0x0010000000264310
- (id)initWithQueue:(id)arg1;	// IMP=0x0010000000263b80

@end

