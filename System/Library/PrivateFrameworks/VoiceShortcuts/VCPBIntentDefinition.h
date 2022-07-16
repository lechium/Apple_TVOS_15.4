//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VoiceShortcuts/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface VCPBIntentDefinition : PBCodable <NSCopying>
{
    NSString *_associatedBundleID;	// 8 = 0x8
    NSMutableArray *_files;	// 16 = 0x10
}

+ (Class)filesType;	// IMP=0x000000000001742f
- (void).cxx_destruct;	// IMP=0x0000000000017226
@property(retain, nonatomic) NSMutableArray *files; // @synthesize files=_files;
@property(retain, nonatomic) NSString *associatedBundleID; // @synthesize associatedBundleID=_associatedBundleID;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000017064
- (unsigned long long)hash;	// IMP=0x0000000000017017
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000016f4f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016d76
- (void)copyTo:(id)arg1;	// IMP=0x0000000000016c9a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000016b2b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000016b1e
- (id)dictionaryRepresentation;	// IMP=0x00000000000168c8
- (id)description;	// IMP=0x0000000000016819
- (id)filesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000167fc
- (unsigned long long)filesCount;	// IMP=0x00000000000167df
- (void)addFiles:(id)arg1;	// IMP=0x0000000000016775
- (void)clearFiles;	// IMP=0x0000000000016758

@end
