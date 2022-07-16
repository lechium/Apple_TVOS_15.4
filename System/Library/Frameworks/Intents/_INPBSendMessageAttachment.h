//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSendMessageAttachment-Protocol.h>

@class NSString, _INPBFileDataAttachment, _INPBURLValue;

@interface _INPBSendMessageAttachment : PBCodable <_INPBSendMessageAttachment, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _Bool _currentLocation;	// 8 = 0x8
    _INPBFileDataAttachment *_audioMessageFile;	// 16 = 0x10
    _INPBURLValue *_audioMessageFileURL;	// 24 = 0x18
    _INPBFileDataAttachment *_file;	// 32 = 0x20
    _INPBURLValue *_fileURL;	// 40 = 0x28
    NSString *_phAssetId;	// 48 = 0x30
    _INPBURLValue *_sharedLink;	// 56 = 0x38
    _INPBURLValue *_speechDataURL;	// 64 = 0x40
    NSString *_typeIdentifier;	// 72 = 0x48
    unsigned long long _whichDatasource;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006d788
- (void).cxx_destruct;	// IMP=0x000000000006d23c
@property(readonly, nonatomic) unsigned long long whichDatasource; // @synthesize whichDatasource=_whichDatasource;
@property(copy, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
- (id)dictionaryRepresentation;	// IMP=0x000000000006ce58
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006c3f6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006c1c2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006c130
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006c031
- (void)writeTo:(id)arg1;	// IMP=0x000000000006bd2f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000006bd22
@property(readonly, nonatomic) _Bool hasTypeIdentifier;
@property(readonly, nonatomic) _Bool hasSpeechDataURL;
@property(retain, nonatomic) _INPBURLValue *speechDataURL; // @synthesize speechDataURL=_speechDataURL;
@property(readonly, nonatomic) _Bool hasSharedLink;
@property(retain, nonatomic) _INPBURLValue *sharedLink; // @synthesize sharedLink=_sharedLink;
@property(readonly, nonatomic) _Bool hasPhAssetId;
@property(copy, nonatomic) NSString *phAssetId; // @synthesize phAssetId=_phAssetId;
@property(readonly, nonatomic) _Bool hasFileURL;
@property(retain, nonatomic) _INPBURLValue *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) _Bool hasFile;
@property(retain, nonatomic) _INPBFileDataAttachment *file; // @synthesize file=_file;
@property(readonly, nonatomic) _Bool hasCurrentLocation;
@property(nonatomic) _Bool currentLocation; // @synthesize currentLocation=_currentLocation;
@property(readonly, nonatomic) _Bool hasAudioMessageFileURL;
@property(retain, nonatomic) _INPBURLValue *audioMessageFileURL; // @synthesize audioMessageFileURL=_audioMessageFileURL;
@property(readonly, nonatomic) _Bool hasAudioMessageFile;
@property(retain, nonatomic) _INPBFileDataAttachment *audioMessageFile; // @synthesize audioMessageFile=_audioMessageFile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
