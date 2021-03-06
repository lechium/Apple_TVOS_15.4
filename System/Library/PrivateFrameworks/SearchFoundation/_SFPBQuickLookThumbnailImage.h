//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBQuickLookThumbnailImage-Protocol.h>

@class NSData, NSString, _SFPBURL;

@interface _SFPBQuickLookThumbnailImage : PBCodable <_SFPBQuickLookThumbnailImage, NSSecureCoding>
{
    _SFPBURL *_filePath;	// 8 = 0x8
    NSString *_coreSpotlightIdentifier;	// 16 = 0x10
    NSString *_fileProviderIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005ef49
@property(copy, nonatomic) NSString *fileProviderIdentifier; // @synthesize fileProviderIdentifier=_fileProviderIdentifier;
@property(copy, nonatomic) NSString *coreSpotlightIdentifier; // @synthesize coreSpotlightIdentifier=_coreSpotlightIdentifier;
@property(retain, nonatomic) _SFPBURL *filePath; // @synthesize filePath=_filePath;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000005ed29
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000005ec6b
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000005ea2b
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005e5cf
- (void)writeTo:(id)arg1;	// IMP=0x000000000005e4f5
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005e4e8
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001a0a41

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

