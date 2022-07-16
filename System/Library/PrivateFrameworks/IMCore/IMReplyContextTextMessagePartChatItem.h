//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/IMReplyContext-Protocol.h>

@class IMItem, NSString;

@interface IMReplyContextTextMessagePartChatItem <IMReplyContext>
{
    _Bool _replyIsFromMe;	// 152 = 0x98
    IMItem *_parentItem;	// 160 = 0xa0
    NSString *_replyMessageGUID;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000000737cc
@property(copy, nonatomic) NSString *replyMessageGUID; // @synthesize replyMessageGUID=_replyMessageGUID;
@property(nonatomic) _Bool replyIsFromMe; // @synthesize replyIsFromMe=_replyIsFromMe;
@property(retain, nonatomic) IMItem *_parentItem; // @synthesize _parentItem;
- (_Bool)canDelete;	// IMP=0x000000000007375d
- (_Bool)isReplyContextPreview;	// IMP=0x0000000000073755
- (id)_initWithItem:(id)arg1 parentItem:(id)arg2 replyMessageGUID:(id)arg3 replyIsFromMe:(_Bool)arg4 text:(id)arg5 index:(long long)arg6 messagePartRange:(struct _NSRange)arg7 subject:(id)arg8 shouldDisplayLink:(_Bool)arg9;	// IMP=0x00000000000735fa
- (id)_initWithItem:(id)arg1 parentItem:(id)arg2 replyMessageGUID:(id)arg3 replyIsFromMe:(_Bool)arg4 text:(id)arg5 index:(long long)arg6 messagePartRange:(struct _NSRange)arg7 subject:(id)arg8;	// IMP=0x000000000007349d

@end

