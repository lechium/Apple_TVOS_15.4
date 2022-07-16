//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStore/NSCopying-Protocol.h>
#import <iTunesStore/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface ISReview : NSObject <NSSecureCoding, NSCopying>
{
    long long _assetType;	// 8 = 0x8
    NSString *_body;	// 16 = 0x10
    unsigned long long _bodyMaxLength;	// 24 = 0x18
    NSURL *_infoURL;	// 32 = 0x20
    unsigned long long _itemIdentifier;	// 40 = 0x28
    NSString *_nickname;	// 48 = 0x30
    _Bool _nicknameIsConfirmed;	// 56 = 0x38
    unsigned long long _nicknameMaxLength;	// 64 = 0x40
    float _rating;	// 72 = 0x48
    NSURL *_submitURL;	// 80 = 0x50
    NSString *_title;	// 88 = 0x58
    unsigned long long _titleMaxLength;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000431c0
@property(nonatomic) unsigned long long titleMaxLength; // @synthesize titleMaxLength=_titleMaxLength;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURL *submitURL; // @synthesize submitURL=_submitURL;
@property(nonatomic) float rating; // @synthesize rating=_rating;
@property(nonatomic) unsigned long long nicknameMaxLength; // @synthesize nicknameMaxLength=_nicknameMaxLength;
@property(nonatomic) _Bool nicknameIsConfirmed; // @synthesize nicknameIsConfirmed=_nicknameIsConfirmed;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) unsigned long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(retain, nonatomic) NSURL *infoURL; // @synthesize infoURL=_infoURL;
@property(nonatomic) unsigned long long bodyMaxLength; // @synthesize bodyMaxLength=_bodyMaxLength;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(nonatomic) long long assetType; // @synthesize assetType=_assetType;
- (id)_draftsDirectoryPath;	// IMP=0x0000000000044062
- (id)_draftFileName;	// IMP=0x0000000000044039
- (_Bool)saveAsDraft;	// IMP=0x0000000000043d21
- (_Bool)restoreFromDraft;	// IMP=0x0000000000043ad4
- (_Bool)removeDraft;	// IMP=0x00000000000438e9
- (void)mergeWithReview:(id)arg1 preferLocalValues:(_Bool)arg2;	// IMP=0x00000000000435f4
- (void)loadFromDictionary:(id)arg1;	// IMP=0x000000000004324b
@property(readonly, nonatomic) _Bool hasSavedDraft;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000043046
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000042f5e
- (void)dealloc;	// IMP=0x0000000000042ee4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000042cbe

@end
