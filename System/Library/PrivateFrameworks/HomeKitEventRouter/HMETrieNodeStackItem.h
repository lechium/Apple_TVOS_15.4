//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMETrieNode, NSString;

__attribute__((visibility("hidden")))
@interface HMETrieNodeStackItem : NSObject
{
    NSString *_parentTopic;	// 8 = 0x8
    HMETrieNode *_node;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000001671
@property(readonly) HMETrieNode *node; // @synthesize node=_node;
@property(readonly) NSString *parentTopic; // @synthesize parentTopic=_parentTopic;

@end

