//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSString;

@interface WFPBOpenShortcutEvent : PBCodable <NSCopying>
{
    unsigned int _actionCount;	// 8 = 0x8
    NSString *_addToSiriBundleIdentifier;	// 16 = 0x10
    NSString *_galleryIdentifier;	// 24 = 0x18
    NSString *_key;	// 32 = 0x20
    NSString *_shortcutSource;	// 40 = 0x28
    CDStruct_810980b6 _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000002691f
@property(retain, nonatomic) NSString *shortcutSource; // @synthesize shortcutSource=_shortcutSource;
@property(retain, nonatomic) NSString *galleryIdentifier; // @synthesize galleryIdentifier=_galleryIdentifier;
@property(retain, nonatomic) NSString *addToSiriBundleIdentifier; // @synthesize addToSiriBundleIdentifier=_addToSiriBundleIdentifier;
@property(nonatomic) unsigned int actionCount; // @synthesize actionCount=_actionCount;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000267c9
- (unsigned long long)hash;	// IMP=0x000000000002671a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000265b6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000264a9
- (void)copyTo:(id)arg1;	// IMP=0x00000000000263e6
- (void)writeTo:(id)arg1;	// IMP=0x000000000002632b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002631e
- (id)dictionaryRepresentation;	// IMP=0x00000000000261eb
- (id)description;	// IMP=0x000000000002613c
@property(readonly, nonatomic) _Bool hasShortcutSource;
@property(readonly, nonatomic) _Bool hasGalleryIdentifier;
@property(readonly, nonatomic) _Bool hasAddToSiriBundleIdentifier;
@property(nonatomic) _Bool hasActionCount;
@property(readonly, nonatomic) _Bool hasKey;

@end

