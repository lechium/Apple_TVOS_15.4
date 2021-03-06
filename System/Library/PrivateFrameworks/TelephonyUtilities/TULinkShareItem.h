//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, TUConversationLink;

@interface TULinkShareItem : NSObject
{
    TUConversationLink *_tuConversationLink;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSURL *_placeholder;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001e95f
@property(copy, nonatomic) NSURL *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) TUConversationLink *tuConversationLink; // @synthesize tuConversationLink=_tuConversationLink;
- (id)initWithTUConversationLink:(id)arg1;	// IMP=0x000000000001e850
- (id)initWithTUConversationLink:(id)arg1 title:(id)arg2 placeholder:(id)arg3;	// IMP=0x000000000001e789

@end

