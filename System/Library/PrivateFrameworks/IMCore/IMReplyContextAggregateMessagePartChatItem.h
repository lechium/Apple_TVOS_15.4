//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/IMReplyContext-Protocol.h>

@class IMItem, NSString;

@interface IMReplyContextAggregateMessagePartChatItem <IMReplyContext>
{
    _Bool _replyIsFromMe;	// 160 = 0xa0
    IMItem *_parentItem;	// 168 = 0xa8
    NSString *_replyMessageGUID;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000077038
@property(copy, nonatomic) NSString *replyMessageGUID; // @synthesize replyMessageGUID=_replyMessageGUID;
@property(nonatomic) _Bool replyIsFromMe; // @synthesize replyIsFromMe=_replyIsFromMe;
@property(retain, nonatomic) IMItem *_parentItem; // @synthesize _parentItem;
- (_Bool)canDelete;	// IMP=0x0000000000076fc9
- (_Bool)isReplyContextPreview;	// IMP=0x0000000000076fc1
- (id)_initWithItem:(id)arg1 parentItem:(id)arg2 replyMessageGUID:(id)arg3 replyIsFromMe:(_Bool)arg4 messagePartRange:(struct _NSRange)arg5 subparts:(id)arg6;	// IMP=0x0000000000076e6c

@end
