//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AFConversationStore : NSObject
{
    NSMutableDictionary *_conversationsByIdentifier;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a7fb1
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic, getter=_conversationsByIdentifier) NSMutableDictionary *conversationsByIdentifier; // @synthesize conversationsByIdentifier=_conversationsByIdentifier;
- (void)removeConversationWithIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a7e01
- (void)fetchConversationWithIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a7aca
- (void)saveConversation:(id)arg1 withIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a77cc
- (void)_registerConversation:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00000000000a7746
- (id)init;	// IMP=0x00000000000a769d

@end

