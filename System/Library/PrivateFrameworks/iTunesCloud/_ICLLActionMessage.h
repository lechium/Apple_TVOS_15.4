//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSString, _ICLLAddQueueItemsAction, _ICLLClientInfoAction, _ICLLCurrentItemChangeAction, _ICLLCurrentItemTransitionAction, _ICLLDisplayMessage, _ICLLMoveQueueItemAction, _ICLLParticipantChangeAction, _ICLLPlayNowQueueItemsAction, _ICLLPlaybackControlSettingsAction, _ICLLPlaybackSyncAction, _ICLLQueueSyncAction, _ICLLReactionAction, _ICLLRemoveQueueItemAction, _ICLLReplaceQueueItemsAction, _ICLLServerNoticeAction;

__attribute__((visibility("hidden")))
@interface _ICLLActionMessage : PBCodable <NSCopying>
{
    long long _originatorId;	// 8 = 0x8
    int _action;	// 16 = 0x10
    _ICLLAddQueueItemsAction *_addItems;	// 24 = 0x18
    _ICLLClientInfoAction *_clientInfo;	// 32 = 0x20
    _ICLLCurrentItemChangeAction *_currentItemChange;	// 40 = 0x28
    _ICLLCurrentItemTransitionAction *_currentItemTransition;	// 48 = 0x30
    _ICLLDisplayMessage *_displayMessage;	// 56 = 0x38
    _ICLLMoveQueueItemAction *_moveItem;	// 64 = 0x40
    NSString *_originatorUUID;	// 72 = 0x48
    _ICLLParticipantChangeAction *_participantChange;	// 80 = 0x50
    _ICLLPlayNowQueueItemsAction *_playNowQueueItems;	// 88 = 0x58
    _ICLLPlaybackControlSettingsAction *_playbackControlSettings;	// 96 = 0x60
    _ICLLPlaybackSyncAction *_playbackSync;	// 104 = 0x68
    _ICLLQueueSyncAction *_queueSync;	// 112 = 0x70
    _ICLLReactionAction *_reaction;	// 120 = 0x78
    _ICLLRemoveQueueItemAction *_removeItem;	// 128 = 0x80
    _ICLLReplaceQueueItemsAction *_replaceQueueItems;	// 136 = 0x88
    _ICLLServerNoticeAction *_serverNotice;	// 144 = 0x90
    _Bool _displayNotice;	// 152 = 0x98
    struct {
        unsigned int originatorId:1;
        unsigned int action:1;
        unsigned int displayNotice:1;
    } _has;	// 156 = 0x9c
}

- (void).cxx_destruct;	// IMP=0x000000000003bd67
- (unsigned long long)hash;	// IMP=0x000000000003bb2d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003b6fb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003b3b7
- (void)writeTo:(id)arg1;	// IMP=0x000000000003b176
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003b169
- (id)dictionaryRepresentation;	// IMP=0x000000000003ab81
- (id)description;	// IMP=0x000000000003aad2

@end
