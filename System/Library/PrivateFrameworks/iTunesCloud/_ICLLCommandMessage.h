//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class _ICLLAddQueueItemsCommand, _ICLLClientInfoCommand, _ICLLCurrentItemChangeCommand, _ICLLCurrentItemTransitionCommand, _ICLLMoveQueueItemCommand, _ICLLPlayNowQueueItemsCommand, _ICLLPlaybackControlSettingsCommand, _ICLLPlaybackSyncCommand, _ICLLReactionCommand, _ICLLRemoveQueueItemCommand, _ICLLReplaceQueueItemsCommand;

__attribute__((visibility("hidden")))
@interface _ICLLCommandMessage : PBCodable <NSCopying>
{
    _ICLLAddQueueItemsCommand *_addItems;	// 8 = 0x8
    _ICLLClientInfoCommand *_clientInfo;	// 16 = 0x10
    int _command;	// 24 = 0x18
    _ICLLCurrentItemChangeCommand *_currentItemChange;	// 32 = 0x20
    _ICLLCurrentItemTransitionCommand *_currentItemTransition;	// 40 = 0x28
    _ICLLMoveQueueItemCommand *_moveItem;	// 48 = 0x30
    _ICLLPlayNowQueueItemsCommand *_playNowQueueItems;	// 56 = 0x38
    _ICLLPlaybackControlSettingsCommand *_playbackControlSettings;	// 64 = 0x40
    _ICLLPlaybackSyncCommand *_playbackSync;	// 72 = 0x48
    _ICLLReactionCommand *_reaction;	// 80 = 0x50
    _ICLLRemoveQueueItemCommand *_removeItem;	// 88 = 0x58
    _ICLLReplaceQueueItemsCommand *_replaceQueueItems;	// 96 = 0x60
    struct {
        unsigned int command:1;
    } _has;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000007ed35
- (unsigned long long)hash;	// IMP=0x000000000007ebb3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007e8e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007e6b0
- (void)writeTo:(id)arg1;	// IMP=0x000000000007e54e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007e541
- (id)dictionaryRepresentation;	// IMP=0x000000000007e164
- (id)description;	// IMP=0x000000000007e0b5

@end

