//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSString;

@interface WFPBShareShortcutEvent : PBCodable <NSCopying>
{
    unsigned int _actionCount;	// 8 = 0x8
    NSString *_addToSiriBundleIdentifier;	// 16 = 0x10
    NSString *_galleryIdentifier;	// 24 = 0x18
    NSString *_key;	// 32 = 0x20
    NSString *_sharingDestinationBundleIdentifier;	// 40 = 0x28
    NSString *_sharingMode;	// 48 = 0x30
    int _source;	// 56 = 0x38
    struct {
        unsigned int actionCount:1;
        unsigned int source:1;
    } _has;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x00000000001227b5
@property(retain, nonatomic) NSString *sharingMode; // @synthesize sharingMode=_sharingMode;
@property(retain, nonatomic) NSString *sharingDestinationBundleIdentifier; // @synthesize sharingDestinationBundleIdentifier=_sharingDestinationBundleIdentifier;
@property(retain, nonatomic) NSString *galleryIdentifier; // @synthesize galleryIdentifier=_galleryIdentifier;
@property(retain, nonatomic) NSString *addToSiriBundleIdentifier; // @synthesize addToSiriBundleIdentifier=_addToSiriBundleIdentifier;
@property(nonatomic) unsigned int actionCount; // @synthesize actionCount=_actionCount;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000012260e
- (unsigned long long)hash;	// IMP=0x0000000000122524
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012235f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012220f
- (void)copyTo:(id)arg1;	// IMP=0x000000000012210f
- (void)writeTo:(id)arg1;	// IMP=0x000000000012200d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000122000
- (id)dictionaryRepresentation;	// IMP=0x0000000000121d99
- (id)description;	// IMP=0x0000000000121cea
@property(readonly, nonatomic) _Bool hasSharingMode;
@property(readonly, nonatomic) _Bool hasSharingDestinationBundleIdentifier;
@property(readonly, nonatomic) _Bool hasGalleryIdentifier;
@property(readonly, nonatomic) _Bool hasAddToSiriBundleIdentifier;
@property(nonatomic) _Bool hasActionCount;
- (int)StringAsSource:(id)arg1;	// IMP=0x0000000000121a90
- (id)sourceAsString:(int)arg1;	// IMP=0x00000000001219b7
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source; // @synthesize source=_source;
@property(readonly, nonatomic) _Bool hasKey;

@end
