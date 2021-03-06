//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ICLiveLinkReactionEvent : NSObject
{
    NSString *_reactionIdentifier;	// 8 = 0x8
    NSString *_reaction;	// 16 = 0x10
    NSString *_itemIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000017cf4e
@property(readonly, copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, copy, nonatomic) NSString *reaction; // @synthesize reaction=_reaction;
@property(readonly, copy, nonatomic) NSString *reactionIdentifier; // @synthesize reactionIdentifier=_reactionIdentifier;
- (id)description;	// IMP=0x000000000017cef2
- (id)initWithReaction:(id)arg1 reactionIdentifier:(id)arg2 itemIdentifier:(id)arg3;	// IMP=0x000000000017ce0c

@end

