//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVHomeSharingKit/BSDescriptionProviding-Protocol.h>
#import <TVHomeSharingKit/TVHKMediaObject-Protocol.h>

@class NSArray, NSDate, NSNumber, NSSet, NSString, TVHKDMAPMediaEntityIdentifier, TVHKMediaEntityIdentifier, TVHKMediaEntityKind, TVHKMediaEntityType, TVHKMediaServerIdentifier;
@protocol NSCopying, TVHKDMAPEntity;

@interface TVHKMediaEntity : NSObject <BSDescriptionProviding, TVHKMediaObject>
{
    _Bool _localChanges;	// 8 = 0x8
    TVHKMediaServerIdentifier *_mediaServerIdentifier;	// 16 = 0x10
    TVHKMediaEntityType *_type;	// 24 = 0x18
    TVHKMediaEntityIdentifier *_identifier;	// 32 = 0x20
    TVHKDMAPMediaEntityIdentifier *_DMAPIdentifier;	// 40 = 0x28
    id <TVHKDMAPEntity> _entity;	// 48 = 0x30
    TVHKMediaEntityKind *_kind;	// 56 = 0x38
    NSSet *_requestedProperties;	// 64 = 0x40
}

+ (id)new;	// IMP=0x00000000000a8a36
- (void).cxx_destruct;	// IMP=0x00000000000aa46f
@property(readonly, nonatomic) NSSet *requestedProperties; // @synthesize requestedProperties=_requestedProperties;
@property(readonly, nonatomic) TVHKMediaEntityKind *kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) id <TVHKDMAPEntity> entity; // @synthesize entity=_entity;
@property(retain, nonatomic) TVHKDMAPMediaEntityIdentifier *DMAPIdentifier; // @synthesize DMAPIdentifier=_DMAPIdentifier;
@property(nonatomic, getter=hasLocalChanges) _Bool localChanges; // @synthesize localChanges=_localChanges;
@property(copy, nonatomic) TVHKMediaEntityIdentifier *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) TVHKMediaEntityType *type; // @synthesize type=_type;
@property(readonly, nonatomic) TVHKMediaServerIdentifier *mediaServerIdentifier; // @synthesize mediaServerIdentifier=_mediaServerIdentifier;
- (id)_DMAPCodeForKeyPath:(id)arg1;	// IMP=0x00000000000aa166
- (id)_DMAPIdentifier;	// IMP=0x00000000000aa106
- (id)_entityAttributeDefaultValueForKey:(id)arg1;	// IMP=0x00000000000aa014
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000a9fc2
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000a99aa
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000a986a
- (id)succinctDescription;	// IMP=0x00000000000a981a
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a94dd
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<NSCopying> *collectionItemIdentifier;
- (id)entityAttributeValueWithBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;	// IMP=0x00000000000a9311
- (id)entityAttributeValueForKey:(id)arg1;	// IMP=0x00000000000a91d4
- (void)setEntityAttributeValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000a90b4
@property(readonly, nonatomic) unsigned long long imageNonPersistentID;
@property(readonly, nonatomic) unsigned long long persistentID;
@property(readonly, nonatomic) unsigned long long nonPersistentID;
@property(readonly, nonatomic) unsigned long long protocol;
- (void)preloadProperties;	// IMP=0x00000000000a8f99
@property(readonly, copy, nonatomic) NSArray *faces;
@property(readonly, copy, nonatomic) NSString *imageIdentifier;
@property(readonly, copy, nonatomic) NSDate *addedDate;
@property(readonly, copy, nonatomic) NSDate *releaseDate;
@property(readonly, copy, nonatomic) NSNumber *releaseYear;
@property(nonatomic) unsigned long long playedState;
@property(readonly, copy, nonatomic) NSNumber *duration;
@property(readonly, copy, nonatomic) NSString *contentDescription;
@property(readonly, copy, nonatomic) NSNumber *seasonNumber;
@property(readonly, copy, nonatomic) NSString *genreTitle;
@property(readonly, copy, nonatomic, getter=isCompilationAlbum) NSNumber *compilationAlbum;
@property(readonly, copy, nonatomic) TVHKMediaEntityIdentifier *albumIdentifier;
@property(readonly, copy, nonatomic) NSString *albumDescription;
@property(readonly, copy, nonatomic) NSString *sortAlbumTitle;
@property(readonly, copy, nonatomic) NSString *albumTitle;
@property(readonly, copy, nonatomic) NSString *sortTitle;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithMediaServerIdentifier:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4;	// IMP=0x00000000000a8ad4
- (id)init;	// IMP=0x00000000000a8a65

// Remaining properties
@property(readonly) Class superclass;

@end

