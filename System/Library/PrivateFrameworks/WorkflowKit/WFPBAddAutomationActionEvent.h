//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSString;

@interface WFPBAddAutomationActionEvent : PBCodable <NSCopying>
{
    NSString *_actionIdentifier;	// 8 = 0x8
    unsigned int _actionIndex;	// 16 = 0x10
    NSString *_key;	// 24 = 0x18
    NSString *_shortcutIdentifier;	// 32 = 0x20
    struct {
        unsigned int actionIndex:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000860bf
@property(retain, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(nonatomic) unsigned int actionIndex; // @synthesize actionIndex=_actionIndex;
@property(retain, nonatomic) NSString *shortcutIdentifier; // @synthesize shortcutIdentifier=_shortcutIdentifier;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000085fae
- (unsigned long long)hash;	// IMP=0x0000000000085f20
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000085df7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000085d0d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000085c6a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000085bcc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000085bbf
- (id)dictionaryRepresentation;	// IMP=0x0000000000085ab3
- (id)description;	// IMP=0x0000000000085a04
@property(readonly, nonatomic) _Bool hasActionIdentifier;
@property(nonatomic) _Bool hasActionIndex;
@property(readonly, nonatomic) _Bool hasShortcutIdentifier;
@property(readonly, nonatomic) _Bool hasKey;

@end

