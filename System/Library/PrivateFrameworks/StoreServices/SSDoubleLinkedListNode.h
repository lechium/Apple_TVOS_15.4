//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SSDoubleLinkedListNode : NSObject
{
    SSDoubleLinkedListNode *_previous;	// 8 = 0x8
    id _object;	// 16 = 0x10
    SSDoubleLinkedListNode *_next;	// 24 = 0x18
    NSString *_listIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000186817
@property(retain, nonatomic) NSString *listIdentifier; // @synthesize listIdentifier=_listIdentifier;
@property(retain, nonatomic) SSDoubleLinkedListNode *next; // @synthesize next=_next;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(retain, nonatomic) SSDoubleLinkedListNode *previous; // @synthesize previous=_previous;
- (id)initWithObject:(id)arg1;	// IMP=0x0000000000186740
- (id)init;	// IMP=0x000000000018672c

@end

