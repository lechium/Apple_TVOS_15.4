//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesCloud/ICRadioContentReferenceContainable-Protocol.h>
#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface ICRadioLibraryTrackContentReference <ICRadioContentReferenceContainable, NSCopying, NSSecureCoding>
{
    NSString *_containerID;	// 8 = 0x8
    NSString *_albumArtistName;	// 16 = 0x10
    NSString *_albumName;	// 24 = 0x18
    NSString *_artistName;	// 32 = 0x20
    NSString *_composerName;	// 40 = 0x28
    NSString *_copyright;	// 48 = 0x30
    NSNumber *_discCount;	// 56 = 0x38
    NSNumber *_discNumber;	// 64 = 0x40
    NSNumber *_fileSize;	// 72 = 0x48
    NSString *_genreName;	// 80 = 0x50
    NSNumber *_compilation;	// 88 = 0x58
    NSNumber *_duration;	// 96 = 0x60
    NSString *_kind;	// 104 = 0x68
    NSString *_name;	// 112 = 0x70
    NSNumber *_storeAdamIdentifier;	// 120 = 0x78
    NSNumber *_storeCloudIdentifier;	// 128 = 0x80
    NSNumber *_trackCount;	// 136 = 0x88
    NSNumber *_trackNumber;	// 144 = 0x90
    NSNumber *_year;	// 152 = 0x98
    NSString *_universalCloudLibraryID;	// 160 = 0xa0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000147ff2
- (void).cxx_destruct;	// IMP=0x0000000000147e8f
@property(copy, nonatomic) NSString *universalCloudLibraryID; // @synthesize universalCloudLibraryID=_universalCloudLibraryID;
@property(copy, nonatomic) NSNumber *year; // @synthesize year=_year;
@property(copy, nonatomic) NSNumber *trackNumber; // @synthesize trackNumber=_trackNumber;
@property(copy, nonatomic) NSNumber *trackCount; // @synthesize trackCount=_trackCount;
@property(copy, nonatomic) NSNumber *storeCloudIdentifier; // @synthesize storeCloudIdentifier=_storeCloudIdentifier;
@property(copy, nonatomic) NSNumber *storeAdamIdentifier; // @synthesize storeAdamIdentifier=_storeAdamIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(copy, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(copy, nonatomic, getter=isCompilation) NSNumber *compilation; // @synthesize compilation=_compilation;
@property(copy, nonatomic) NSString *genreName; // @synthesize genreName=_genreName;
@property(copy, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSNumber *discNumber; // @synthesize discNumber=_discNumber;
@property(copy, nonatomic) NSNumber *discCount; // @synthesize discCount=_discCount;
@property(copy, nonatomic) NSString *copyright; // @synthesize copyright=_copyright;
@property(copy, nonatomic) NSString *composerName; // @synthesize composerName=_composerName;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(copy, nonatomic) NSString *albumArtistName; // @synthesize albumArtistName=_albumArtistName;
@property(copy, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000147a05
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001475ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014724c
- (id)rawContentDictionaryWithSubscriptionStatus:(id)arg1;	// IMP=0x0000000000146d52
- (id)matchDictionaryWithSubscriptionStatus:(id)arg1;	// IMP=0x0000000000146c53
- (long long)contentType;	// IMP=0x0000000000146c48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

