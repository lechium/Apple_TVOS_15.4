//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BookLibraryCore/NSCopying-Protocol.h>
#import <BookLibraryCore/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL;

@interface BLBookItem : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _sample;	// 8 = 0x8
    _Bool _iTunesU;	// 9 = 0x9
    NSString *_temporaryIdentifier;	// 16 = 0x10
    NSString *_legacyUniqueIdentifier;	// 24 = 0x18
    NSString *_storeIdentifier;	// 32 = 0x20
    NSString *_persistentIdentifier;	// 40 = 0x28
    NSString *_publisherIdentifier;	// 48 = 0x30
    NSString *_title;	// 56 = 0x38
    NSString *_author;	// 64 = 0x40
    NSString *_feedURL;	// 72 = 0x48
    NSURL *_fileURL;	// 80 = 0x50
    NSURL *_permlink;	// 88 = 0x58
    long long _type;	// 96 = 0x60
    NSString *_publicationVersion;	// 104 = 0x68
    NSString *_album;	// 112 = 0x70
    NSString *_folderName;	// 120 = 0x78
    NSDictionary *_entry;	// 128 = 0x80
    NSString *_identifier;	// 136 = 0x88
    long long _purgePriority;	// 144 = 0x90
    NSDate *_lastUserAccessDate;	// 152 = 0x98
    NSString *_itunesuAssetID;	// 160 = 0xa0
    NSString *_coverImagePath;	// 168 = 0xa8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002b16b
- (void).cxx_destruct;	// IMP=0x000000000002d7c2
@property(copy, nonatomic) NSString *coverImagePath; // @synthesize coverImagePath=_coverImagePath;
@property(copy, nonatomic) NSString *itunesuAssetID; // @synthesize itunesuAssetID=_itunesuAssetID;
@property(retain, nonatomic) NSDate *lastUserAccessDate; // @synthesize lastUserAccessDate=_lastUserAccessDate;
@property(nonatomic) long long purgePriority; // @synthesize purgePriority=_purgePriority;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSDictionary *entry; // @synthesize entry=_entry;
@property(copy, nonatomic) NSString *folderName; // @synthesize folderName=_folderName;
@property(copy, nonatomic) NSString *album; // @synthesize album=_album;
@property(copy, nonatomic) NSString *publicationVersion; // @synthesize publicationVersion=_publicationVersion;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool iTunesU; // @synthesize iTunesU=_iTunesU;
@property(nonatomic, getter=isSample) _Bool sample; // @synthesize sample=_sample;
@property(retain, nonatomic) NSURL *permlink; // @synthesize permlink=_permlink;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy, nonatomic) NSString *feedURL; // @synthesize feedURL=_feedURL;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *publisherIdentifier; // @synthesize publisherIdentifier=_publisherIdentifier;
@property(copy, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(copy, nonatomic) NSString *legacyUniqueIdentifier; // @synthesize legacyUniqueIdentifier=_legacyUniqueIdentifier;
@property(copy, nonatomic) NSString *temporaryIdentifier; // @synthesize temporaryIdentifier=_temporaryIdentifier;
- (id)description;	// IMP=0x000000000002ca91
- (id)_cloudDictionaryRepresentation;	// IMP=0x000000000002c824
- (void)_setFileURL:(id)arg1;	// IMP=0x000000000002c752
- (void)_setCloudCoverImageData:(id)arg1;	// IMP=0x000000000002bfa6
- (id)_cloudCoverImageData;	// IMP=0x000000000002bcf1
@property(readonly, copy, nonatomic) NSString *mimeType;
@property(readonly, nonatomic) NSString *path;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002b5bd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002b173
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002ad7b
- (id)initWithEduCloudData:(id)arg1 path:(id)arg2;	// IMP=0x000000000002a97b
- (id)initWithPeristentIdentifier:(id)arg1 permlink:(id)arg2 title:(id)arg3;	// IMP=0x000000000002a834
- (id)initWithEntry:(id)arg1 basePath:(id)arg2;	// IMP=0x000000000002a305

@end

