//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class MPMediaItem, NSString;

@interface _MPMusicPlayerMediaItemProxy : NSProxy
{
    MPMediaItem *_item;	// 8 = 0x8
    NSString *_itemIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000ba387
@property(readonly, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) MPMediaItem *item; // @synthesize item=_item;
- (id)description;	// IMP=0x00000000000ba348
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000ba2d6
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000ba2b3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ba28d
- (id)initWithItemIdentifier:(id)arg1 item:(id)arg2;	// IMP=0x00000000000ba1fb

@end

