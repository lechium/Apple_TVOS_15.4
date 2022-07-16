//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface CKDPSubscriptionNotificationAlert : PBCodable <NSCopying>
{
    NSString *_actionLocKey;	// 8 = 0x8
    NSString *_category;	// 16 = 0x10
    NSString *_launchImage;	// 24 = 0x18
    NSMutableArray *_localizedArguments;	// 32 = 0x20
    NSString *_localizedKey;	// 40 = 0x28
    NSString *_soundName;	// 48 = 0x30
    NSString *_subtitle;	// 56 = 0x38
    NSMutableArray *_subtitleLocalizedArguments;	// 64 = 0x40
    NSString *_subtitleLocalizedKey;	// 72 = 0x48
    NSString *_text;	// 80 = 0x50
    NSString *_title;	// 88 = 0x58
    NSMutableArray *_titleLocalizedArguments;	// 96 = 0x60
    NSString *_titleLocalizedKey;	// 104 = 0x68
}

+ (Class)subtitleLocalizedArgumentsType;	// IMP=0x000000000017e56b
+ (Class)titleLocalizedArgumentsType;	// IMP=0x000000000017e46f
+ (Class)localizedArgumentsType;	// IMP=0x000000000017e31f
- (void).cxx_destruct;	// IMP=0x00000000001803d7
@property(retain, nonatomic) NSMutableArray *subtitleLocalizedArguments; // @synthesize subtitleLocalizedArguments=_subtitleLocalizedArguments;
@property(retain, nonatomic) NSString *subtitleLocalizedKey; // @synthesize subtitleLocalizedKey=_subtitleLocalizedKey;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSMutableArray *titleLocalizedArguments; // @synthesize titleLocalizedArguments=_titleLocalizedArguments;
@property(retain, nonatomic) NSString *titleLocalizedKey; // @synthesize titleLocalizedKey=_titleLocalizedKey;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *soundName; // @synthesize soundName=_soundName;
@property(retain, nonatomic) NSString *launchImage; // @synthesize launchImage=_launchImage;
@property(retain, nonatomic) NSString *actionLocKey; // @synthesize actionLocKey=_actionLocKey;
@property(retain, nonatomic) NSMutableArray *localizedArguments; // @synthesize localizedArguments=_localizedArguments;
@property(retain, nonatomic) NSString *localizedKey; // @synthesize localizedKey=_localizedKey;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000017fd76
- (unsigned long long)hash;	// IMP=0x000000000017fbed
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017f8ed
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017f310
- (void)copyTo:(id)arg1;	// IMP=0x000000000017efd4
- (void)writeTo:(id)arg1;	// IMP=0x000000000017ebc1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000017ebb4
- (id)dictionaryRepresentation;	// IMP=0x000000000017e62b
- (id)description;	// IMP=0x000000000017e57c
- (id)subtitleLocalizedArgumentsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000017e54e
- (unsigned long long)subtitleLocalizedArgumentsCount;	// IMP=0x000000000017e531
- (void)addSubtitleLocalizedArguments:(id)arg1;	// IMP=0x000000000017e4c7
- (void)clearSubtitleLocalizedArguments;	// IMP=0x000000000017e4aa
@property(readonly, nonatomic) _Bool hasSubtitleLocalizedKey;
@property(readonly, nonatomic) _Bool hasSubtitle;
- (id)titleLocalizedArgumentsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000017e452
- (unsigned long long)titleLocalizedArgumentsCount;	// IMP=0x000000000017e435
- (void)addTitleLocalizedArguments:(id)arg1;	// IMP=0x000000000017e3cb
- (void)clearTitleLocalizedArguments;	// IMP=0x000000000017e3ae
@property(readonly, nonatomic) _Bool hasTitleLocalizedKey;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasCategory;
@property(readonly, nonatomic) _Bool hasSoundName;
@property(readonly, nonatomic) _Bool hasLaunchImage;
@property(readonly, nonatomic) _Bool hasActionLocKey;
- (id)localizedArgumentsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000017e302
- (unsigned long long)localizedArgumentsCount;	// IMP=0x000000000017e2e5
- (void)addLocalizedArguments:(id)arg1;	// IMP=0x000000000017e27b
- (void)clearLocalizedArguments;	// IMP=0x000000000017e25e
@property(readonly, nonatomic) _Bool hasLocalizedKey;
@property(readonly, nonatomic) _Bool hasText;

@end

