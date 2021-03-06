//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CopresenceCore/NSCopying-Protocol.h>

@class CPMessagingConversationActivityContext, CPMessagingConversationActivityMetadata, CPMessagingHandle, CPMessagingMMCSMetadata, NSData, NSString;

@interface CPMessagingConversationActivity : PBCodable <NSCopying>
{
    double _updatedDateEpochTime;	// 8 = 0x8
    CPMessagingConversationActivityContext *_activityContext;	// 16 = 0x10
    NSString *_activityIdentifier;	// 24 = 0x18
    CPMessagingConversationActivityMetadata *_activityMetadata;	// 32 = 0x20
    NSData *_applicationContext;	// 40 = 0x28
    NSString *_bundleIdentifier;	// 48 = 0x30
    NSString *_fallbackApplicationName;	// 56 = 0x38
    NSString *_identifierUUIDString;	// 64 = 0x40
    NSData *_metadata;	// 72 = 0x48
    CPMessagingMMCSMetadata *_mmcsMetadata;	// 80 = 0x50
    CPMessagingHandle *_originatorHandle;	// 88 = 0x58
    struct {
        unsigned int updatedDateEpochTime:1;
    } _has;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000028219
@property(retain, nonatomic) CPMessagingConversationActivityMetadata *activityMetadata; // @synthesize activityMetadata=_activityMetadata;
@property(retain, nonatomic) NSString *fallbackApplicationName; // @synthesize fallbackApplicationName=_fallbackApplicationName;
@property(nonatomic) double updatedDateEpochTime; // @synthesize updatedDateEpochTime=_updatedDateEpochTime;
@property(retain, nonatomic) CPMessagingHandle *originatorHandle; // @synthesize originatorHandle=_originatorHandle;
@property(retain, nonatomic) CPMessagingConversationActivityContext *activityContext; // @synthesize activityContext=_activityContext;
@property(retain, nonatomic) CPMessagingMMCSMetadata *mmcsMetadata; // @synthesize mmcsMetadata=_mmcsMetadata;
@property(retain, nonatomic) NSData *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSString *activityIdentifier; // @synthesize activityIdentifier=_activityIdentifier;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSData *applicationContext; // @synthesize applicationContext=_applicationContext;
@property(retain, nonatomic) NSString *identifierUUIDString; // @synthesize identifierUUIDString=_identifierUUIDString;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000027eb2
- (unsigned long long)hash;	// IMP=0x0000000000027c86
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000279eb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000277ef
- (void)copyTo:(id)arg1;	// IMP=0x0000000000027668
- (void)writeTo:(id)arg1;	// IMP=0x00000000000274fd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000274f0
- (id)dictionaryRepresentation;	// IMP=0x0000000000026e50
- (id)description;	// IMP=0x0000000000026da1
@property(readonly, nonatomic) _Bool hasActivityMetadata;
@property(readonly, nonatomic) _Bool hasFallbackApplicationName;
@property(nonatomic) _Bool hasUpdatedDateEpochTime;
@property(readonly, nonatomic) _Bool hasOriginatorHandle;
@property(readonly, nonatomic) _Bool hasActivityContext;
@property(readonly, nonatomic) _Bool hasMmcsMetadata;
@property(readonly, nonatomic) _Bool hasMetadata;
@property(readonly, nonatomic) _Bool hasActivityIdentifier;
@property(readonly, nonatomic) _Bool hasBundleIdentifier;
@property(readonly, nonatomic) _Bool hasApplicationContext;
@property(readonly, nonatomic) _Bool hasIdentifierUUIDString;

@end

