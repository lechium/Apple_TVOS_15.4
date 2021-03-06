//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSDoubleLinkedListNode, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AMSDoubleLinkedList : NSObject
{
    unsigned long long _count;	// 8 = 0x8
    AMSDoubleLinkedListNode *_head;	// 16 = 0x10
    AMSDoubleLinkedListNode *_tail;	// 24 = 0x18
    NSString *_listIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000010d709
@property(retain, nonatomic) NSString *listIdentifier; // @synthesize listIdentifier=_listIdentifier;
@property(retain, nonatomic) AMSDoubleLinkedListNode *tail; // @synthesize tail=_tail;
@property(retain, nonatomic) AMSDoubleLinkedListNode *head; // @synthesize head=_head;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (id)description;	// IMP=0x000000000010d48b
- (void)removeNode:(id)arg1;	// IMP=0x000000000010d249
- (void)removeAllNodes;	// IMP=0x000000000010d210
- (id)insertObject:(id)arg1;	// IMP=0x000000000010d1a4
- (void)insertNode:(id)arg1;	// IMP=0x000000000010d032
- (id)appendObject:(id)arg1;	// IMP=0x000000000010cfc6
- (void)appendNode:(id)arg1;	// IMP=0x000000000010ce54
@property(readonly, nonatomic) NSArray *allNodes;
- (id)init;	// IMP=0x000000000010cd1f

@end

