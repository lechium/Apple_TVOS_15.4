//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface IMAggregateMessagePartChatItem
{
    NSArray *_subparts;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0000000000076e59
@property(readonly, copy, nonatomic) NSArray *subparts; // @synthesize subparts=_subparts;
- (id)_initWithItem:(id)arg1 messagePartRange:(struct _NSRange)arg2 subparts:(id)arg3;	// IMP=0x0000000000076c74
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000076bf1
- (id)description;	// IMP=0x0000000000076b64
- (id)replyContextPreviewChatItemForReply:(id)arg1 chatContext:(id)arg2;	// IMP=0x0000000000076a57

@end
