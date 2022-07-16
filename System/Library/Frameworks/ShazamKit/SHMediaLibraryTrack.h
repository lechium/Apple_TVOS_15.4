//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ShazamKit/SHMediaLibraryItem-Protocol.h>

@class CLLocation, NSDate, NSMutableSet, NSSet, NSString, NSURL, SHMediaLibraryItemMetadata, SHShazamKey;

@interface SHMediaLibraryTrack : NSObject <SHMediaLibraryItem>
{
    NSString *_identifier;	// 8 = 0x8
    SHMediaLibraryItemMetadata *_metadata;	// 16 = 0x10
    NSDate *_creationDate;	// 24 = 0x18
    NSString *_recognitionIdentifier;	// 32 = 0x20
    SHShazamKey *_shazamKey;	// 40 = 0x28
    NSString *_providerName;	// 48 = 0x30
    NSString *_providerIdentifier;	// 56 = 0x38
    NSString *_title;	// 64 = 0x40
    NSString *_subtitle;	// 72 = 0x48
    CLLocation *_location;	// 80 = 0x50
    NSURL *_artworkURL;	// 88 = 0x58
    NSURL *_shazamURL;	// 96 = 0x60
    NSString *_associatedGroupIdentifier;	// 104 = 0x68
    NSMutableSet *_labelSet;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000002870
+ (void)updateLibraryTrack:(id)arg1 withMediaItem:(id)arg2;	// IMP=0x00000000000058ca
+ (id)libraryTrackFromMediaItem:(id)arg1;	// IMP=0x0000000000005711
- (void).cxx_destruct;	// IMP=0x000000000000322f
@property(retain, nonatomic) NSMutableSet *labelSet; // @synthesize labelSet=_labelSet;
@property(copy, nonatomic) NSString *associatedGroupIdentifier; // @synthesize associatedGroupIdentifier=_associatedGroupIdentifier;
@property(retain, nonatomic) NSURL *shazamURL; // @synthesize shazamURL=_shazamURL;
@property(retain, nonatomic) NSURL *artworkURL; // @synthesize artworkURL=_artworkURL;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(copy, nonatomic) NSString *providerName; // @synthesize providerName=_providerName;
@property(retain, nonatomic) SHShazamKey *shazamKey; // @synthesize shazamKey=_shazamKey;
@property(copy, nonatomic) NSString *recognitionIdentifier; // @synthesize recognitionIdentifier=_recognitionIdentifier;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) SHMediaLibraryItemMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)addLabel:(id)arg1;	// IMP=0x0000000000003071
- (void)addPlatformLabel;	// IMP=0x0000000000002f06
- (id)platformLabel;	// IMP=0x0000000000002e89
@property(readonly) unsigned long long hash;
- (_Bool)isEqualTrack:(id)arg1;	// IMP=0x0000000000002db4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002d4d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002878
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000026b5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000022aa
@property(readonly, nonatomic) _Bool shouldUpdate;
@property(readonly, nonatomic) NSSet *labels;
- (void)updateWithBuilderBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001f64
- (id)_initWithIdentifier:(id)arg1 metadata:(id)arg2 labels:(id)arg3;	// IMP=0x0000000000001e30
- (id)initWithIdentifier:(id)arg1 metadata:(id)arg2 builder:(CDUnknownBlockType)arg3;	// IMP=0x0000000000001da9
- (id)initWithIdentifier:(id)arg1 builder:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001d29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

